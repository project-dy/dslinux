# -*- buffer-read-only: t -*- vi: set ro:
# DO NOT EDIT! GENERATED AUTOMATICALLY!
# DO NOT EDIT! GENERATED AUTOMATICALLY!
# Copyright (C) 2004-2006 Free Software Foundation, Inc.
#
# This file is free software, distributed under the terms of the GNU
# General Public License.  As a special exception to the GNU General
# Public License, this file may be distributed as part of a program
# that contains a configuration script generated by Autoconf, under
# the same distribution terms as the rest of that program.
#
# Generated by gnulib-tool.
#
# This file represents the compiled summary of the specification in
# gnulib-cache.m4. It lists the computed macro invocations that need
# to be invoked from configure.ac.
# In projects using CVS, this file can be treated like other built files.


# This macro should be invoked from ./configure.ac, in the section
# "Checks for programs", right after AC_PROG_CC, and certainly before
# any checks for libraries, header files, types and library functions.
AC_DEFUN([gl_EARLY],
[
  m4_pattern_forbid([^gl_[A-Z]])dnl the gnulib macro namespace
  m4_pattern_allow([^gl_ES$])dnl a valid locale name
  m4_pattern_allow([^gl_LIBOBJS$])dnl a variable
  m4_pattern_allow([^gl_LTLIBOBJS$])dnl a variable
  AC_REQUIRE([AC_PROG_RANLIB])
  AC_REQUIRE([AC_GNU_SOURCE])
  AC_REQUIRE([gl_USE_SYSTEM_EXTENSIONS])
  AC_REQUIRE([gl_LOCK_EARLY])
])

