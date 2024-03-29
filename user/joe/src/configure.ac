# Process this file with autoconf to produce a configure script.

# We need AC_PROG_EGREP
AC_PREREQ(2.54)

#### Here's the only place where to change version number ####
AC_INIT(joe, 3.5)
AC_CONFIG_SRCDIR([b.c])

AC_CANONICAL_BUILD
AC_CANONICAL_HOST
AC_CANONICAL_TARGET

# Init automake
AM_INIT_AUTOMAKE
AM_MAINTAINER_MODE
AM_CONFIG_HEADER(autoconf.h)

# Checks for programs.
AC_PROG_CC
AC_PROG_CPP
AC_PROG_EGREP
AC_PROG_INSTALL
AC_PROG_LN_S

case "$host" in
	*-*-solaris*)
		CPPFLAGS="$CPPFLAGS -I/usr/local/include"
		LDFLAGS="$LDFLAGS -L/usr/local/lib -R/usr/local/lib"
		;;
	*)	;;
esac

search_libs="$search_libs m"

# Checks for libraries.
AC_ARG_ENABLE(curses,
[  --disable-curses        disable use of curses library],
	curses=$enableval, curses=yes)

if test "$curses" = "yes"; then
	search_libs="ncurses curses"
fi

AC_ARG_ENABLE(termcap,
[  --disable-termcap       disable use of termcap library],
	termcap=$enableval, termcap=yes)

if test "$termcap" = "yes"; then
	search_libs="$search_libs termcap"
fi

AC_SEARCH_LIBS(openpty, util, AC_DEFINE_UNQUOTED(HAVE_OPENPTY, 1, [If we have BSD function openpty()]))
AC_SEARCH_LIBS(login_tty, util, AC_DEFINE_UNQUOTED(HAVE_LOGIN_TTY, 1, [If we have BSD function login_tty()]))
AC_SEARCH_LIBS(tgetflag, $search_libs, AC_DEFINE_UNQUOTED(TERMINFO, 1, [If we have newer terminfo/termcap capabilities]))
AC_SEARCH_LIBS(snprintf, snprintf db, AC_DEFINE_UNQUOTED(HAVE_SNPRINTF, 1, [If we have snprintf]))

# Checks for header files.
AC_SYS_LARGEFILE
AC_HEADER_DIRENT
AC_SYS_POSIX_TERMIOS
if test "$ac_cv_sys_posix_termios" = "yes"; then
	AC_DEFINE(HAVE_POSIX_TERMIOS, 1, [We have <termios.h> and <sys/termios.h>])
else
	AC_CHECK_HEADERS([termio.h sys/termio.h])
	if test "$ac_cv_header_termio_h" = "yes" -a "$ac_cvs_header_sys_termio_h" = "yes" ]; then
		AC_DEFINE(HAVE_SYSV_TERMIO, 1, [We have <termio.h> and <sys/termio.h>])
	fi
fi
AC_HEADER_TIOCGWINSZ
AC_CHECK_HEADERS([errno.h fcntl.h locale.h sgtty.h stdlib.h string.h])
AC_CHECK_HEADERS([sys/ioctl.h sys/param.h sys/time.h unistd.h utime.h])
AC_CHECK_HEADERS([sys/dirent.h time.h pwd.h paths.h pty.h libutil.h])
AC_CHECK_HEADERS([sys/types.h sys/stat.h sys/wait.h limits.h signal.h])
AC_CHECK_HEADERS([curses.h term.h utmp.h])

AC_CHECK_HEADERS([selinux/selinux.h selinux/context.h])
if test "$ac_cv_header_selinux_selinux_h" = "yes" -a "$ac_cv_header_selinux_context_h" = "yes" ; then
	echo "Enabling SELinux context copying!"
	AC_DEFINE(HAVE_SELINUX, 1, [We have SELinux headers])
fi

