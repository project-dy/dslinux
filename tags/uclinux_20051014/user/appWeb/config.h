//
//	config.h -- Build configuration file for C/C++ source code.
//
//	Copyright (c) Mbedthis Software LLC, 2003-2004. All Rights Reserved.
//	The latest version of this code is available at http://www.mbedthis.com
//
//	WARNING: This file is generated by configure and matches the build 
//	configuration for the AppWeb library. DO NOT EDIT.
//
////////////////////////////////////////////////////////////////////////////////
//
//	This software is open source; you can redistribute it and/or modify it 
//	under the terms of the GNU General Public License as published by the 
//	Free Software Foundation; either version 2 of the License, or (at your 
//	option) any later version.
//
//	This program is distributed WITHOUT ANY WARRANTY; without even the 
//	implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
//	See the GNU General Public License for more details at:
//	http://www.mbedthis.com/downloads/gplLicense.html
//	
//	This General Public License does NOT permit incorporating this software 
//	into proprietary programs. If you are unable to comply with the GPL, a 
//	commercial license for this software and support services are available
//	from Mbedthis Software at http://www.mbedthis.com
//
////////////////////////////////////////////////////////////////////////////////

#ifndef _h_CONFIG_H
#define _h_CONFIG_H 1

//
//	Product version
//
#define BLD_NAME						"Mbedthis AppWeb"
#define BLD_VERSION						"1.1.3"
#define BLD_NUMBER						"0"
#define BLD_TYPE						"RELEASE"
#define BLD_DEFAULTS					"uclinux"

//
//	Other product information
//
#define BLD_COMPANY						"Mbedthis"
#define BLD_DEBUG						0
#define BLD_DIRS						"bootstrap include obj bin mpr ejs http doc appWeb images"
#define BLD_HTTP_PORT					7777
#define BLD_LIB_VERSION					"1.0.0"
#define BLD_PRODUCT						"appWeb"
#define BLD_SSL_PORT					4443

//
//	Build system settings (system doing compiling). Blank means use defaults.
//
#define BLD_BUILD_CPU					""
#define BLD_BUILD_OS					""

//
//	Hosting (target) system settings.
//
#define BLD_CPU							""
#define BLD_OS							"bld_cpu"
#define BLD_UNIX						"1"
#define MPR_CPU							MPR_UNKNOWN

//
//	Installation directories
//
#define BLD_PREFIX						"/etc/appWeb"
#define BLD_DOC_PREFIX					"/usr/share/appWeb-1.1.3"
#define BLD_INC_PREFIX					"/usr/include/appWeb"
#define BLD_LIB_PREFIX					"/usr/lib"
#define BLD_ROOT_PREFIX					"/"
#define BLD_SBIN_PREFIX					"/bin"
#define BLD_SRC_PREFIX					"/usr/src/appWeb-1.1.3"
#define BLD_WEB_PREFIX					"/var/appWeb/web"

//
//	Feature selection
//
#define BLD_FEATURE_ACCESS_LOG			0
#define BLD_FEATURE_ADMIN_MODULE		0
#define BLD_FEATURE_ASSERT				0
#define BLD_FEATURE_AUTH_MODULE			1
#define BLD_FEATURE_C_API_MODULE		0
#define BLD_FEATURE_CGI_MODULE			0
#define BLD_FEATURE_COMPAT_MODULE		0
#define BLD_FEATURE_COOKIE				1
#define BLD_FEATURE_COPY_MODULE			1
#define BLD_FEATURE_CONFIG				1
#define BLD_FEATURE_DIGEST				1
#define BLD_FEATURE_DLL					0
#define BLD_FEATURE_EGI_MODULE			0
#define BLD_FEATURE_ESP_MODULE			1
#define BLD_FEATURE_EJS_MODULE			1
#define BLD_FEATURE_KEEP_ALIVE			1
#define BLD_FEATURE_IF_MODIFIED			1
#define BLD_FEATURE_LIB_STDCPP			1
#define BLD_FEATURE_LOG					1
#define BLD_FEATURE_MULTITHREAD			0
#define BLD_FEATURE_MALLOC				0
#define BLD_FEATURE_MALLOC_STATS		0
#define BLD_FEATURE_MALLOC_LEAK			0
#define BLD_FEATURE_MALLOC_HOOK			0
#define BLD_FEATURE_OPENSSL_MODULE		0
#define BLD_FEATURE_PHP4_MODULE			0
#define BLD_FEATURE_PHP5_MODULE			0
#define BLD_FEATURE_ROMFS				0
#define BLD_FEATURE_RUN_AS_SERVICE		1
#define BLD_FEATURE_SAFE_STRINGS		0
#define BLD_FEATURE_SAMPLES				0
#define BLD_FEATURE_SESSION				1
#define BLD_FEATURE_SHARED				1
#define BLD_FEATURE_SQUEEZE				1
#define BLD_FEATURE_SSL_MODULE			0
#define BLD_FEATURE_STATIC				0
#define BLD_FEATURE_TEST				0
#define BLD_FEATURE_UPLOAD_MODULE		0
#define BLD_FEATURE_XDB_MODULE			0