# This macro should be invoked from ./configure.ac, in the section
# "Check for header files, types and library functions".
AC_DEFUN([gl_INIT],
[
  m4_pushdef([AC_LIBOBJ], m4_defn([gl_LIBOBJ]))
  m4_pushdef([AC_REPLACE_FUNCS], m4_defn([gl_REPLACE_FUNCS]))
  m4_pushdef([AC_LIBSOURCES], m4_defn([gl_LIBSOURCES]))
  AM_CONDITIONAL([GL_COND_LIBTOOL], [false])
  gl_cond_libtool=false
  gl_libdeps=
  gl_ltlibdeps=
  gl_source_base='.#bootmp/lib'
  AC_FUNC_ACL
  gl_FUNC_ALLOCA
  gl_ALLOCSA
  gl_ARGMATCH
  gl_HEADER_ARPA_INET
  gl_ASSERT
  gl_FUNC_ATEXIT
  gl_BACKUPFILE
  gl_FUNC_BASE64
  gl_C_STRTOD
  gl_C_STRTOLD
  AC_FUNC_CALLOC
  gl_CANON_HOST
  AC_FUNC_CANONICALIZE_FILE_NAME
  gl_FUNC_CHDIR_LONG
  gl_FUNC_CHOWN
  gl_CLOCK_TIME
  gl_CLOEXEC
  gl_CLOSE_STREAM
  gl_CLOSEOUT
  gl_CONFIG_H
  gl_CYCLE_CHECK
  gl_CHECK_TYPE_STRUCT_DIRENT_D_INO
  gl_CHECK_TYPE_STRUCT_DIRENT_D_TYPE
  gl_FUNC_DIRFD
  gl_DIRNAME
  gl_FUNC_DUP2
  gl_ERROR
  gl_FUNC_EUIDACCESS
  gl_EXCLUDE
  gl_EXITFAIL
  dnl gl_USE_SYSTEM_EXTENSIONS must be added quite early to configure.ac.
  gl_FCNTL_H
  gl_FCNTL_SAFER
  gl_FILE_TYPE
  gl_FILEBLOCKS
  gl_FILEMODE
  gl_FILE_NAME_CONCAT
  AC_C_FLEXIBLE_ARRAY_MEMBER
  # No macro. You should also use one of fnmatch-posix or fnmatch-gnu.
  gl_FUNC_FNMATCH_GNU
  gl_FOPEN_SAFER
  gl_FUNC_FPENDING
  gl_FPRINTFTIME
  gl_FUNC_FREE
  gl_FSUSAGE
  gl_FUNC_FTRUNCATE
  gl_FUNC_FTS
  gl_GETADDRINFO
  gl_FUNC_GETCWD
  gl_GETDATE
  gl_FUNC_GETDELIM
  gl_FUNC_GETGROUPS
  gl_FUNC_GETHOSTNAME
  gl_GETHRXTIME
  gl_FUNC_GETLINE
  gl_GETLOADAVG([lib])
  gl_GETNDELIM2
  gl_GETOPT
  gl_GETPAGESIZE
  gl_FUNC_GETPASS_GNU
  dnl you must add AM_GNU_GETTEXT([external]) or similar to configure.ac.
  AM_GNU_GETTEXT_VERSION([0.15])
  gl_GETTIME
  AC_FUNC_GETTIMEOFDAY_CLOBBER
  gl_GETUGROUPS
  gl_FUNC_GETUSERSHELL
  gl_FUNC_GROUP_MEMBER
  gl_HARD_LOCALE
  gl_HASH
  gl_HOST_OS
  gl_HUMAN
  gl_I_RING
  AM_ICONV
  gl_IDCACHE
  gl_INET_NTOP
  gl_INLINE
  gl_INTTOSTR
  gl_INTTYPES_H
  gl_ISAPIPE
  gl_FUNC_LCHMOD
  gl_FUNC_LCHOWN
  gl_IGNORE_UNUSED_LIBRARIES
  gl_AC_FUNC_LINK_FOLLOWS_SYMLINK
  gl_LOCALCHARSET
  gl_LONG_OPTIONS
  gl_FUNC_LSTAT
  AC_FUNC_MALLOC
  gl_MBCHAR
  gl_MBSWIDTH
  gl_MBITER
  gl_MD5
  gl_MEMCASECMP
  gl_FUNC_MEMCHR
  gl_FUNC_MEMCMP
  gl_MEMCOLL
  gl_FUNC_MEMCPY
  gl_FUNC_MEMMOVE
  gl_FUNC_MEMPCPY
  gl_FUNC_MEMRCHR
  gl_FUNC_MEMSET
  gl_MKANCESDIRS
  gl_FUNC_MKDIR_TRAILING_SLASH
  gl_MKDIR_PARENTS
  gl_FUNC_MKSTEMP
  gl_FUNC_MKTIME
  gl_MODECHANGE
  gl_MOUNTLIST
  gl_FUNC_NANOSLEEP
  gl_HEADER_NETINET_IN
  AC_FUNC_OBSTACK
  dnl Note: AC_FUNC_OBSTACK does AC_LIBSOURCES([obstack.h, obstack.c]).
  gl_FUNC_OPENAT
  gl_PATHMAX
  gl_PERL
  gl_PHYSMEM
  gl_POSIXTM
  gl_POSIXVER
  gl_FUNC_PUTENV
  gl_QUOTE
  gl_QUOTEARG
  AC_REPLACE_FUNCS(raise)
  gl_FUNC_READLINK
  gl_READTOKENS
  gl_READUTMP
  AC_FUNC_REALLOC
  gl_REGEX
  gl_FUNC_RENAME
  gl_FUNC_RENAME_TRAILING_DEST_SLASH
  gl_FUNC_RMDIR
  gl_FUNC_RMDIR_NOTEMPTY
  gl_ROOT_DEV_INO
  gl_FUNC_RPMATCH
  gl_SAFE_READ
  gl_SAFE_WRITE
  gl_SAME
  gl_SAVE_CWD
  gl_SAVEDIR
  gl_SAVEWD
  gt_FUNC_SETENV
  gl_SETTIME
  gl_SHA1
  gl_FUNC_SIG2STR
  gl_FUNC_SNPRINTF
  gl_TYPE_SOCKLEN_T
  gt_TYPE_SSIZE_T
  gl_STAT_TIME
  gl_STDARG_H
  AM_STDBOOL_H
  gl_STDINT_H
  gl_STDLIB_SAFER
  gl_FUNC_STPCPY
  gl_STRCASE
  gl_FUNC_STRCSPN
  gl_FUNC_STRDUP
  gl_FUNC_GNU_STRFTIME
  gl_FUNC_STRNDUP
  gl_FUNC_STRNLEN
  gl_FUNC_STRPBRK
  gl_FUNC_STRTOD
  gl_FUNC_STRTOIMAX
  gl_FUNC_STRTOL
  gl_FUNC_STRTOLL
  gl_FUNC_STRTOUL
  gl_FUNC_STRTOULL
  gl_FUNC_STRTOUMAX
  gl_FUNC_STRVERSCMP
  gl_HEADER_SYS_SOCKET
  gl_HEADER_SYS_STAT_H
  gl_FUNC_GEN_TEMPNAME
  gl_TIME_R
  gl_TIMESPEC
  gl_FUNC_TZSET_CLOBBER
  gl_UNICODEIO
  gl_HEADER_UNISTD
  gl_UNISTD_SAFER
  gl_FUNC_UNLINK_BUSY_TEXT
  gl_UNLINKDIR
  gl_FUNC_GLIBC_UNLOCKED_IO
  gl_SYS_PROC_UPTIME
  gl_USERSPEC
  gl_FUNC_UTIME
  gl_UTIMECMP
  gl_UTIMENS
  gl_FUNC_VASNPRINTF
  gl_FUNC_VASPRINTF
  gl_FUNC_WCWIDTH
  gl_HEADER_TIOCGWINSZ_NEEDS_SYS_IOCTL
  gl_HEADER_TIOCGWINSZ_IN_TERMIOS_H
  gl_WINSIZE_IN_PTEM
  gl_XALLOC
  gl_XGETCWD
  gl_XNANOSLEEP
  gl_XREADLINK
  gl_XSTRNDUP
  gl_XSTRTOD
  gl_XSTRTOL
  gl_XSTRTOLD
  gl_YESNO
  LIBCOREUTILS_LIBDEPS="$gl_libdeps"
  AC_SUBST([LIBCOREUTILS_LIBDEPS])
  LIBCOREUTILS_LTLIBDEPS="$gl_ltlibdeps"
  AC_SUBST([LIBCOREUTILS_LTLIBDEPS])
  m4_popdef([AC_LIBSOURCES])
  m4_popdef([AC_REPLACE_FUNCS])
  m4_popdef([AC_LIBOBJ])
  AC_CONFIG_COMMANDS_PRE([
    gl_libobjs=
    gl_ltlibobjs=
    if test -n "$gl_LIBOBJS"; then
      # Remove the extension.
      sed_drop_objext='s/\.o$//;s/\.obj$//'
      for i in `for i in $gl_LIBOBJS; do echo "$i"; done | sed "$sed_drop_objext" | sort | uniq`; do
        gl_libobjs="$gl_libobjs $i.$ac_objext"
        gl_ltlibobjs="$gl_ltlibobjs $i.lo"
      done
    fi
    AC_SUBST([gl_LIBOBJS], [$gl_libobjs])
    AC_SUBST([gl_LTLIBOBJS], [$gl_ltlibobjs])
  ])
])