# Checks for typedefs, structures, and compiler characteristics.
AC_C_PROTOTYPES
AC_C_CONST
if test "$cross_compiling" = "yes" ; then
	AC_MSG_WARN(cross compiling so assuming defaults for most 32 bit machines)
fi
AC_CHECK_SIZEOF(char, 1)
AC_CHECK_SIZEOF(short, 2)
AC_CHECK_SIZEOF(int, 4)
AC_CHECK_SIZEOF(long, 4)
AC_CHECK_SIZEOF(long long, 4)
AC_CHECK_SIZEOF(void *, 4)
AC_CHECK_TYPE([sighandler_t],
	[AC_DEFINE([HAVE_SIGHANDLER_T], 1, [Define if you have the `sighandler_t' type.])],
	,
	[/* if you have signal.h header, include it */
#ifdef HAVE_SIGNAL_H
#include <signal.h>
#endif])

# Checks for library functions.
AC_PROG_GCC_TRADITIONAL
AC_FUNC_LSTAT
joe_SETPGRP
AC_TYPE_PID_T
AC_TYPE_SIZE_T
AC_TYPE_OFF_T
AC_CHECK_SIZEOF(off_t, 4)
AC_CHECK_TYPE([ssize_t], [], [
	AC_DEFINE([ssize_t], [int], [Define to `int' if <sys/types.h> does not define.])
	], [])
AC_TYPE_SIGNAL
AC_FUNC_STAT
AC_FUNC_FORK
AC_CHECK_FUNCS([getcwd getwd])
if test x"$ac_cv_func_getcwd" != xyes; then
	if test x"$ac_cv_func_getwd" != xyes; then
		AC_MSG_ERROR([don't know how to get current working directory])
	fi
fi
AC_CHECK_FUNCS([isblank])
if test x"$ac_cv_func_isblank" = xyes; then
	joe_ISBLANK
fi
AC_CHECK_FUNCS([alarm mkdir mkstemp putenv setlocale strchr strdup utime setpgid])
AC_CHECK_FUNCS([setitimer sigaction sigvec siginterrupt sigprocmask])

joe_REINSTALL_SIGHANDLERS

# check if -liconv is necessary
# if iconv() is in libc, don't bother with -liconv
#AC_CHECK_LIB(c,iconv,
#  [REQRD_LIBS= ],
#  [REQRD_LIBS=-liconv])
#
#AC_SUBST(REQRD_LIBS)

dnl OK lets try it...
dnl AM_GNU_GETTEXT([external])

AH_VERBATIM([_PARAMS],[/* Check to see if we can use strict prototypes */
#ifndef PARAMS
#  ifdef PROTOTYPES
#    define PARAMS(protos) protos
#  else
#    define PARAMS(protos) ()
#  endif
#endif])

# Check for programs..
AC_CHECK_PROG(SPELL,aspell,aspell,ispell)

AC_CONFIG_FILES([Makefile rc/Makefile man/Makefile man/ru/Makefile
syntax/Makefile po/Makefile
syntax/c.jsf syntax/perl.jsf syntax/verilog.jsf syntax/sh.jsf syntax/python.jsf
syntax/conf.jsf syntax/php.jsf syntax/mail.jsf syntax/pascal.jsf syntax/html.jsf
syntax/vhdl.jsf syntax/fortran.jsf syntax/java.jsf syntax/xml.jsf syntax/tcl.jsf
charmaps/klingon syntax/lisp.jsf syntax/csh.jsf syntax/mason.jsf syntax/diff.jsf
syntax/asm.jsf syntax/css.jsf syntax/tex.jsf syntax/ocaml.jsf syntax/4gl.jsf
syntax/sml.jsf syntax/sql.jsf syntax/awk.jsf syntax/cobol.jsf syntax/sed.jsf
syntax/ps.jsf syntax/ada.jsf syntax/troff.jsf syntax/haskell.jsf
syntax/rexx.jsf syntax/skill.jsf syntax/lua.jsf syntax/ruby.jsf syntax/m4.jsf
syntax/joerc.jsf])
AC_OUTPUT
