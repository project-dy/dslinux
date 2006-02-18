#
# (C) Tenable Network Security
#

if(description)
{
 script_id(11820);
 script_version ("$Revision$");
 script_cve_id("CAN-2003-0540", "CAN-2003-0468");
 script_bugtraq_id(8361, 8362);
 
 name["english"] = "Postfix Multiple Vulnerabilities";
 script_name(english:name["english"]);
 
 desc["english"] = "
The remote host is running a version of Postfix which is as old
as, or older than 1.1.12.

There are two vulnerabilties in this version which may allow an attacker
to remotely disable it, or to be used as a DDoS agent against arbitrary
hosts.

Solution : Upgrade to Postfix 2.0
Risk Factor : High";

 script_description(english:desc["english"]);
		    
 
 summary["english"] = "Checks the version of the remote Postfix daemon";
 script_summary(english:summary["english"]);
 
 script_category(ACT_GATHER_INFO);
 
 script_copyright(english:"This script is Copyright (C) 2003 Tenable Network Security");
 
 
 family["english"] = "SMTP problems";
 family["francais"] = "Probl�mes SMTP";
 script_family(english:family["english"], francais:family["francais"]);
 script_dependencie("smtpscan.nasl");
 
 script_require_ports("Services/smtp", 25);
 exit(0);
}

#
# The script code starts here
#

port = get_kb_item("Services/smtp");
if(!port)port = 25;

banner = get_kb_item("smtp/" + port + "/real_banner");
if(!banner)exit(0);

if(ereg(pattern:".*Postfix 1\.(0\..*|1\.([0-9][^0-9]|1[0-2]))", string:banner)||
   ereg(pattern:".*Postfix 2001.*", string:banner))
{
 security_hole(port);
}