# Like AC_LIBOBJ, except that the module name goes
# into gl_LIBOBJS instead of into LIBOBJS.
AC_DEFUN([gl_LIBOBJ],
  [gl_LIBOBJS="$gl_LIBOBJS $1.$ac_objext"])

# Like AC_REPLACE_FUNCS, except that the module name goes
# into gl_LIBOBJS instead of into LIBOBJS.
AC_DEFUN([gl_REPLACE_FUNCS],
  [AC_CHECK_FUNCS([$1], , [gl_LIBOBJ($ac_func)])])

# Like AC_LIBSOURCES, except that it does nothing.
# We rely on EXTRA_lib..._SOURCES instead.
AC_DEFUN([gl_LIBSOURCES],
  [])

# This macro records the list of files which have been installed by
# gnulib-tool and may be removed by future gnulib-tool invocations.
AC_DEFUN([gl_FILE_LIST], [
  build-aux/config.rpath
  build-aux/gnupload
  doc/fdl.texi
  doc/getdate.texi
  lib/__fpending.c
  lib/__fpending.h
  lib/acl.c
  lib/acl.h
  lib/alloca.c
  lib/alloca_.h
  lib/allocsa.c
  lib/allocsa.h
  lib/allocsa.valgrind
  lib/argmatch.c
  lib/argmatch.h
  lib/asnprintf.c
  lib/asprintf.c
  lib/at-func.c
  lib/atexit.c
  lib/backupfile.c
  lib/backupfile.h
  lib/base64.c
  lib/base64.h
  lib/basename.c
  lib/c-strtod.c
  lib/c-strtod.h
  lib/c-strtold.c
  lib/calloc.c
  lib/canon-host.c
  lib/canon-host.h
  lib/canonicalize.c
  lib/canonicalize.h
  lib/chdir-long.c
  lib/chdir-long.h
  lib/chown.c
  lib/cloexec.c
  lib/cloexec.h
  lib/close-stream.c
  lib/close-stream.h
  lib/closeout.c
  lib/closeout.h
  lib/config.charset
  lib/creat-safer.c
  lib/cycle-check.c
  lib/cycle-check.h
  lib/dev-ino.h
  lib/diacrit.c
  lib/diacrit.h
  lib/dirchownmod.c
  lib/dirchownmod.h
  lib/dirfd.c
  lib/dirfd.h
  lib/dirname.c
  lib/dirname.h
  lib/dup-safer.c
  lib/dup2.c
  lib/error.c
  lib/error.h
  lib/euidaccess.c
  lib/euidaccess.h
  lib/exclude.c
  lib/exclude.h
  lib/exit.h
  lib/exitfail.c
  lib/exitfail.h
  lib/fchmodat.c
  lib/fchown-stub.c
  lib/fcntl--.h
  lib/fcntl-safer.h
  lib/fcntl_.h
  lib/fd-safer.c
  lib/file-type.c
  lib/file-type.h
  lib/fileblocks.c
  lib/filemode.c
  lib/filemode.h
  lib/filenamecat.c
  lib/filenamecat.h
  lib/fnmatch.c
  lib/fnmatch_.h
  lib/fnmatch_loop.c
  lib/fopen-safer.c
  lib/fprintftime.c
  lib/fprintftime.h
  lib/free.c
  lib/fstatat.c
  lib/fsusage.c
  lib/fsusage.h
  lib/ftruncate.c
  lib/fts-cycle.c
  lib/fts.c
  lib/fts_.h
  lib/full-read.c
  lib/full-read.h
  lib/full-write.c
  lib/full-write.h
  lib/gai_strerror.c
  lib/getaddrinfo.c
  lib/getaddrinfo.h
  lib/getcwd.c
  lib/getcwd.h
  lib/getdate.h
  lib/getdate.y
  lib/getdelim.c
  lib/getdelim.h
  lib/getgroups.c
  lib/gethostname.c
  lib/gethrxtime.c
  lib/gethrxtime.h
  lib/getline.c
  lib/getline.h
  lib/getloadavg.c
  lib/getndelim2.c
  lib/getndelim2.h
  lib/getopt.c
  lib/getopt1.c
  lib/getopt_.h
  lib/getopt_int.h
  lib/getpagesize.h
  lib/getpass.c
  lib/getpass.h
  lib/gettext.h
  lib/gettime.c
  lib/gettimeofday.c
  lib/getugroups.c
  lib/getusershell.c
  lib/group-member.c
  lib/group-member.h
  lib/hard-locale.c
  lib/hard-locale.h
  lib/hash-pjw.c
  lib/hash-pjw.h
  lib/hash.c
  lib/hash.h
  lib/human.c
  lib/human.h
  lib/i-ring.c
  lib/i-ring.h
  lib/idcache.c
  lib/imaxtostr.c
  lib/inet_ntop.c
  lib/inet_ntop.h
  lib/intprops.h
  lib/inttostr.c
  lib/inttostr.h
  lib/inttypes_.h
  lib/isapipe.c
  lib/isapipe.h
  lib/lchmod.h
  lib/lchown.c
  lib/lchown.h
  lib/linebuffer.c
  lib/linebuffer.h
  lib/localcharset.c
  lib/localcharset.h
  lib/long-options.c
  lib/long-options.h
  lib/lstat.c
  lib/lstat.h
  lib/malloc.c
  lib/mbchar.c
  lib/mbchar.h
  lib/mbswidth.c
  lib/mbswidth.h
  lib/mbuiter.h
  lib/md5.c
  lib/md5.h
  lib/memcasecmp.c
  lib/memcasecmp.h
  lib/memchr.c
  lib/memcmp.c
  lib/memcoll.c
  lib/memcoll.h
  lib/memcpy.c
  lib/memmove.c
  lib/mempcpy.c
  lib/mempcpy.h
  lib/memrchr.c
  lib/memrchr.h
  lib/memset.c
  lib/mkancesdirs.c
  lib/mkancesdirs.h
  lib/mkdir-p.c
  lib/mkdir-p.h
  lib/mkdir.c
  lib/mkdirat.c
  lib/mkstemp-safer.c
  lib/mkstemp.c
  lib/mkstemp.h
  lib/mktime.c
  lib/modechange.c
  lib/modechange.h
  lib/mountlist.c
  lib/mountlist.h
  lib/nanosleep.c
  lib/obstack.c
  lib/obstack.h
  lib/offtostr.c
  lib/open-safer.c
  lib/openat-die.c
  lib/openat-priv.h
  lib/openat-proc.c
  lib/openat.c
  lib/openat.h
  lib/pathmax.h
  lib/physmem.c
  lib/physmem.h
  lib/pipe-safer.c
  lib/posixtm.c
  lib/posixtm.h
  lib/posixver.c
  lib/posixver.h
  lib/printf-args.c
  lib/printf-args.h
  lib/printf-parse.c
  lib/printf-parse.h
  lib/putenv.c
  lib/quote.c
  lib/quote.h
  lib/quotearg.c
  lib/quotearg.h
  lib/raise.c
  lib/readlink.c
  lib/readtokens.c
  lib/readtokens.h
  lib/readtokens0.c
  lib/readtokens0.h
  lib/readutmp.c
  lib/readutmp.h
  lib/realloc.c
  lib/ref-add.sin
  lib/ref-del.sin
  lib/regcomp.c
  lib/regex.c
  lib/regex.h
  lib/regex_internal.c
  lib/regex_internal.h
  lib/regexec.c
  lib/rename-dest-slash.c
  lib/rename.c
  lib/rmdir.c
  lib/root-dev-ino.c
  lib/root-dev-ino.h
  lib/rpmatch.c
  lib/safe-read.c
  lib/safe-read.h
  lib/safe-write.c
  lib/safe-write.h
  lib/same-inode.h
  lib/same.c
  lib/same.h
  lib/save-cwd.c
  lib/save-cwd.h
  lib/savedir.c
  lib/savedir.h
  lib/savewd.c
  lib/savewd.h
  lib/setenv.c
  lib/setenv.h
  lib/settime.c
  lib/sha1.c
  lib/sha1.h
  lib/sig2str.c
  lib/sig2str.h
  lib/snprintf.c
  lib/snprintf.h
  lib/socket_.h
  lib/stat-macros.h
  lib/stat-time.h
  lib/stat_.h
  lib/stdbool_.h
  lib/stdint_.h
  lib/stdio--.h
  lib/stdio-safer.h
  lib/stdlib--.h
  lib/stdlib-safer.h
  lib/stpcpy.c
  lib/stpcpy.h
  lib/strcase.h
  lib/strcasecmp.c
  lib/strcspn.c
  lib/strdup.c
  lib/strdup.h
  lib/strftime.c
  lib/strftime.h
  lib/stripslash.c
  lib/strncasecmp.c
  lib/strndup.c
  lib/strndup.h
  lib/strnlen.c
  lib/strnlen.h
  lib/strnlen1.c
  lib/strnlen1.h
  lib/strpbrk.c
  lib/strpbrk.h
  lib/strtod.c
  lib/strtoimax.c
  lib/strtol.c
  lib/strtoll.c
  lib/strtoul.c
  lib/strtoull.c
  lib/strtoumax.c
  lib/strverscmp.c
  lib/strverscmp.h
  lib/tempname.c
  lib/tempname.h
  lib/time_r.c
  lib/time_r.h
  lib/timespec.h
  lib/uinttostr.c
  lib/umaxtostr.c
  lib/unicodeio.c
  lib/unicodeio.h
  lib/unistd--.h
  lib/unistd-safer.h
  lib/unlinkdir.c
  lib/unlinkdir.h
  lib/unlocked-io.h
  lib/unsetenv.c
  lib/userspec.c
  lib/userspec.h
  lib/utime.c
  lib/utimecmp.c
  lib/utimecmp.h
  lib/utimens.c
  lib/utimens.h
  lib/vasnprintf.c
  lib/vasnprintf.h
  lib/vasprintf.c
  lib/vasprintf.h
  lib/verify.h
  lib/version-etc-fsf.c
  lib/version-etc.c
  lib/version-etc.h
  lib/wcwidth.h
  lib/xalloc-die.c
  lib/xalloc.h
  lib/xgetcwd.c
  lib/xgetcwd.h
  lib/xgethostname.c
  lib/xgethostname.h
  lib/xmalloc.c
  lib/xmemcoll.c
  lib/xmemcoll.h
  lib/xnanosleep.c
  lib/xnanosleep.h
  lib/xreadlink.c
  lib/xreadlink.h
  lib/xstrndup.c
  lib/xstrndup.h
  lib/xstrtod.c
  lib/xstrtod.h
  lib/xstrtoimax.c
  lib/xstrtol.c
  lib/xstrtol.h
  lib/xstrtold.c
  lib/xstrtoul.c
  lib/xstrtoumax.c
  lib/xtime.h
  lib/yesno.c
  lib/yesno.h
  m4/absolute-header.m4
  m4/acl.m4
  m4/alloca.m4
  m4/allocsa.m4
  m4/argmatch.m4
  m4/arpa_inet_h.m4
  m4/assert.m4
  m4/atexit.m4
  m4/backupfile.m4
  m4/base64.m4
  m4/bison.m4
  m4/c-strtod.m4
  m4/calloc.m4
  m4/canon-host.m4
  m4/canonicalize.m4
  m4/chdir-long.m4
  m4/chown.m4
  m4/clock_time.m4
  m4/cloexec.m4
  m4/close-stream.m4
  m4/closeout.m4
  m4/codeset.m4
  m4/config-h.m4
  m4/cycle-check.m4
  m4/d-ino.m4
  m4/d-type.m4
  m4/dirfd.m4
  m4/dirname.m4
  m4/dos.m4
  m4/double-slash-root.m4
  m4/dup2.m4
  m4/eealloc.m4
  m4/eoverflow.m4
  m4/error.m4
  m4/euidaccess.m4
  m4/exclude.m4
  m4/exitfail.m4
  m4/extensions.m4
  m4/fcntl-safer.m4
  m4/fcntl_h.m4
  m4/file-type.m4
  m4/fileblocks.m4
  m4/filemode.m4
  m4/filenamecat.m4
  m4/flexmember.m4
  m4/fnmatch.m4
  m4/fpending.m4
  m4/fprintftime.m4
  m4/free.m4
  m4/fstypename.m4
  m4/fsusage.m4
  m4/ftruncate.m4
  m4/fts.m4
  m4/getaddrinfo.m4
  m4/getcwd-abort-bug.m4
  m4/getcwd-path-max.m4
  m4/getcwd.m4
  m4/getdate.m4
  m4/getdelim.m4
  m4/getgroups.m4
  m4/gethostname.m4
  m4/gethrxtime.m4
  m4/getline.m4
  m4/getloadavg.m4
  m4/getndelim2.m4
  m4/getopt.m4
  m4/getpagesize.m4
  m4/getpass.m4
  m4/gettext.m4
  m4/gettime.m4
  m4/gettimeofday.m4
  m4/getugroups.m4
  m4/getusershell.m4
  m4/glibc2.m4
  m4/glibc21.m4
  m4/group-member.m4
  m4/hard-locale.m4
  m4/hash.m4
  m4/host-os.m4
  m4/human.m4
  m4/i-ring.m4
  m4/iconv.m4
  m4/idcache.m4
  m4/inet_ntop.m4
  m4/inline.m4
  m4/intdiv0.m4
  m4/intl.m4
  m4/intldir.m4
  m4/intmax.m4
  m4/intmax_t.m4
  m4/inttostr.m4
  m4/inttypes-pri.m4
  m4/inttypes.m4
  m4/inttypes_h.m4
  m4/isapipe.m4
  m4/jm-winsz1.m4
  m4/jm-winsz2.m4
  m4/lchmod.m4
  m4/lchown.m4
  m4/lcmessage.m4
  m4/lib-ignore.m4
  m4/lib-ld.m4
  m4/lib-link.m4
  m4/lib-prefix.m4
  m4/link-follow.m4
  m4/localcharset.m4
  m4/lock.m4
  m4/long-options.m4
  m4/longdouble.m4
  m4/longlong.m4
  m4/ls-mntd-fs.m4
  m4/lstat.m4
  m4/mbchar.m4
  m4/mbiter.m4
  m4/mbrtowc.m4
  m4/mbstate_t.m4
  m4/mbswidth.m4
  m4/md5.m4
  m4/memcasecmp.m4
  m4/memchr.m4
  m4/memcmp.m4
  m4/memcoll.m4
  m4/memcpy.m4
  m4/memmove.m4
  m4/mempcpy.m4
  m4/memrchr.m4
  m4/memset.m4
  m4/mkancesdirs.m4
  m4/mkdir-p.m4
  m4/mkdir-slash.m4
  m4/mkstemp.m4
  m4/mktime.m4
  m4/modechange.m4
  m4/mountlist.m4
  m4/nanosleep.m4
  m4/netinet_in_h.m4
  m4/nls.m4
  m4/openat.m4
  m4/pathmax.m4
  m4/perl.m4
  m4/physmem.m4
  m4/po.m4
  m4/posixtm.m4
  m4/posixver.m4
  m4/printf-posix.m4
  m4/progtest.m4
  m4/putenv.m4
  m4/quote.m4
  m4/quotearg.m4
  m4/readlink.m4
  m4/readtokens.m4
  m4/readutmp.m4
  m4/regex.m4
  m4/rename-dest-slash.m4
  m4/rename.m4
  m4/rmdir-errno.m4
  m4/rmdir.m4
  m4/root-dev-ino.m4
  m4/rpmatch.m4
  m4/safe-read.m4
  m4/safe-write.m4
  m4/same.m4
  m4/save-cwd.m4
  m4/savedir.m4
  m4/savewd.m4
  m4/setenv.m4
  m4/settime.m4
  m4/sha1.m4
  m4/sig2str.m4
  m4/size_max.m4
  m4/snprintf.m4
  m4/socklen.m4
  m4/sockpfaf.m4
  m4/ssize_t.m4
  m4/st_dm_mode.m4
  m4/stat-time.m4
  m4/stdarg.m4
  m4/stdbool.m4
  m4/stdint.m4
  m4/stdint_h.m4
  m4/stdio-safer.m4
  m4/stdlib-safer.m4
  m4/stpcpy.m4
  m4/strcase.m4
  m4/strcspn.m4
  m4/strdup.m4
  m4/strftime.m4
  m4/strndup.m4
  m4/strnlen.m4
  m4/strpbrk.m4
  m4/strtod.m4
  m4/strtoimax.m4
  m4/strtol.m4
  m4/strtoll.m4
  m4/strtoul.m4
  m4/strtoull.m4
  m4/strtoumax.m4
  m4/strverscmp.m4
  m4/sys_socket_h.m4
  m4/sys_stat_h.m4
  m4/tempname.m4
  m4/time_r.m4
  m4/timespec.m4
  m4/tm_gmtoff.m4
  m4/tzset.m4
  m4/uintmax_t.m4
  m4/ulonglong.m4
  m4/unicodeio.m4
  m4/unistd-safer.m4
  m4/unistd_h.m4
  m4/unlink-busy.m4
  m4/unlinkdir.m4
  m4/unlocked-io.m4
  m4/uptime.m4
  m4/userspec.m4
  m4/utimbuf.m4
  m4/utime.m4
  m4/utimecmp.m4
  m4/utimens.m4
  m4/utimes-null.m4
  m4/utimes.m4
  m4/vasnprintf.m4
  m4/vasprintf.m4
  m4/visibility.m4
  m4/wchar_t.m4
  m4/wcwidth.m4
  m4/wint_t.m4
  m4/xalloc.m4
  m4/xgetcwd.m4
  m4/xnanosleep.m4
  m4/xreadlink.m4
  m4/xsize.m4
  m4/xstrndup.m4
  m4/xstrtod.m4
  m4/xstrtol.m4
  m4/yesno.m4
])