//
//	Static or shared libc
//
#define BLD_FEATURE_STATIC_LINK_LIBC			0

//
//	Clean install or not
//
#define BLD_CLEAN_INSTALL						0

//
//	AppWeb configuration file
//
#define BLD_APPWEB_CONFIG						uclinux.conf

//
//	Builtin modules
//
#define BLD_FEATURE_ADMIN_MODULE_BUILTIN		0
#define BLD_FEATURE_AUTH_MODULE_BUILTIN			1
#define BLD_FEATURE_C_API_MODULE_BUILTIN		0
#define BLD_FEATURE_CGI_MODULE_BUILTIN			0
#define BLD_FEATURE_COMPAT_MODULE_BUILTIN		0
#define BLD_FEATURE_COPY_MODULE_BUILTIN			1
#define BLD_FEATURE_EGI_MODULE_BUILTIN			0
#define BLD_FEATURE_EJS_MODULE_BUILTIN			1
#define BLD_FEATURE_ESP_MODULE_BUILTIN			1
#define BLD_FEATURE_OPENSSL_MODULE_BUILTIN		0
#define BLD_FEATURE_PHP4_MODULE_BUILTIN			0
#define BLD_FEATURE_PHP5_MODULE_BUILTIN			0
#define BLD_FEATURE_SSL_MODULE_BUILTIN			0
#define BLD_FEATURE_UPLOAD_MODULE_BUILTIN		0
#define BLD_FEATURE_XDB_MODULE_BUILTIN			0

//
//	Loadable modules
//
#define BLD_FEATURE_ADMIN_MODULE_LOADABLE		0
#define BLD_FEATURE_AUTH_MODULE_LOADABLE		0
#define BLD_FEATURE_C_API_MODULE_LOADABLE		0
#define BLD_FEATURE_CGI_MODULE_LOADABLE			0
#define BLD_FEATURE_COMPAT_MODULE_LOADABLE		0
#define BLD_FEATURE_COPY_MODULE_LOADABLE		0
#define BLD_FEATURE_EGI_MODULE_LOADABLE			0
#define BLD_FEATURE_EJS_MODULE_LOADABLE			0
#define BLD_FEATURE_ESP_MODULE_LOADABLE			0
#define BLD_FEATURE_OPENSSL_MODULE_LOADABLE		0
#define BLD_FEATURE_PHP4_MODULE_LOADABLE		0
#define BLD_FEATURE_PHP5_MODULE_LOADABLE		0
#define BLD_FEATURE_SSL_MODULE_LOADABLE			0
#define BLD_FEATURE_UPLOAD_MODULE_LOADABLE		0
#define BLD_FEATURE_XDB_MODULE_LOADABLE			0

////////////////////////////////////////////////////////////////////////////////
//
//	Local variables:
//	tab-width: 4
//	c-basic-offset: 4
//	End:
//	vim600: sw=4 ts=4 fdm=marker
//	vim<600: sw=4 ts=4
//

#endif /* _h_CONFIG_H */