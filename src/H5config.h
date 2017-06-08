/* src/H5config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
#undef AC_APPLE_UNIVERSAL_BUILD

/* Define if C++ compiler recognizes offsetof */
#define CXX_HAVE_OFFSETOF

/* Define if this is a debug build. */
#undef DEBUG_BUILD

/* Define the default plugins path to compile */
#undef DEFAULT_PLUGINDIR

/* Define if dev_t is a scalar */
#undef DEV_T_IS_SCALAR

/* Define to dummy `main' function (if any) required to link to the Fortran
   libraries. */
#undef FC_DUMMY_MAIN

/* Define if F77 and FC dummy `main' functions are identical. */
#undef FC_DUMMY_MAIN_EQ_F77

/* Define to a macro mangling the given C identifier (in lower and upper
   case), which must not contain underscores, for linking with Fortran. */
#undef FC_FUNC

/* As FC_FUNC, but for C identifiers containing underscores. */
#undef FC_FUNC_

/* Define if Fortran C_LONG_DOUBLE is different from C_DOUBLE */
#undef FORTRAN_C_LONG_DOUBLE_IS_UNIQUE

/* Define if we have Fortran C_LONG_DOUBLE */
#undef FORTRAN_HAVE_C_LONG_DOUBLE

/* Define if we have Fortran intrinsic C_SIZEOF */
#undef FORTRAN_HAVE_C_SIZEOF

/* Define if we have Fortran intrinsic SIZEOF */
#undef FORTRAN_HAVE_SIZEOF

/* Define if we have Fortran intrinsic STORAGE_SIZE */
#undef FORTRAN_HAVE_STORAGE_SIZE

/* Determine the size of C long double */
#undef FORTRAN_SIZEOF_LONG_DOUBLE

/* Define Fortran compiler ID */
#undef Fortran_COMPILER_ID

/* Define valid Fortran INTEGER KINDs */
#undef H5CONFIG_F_IKIND

/* Define number of valid Fortran INTEGER KINDs */
#undef H5CONFIG_F_NUM_IKIND

/* Define number of valid Fortran REAL KINDs */
#undef H5CONFIG_F_NUM_RKIND

/* Define valid Fortran REAL KINDs */
#undef H5CONFIG_F_RKIND

/* Define valid Fortran REAL KINDs Sizeof */
#undef H5CONFIG_F_RKIND_SIZEOF

/* Define to 1 if you have the `alarm' function. */
#undef HAVE_ALARM

/* Define to 1 if you have the `asprintf' function. */
#undef HAVE_ASPRINTF

/* Define if the __attribute__(()) extension is present */
#undef HAVE_ATTRIBUTE

/* Define if the compiler understands C99 designated initialization of structs
   and unions */
#undef HAVE_C99_DESIGNATED_INITIALIZER

/* Define if the compiler understands the __func__ keyword */
#undef HAVE_C99_FUNC

/* Define to 1 if you have the `clock_gettime' function. */
#undef HAVE_CLOCK_GETTIME

/* Define if the function stack tracing code is to be compiled in */
#undef HAVE_CODESTACK

/* Define if Darwin or Mac OS X */
#undef HAVE_DARWIN

/* Define to 1 if you have the `difftime' function. */
#undef HAVE_DIFFTIME

/* Define if the direct I/O virtual file driver (VFD) should be compiled */
#undef HAVE_DIRECT

/* Define to 1 if you have the <dirent.h> header file. */
#undef HAVE_DIRENT_H

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H

/* Define to 1 if you have the <dmalloc.h> header file. */
#undef HAVE_DMALLOC_H

/* Define if library information should be embedded in the executables */
#undef HAVE_EMBEDDED_LIBINFO

/* Define to 1 if you have the `fcntl' function. */
#undef HAVE_FCNTL

/* Define to 1 if you have the <features.h> header file. */
#undef HAVE_FEATURES_H

/* Define if support for deflate (zlib) filter is enabled */
#undef HAVE_FILTER_DEFLATE

/* Define if support for szip filter is enabled */
#undef HAVE_FILTER_SZIP

/* Determine if __float128 is available */
#undef HAVE_FLOAT128

/* Define to 1 if you have the `flock' function. */
#undef HAVE_FLOCK

/* Define to 1 if you have the `fork' function. */
#undef HAVE_FORK

/* Define to 1 if you have the `frexpf' function. */
#undef HAVE_FREXPF

/* Define to 1 if you have the `frexpl' function. */
#undef HAVE_FREXPL

/* Define if the compiler understands the __FUNCTION__ keyword */
#undef HAVE_FUNCTION

/* Determine if INTEGER*16 is available */
#undef HAVE_Fortran_INTEGER_SIZEOF_16

/* Define to 1 if you have the `GetConsoleScreenBufferInfo' function. */
#undef HAVE_GETCONSOLESCREENBUFFERINFO

/* Define to 1 if you have the `gethostname' function. */
#undef HAVE_GETHOSTNAME

/* Define to 1 if you have the `getpwuid' function. */
#undef HAVE_GETPWUID

/* Define to 1 if you have the `getrusage' function. */
#undef HAVE_GETRUSAGE

/* Define to 1 if you have the `gettextinfo' function. */
#undef HAVE_GETTEXTINFO

/* Define to 1 if you have the `gettimeofday' function. */
#undef HAVE_GETTIMEOFDAY

/* Define if the compiler understands inline */
#undef HAVE_INLINE

/* Define if parallel library will contain instrumentation to detect correct
   optimization operation */
#undef HAVE_INSTRUMENTED_LIBRARY

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* Define to 1 if you have the `ioctl' function. */
#undef HAVE_IOCTL

/* Define to 1 if you have the <io.h> header file. */
#undef HAVE_IO_H

/* Define to 1 if you have the `dl' library (-ldl). */
#undef HAVE_LIBDL

/* Define to 1 if you have the `dmalloc' library (-ldmalloc). */
#undef HAVE_LIBDMALLOC

/* Define to 1 if you have the `m' library (-lm). */
#undef HAVE_LIBM

/* Define to 1 if you have the `mpe' library (-lmpe). */
#undef HAVE_LIBMPE

/* Define to 1 if you have the `pthread' library (-lpthread). */
#undef HAVE_LIBPTHREAD

/* Define to 1 if you have the `sz' library (-lsz). */
#undef HAVE_LIBSZ

/* Define to 1 if you have the `ws2_32' library (-lws2_32). */
#undef HAVE_LIBWS2_32

/* Define to 1 if you have the `z' library (-lz). */
#undef HAVE_LIBZ

/* Define to 1 if you have the `llround' function. */
#undef HAVE_LLROUND

/* Define to 1 if you have the `llroundf' function. */
#undef HAVE_LLROUNDF

/* Define to 1 if you have the `longjmp' function. */
#undef HAVE_LONGJMP

/* Define to 1 if you have the `lround' function. */
#undef HAVE_LROUND

/* Define to 1 if you have the `lroundf' function. */
#undef HAVE_LROUNDF

/* Define to 1 if you have the `lstat' function. */
#undef HAVE_LSTAT

/* Define to 1 if you have the <mach/mach_time.h> header file. */
#undef HAVE_MACH_MACH_TIME_H

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define if we have MPE support */
#undef HAVE_MPE

/* Define to 1 if you have the <mpe.h> header file. */
#undef HAVE_MPE_H

/* Define if MPI_Comm_c2f and MPI_Comm_f2c exist */
#undef HAVE_MPI_MULTI_LANG_Comm

/* Define if MPI_Info_c2f and MPI_Info_f2c exist */
#undef HAVE_MPI_MULTI_LANG_Info

/* Define if we have parallel support */
#undef HAVE_PARALLEL

/* Define to 1 if you have the <pthread.h> header file. */
#undef HAVE_PTHREAD_H

/* Define to 1 if you have the <quadmath.h> header file. */
#undef HAVE_QUADMATH_H

/* Define to 1 if you have the `random' function. */
#undef HAVE_RANDOM

/* Define to 1 if you have the `rand_r' function. */
#undef HAVE_RAND_R

/* Define to 1 if you have the `round' function. */
#def HAVE_ROUND 1

/* Define to 1 if you have the `roundf' function. */
#undef HAVE_ROUNDF

/* Define to 1 if you have the `setjmp' function. */
#undef HAVE_SETJMP

/* Define to 1 if you have the <setjmp.h> header file. */
#undef HAVE_SETJMP_H

/* Define to 1 if you have the `setsysinfo' function. */
#undef HAVE_SETSYSINFO

/* Define to 1 if you have the `siglongjmp' function. */
#undef HAVE_SIGLONGJMP

/* Define to 1 if you have the `signal' function. */
#undef HAVE_SIGNAL

/* Define to 1 if you have the `sigprocmask' function. */
#undef HAVE_SIGPROCMASK

/* Define to 1 if you have the `sigsetjmp' function. */
#undef HAVE_SIGSETJMP

/* Define to 1 if you have the `snprintf' function. */
#undef HAVE_SNPRINTF

/* Define to 1 if you have the `srandom' function. */
#undef HAVE_SRANDOM

/* Define if struct stat has the st_blocks field */
#undef HAVE_STAT_ST_BLOCKS

/* Define to 1 if you have the <stdbool.h> header file. */
#undef HAVE_STDBOOL_H

/* Define to 1 if you have the <stddef.h> header file. */
#undef HAVE_STDDEF_H

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#undef HAVE_STDLIB_H

/* Define to 1 if you have the `strdup' function. */
#undef HAVE_STRDUP

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#undef HAVE_STRING_H

/* Define to 1 if you have the `strtoll' function. */
#undef HAVE_STRTOLL

/* Define to 1 if you have the `strtoull' function. */
#undef HAVE_STRTOULL

/* Define if struct text_info is defined */
#undef HAVE_STRUCT_TEXT_INFO

/* Define if struct videoconfig is defined */
#undef HAVE_STRUCT_VIDEOCONFIG

/* Define to 1 if you have the `symlink' function. */
#undef HAVE_SYMLINK

/* Define to 1 if you have the `system' function. */
#undef HAVE_SYSTEM

/* Define to 1 if you have the <sys/file.h> header file. */
#undef HAVE_SYS_FILE_H

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#undef HAVE_SYS_IOCTL_H

/* Define to 1 if you have the <sys/resource.h> header file. */
#undef HAVE_SYS_RESOURCE_H

/* Define to 1 if you have the <sys/socket.h> header file. */
#undef HAVE_SYS_SOCKET_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#undef HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/timeb.h> header file. */
#undef HAVE_SYS_TIMEB_H

/* Define to 1 if you have the <sys/time.h> header file. */
#undef HAVE_SYS_TIME_H

/* Define to 1 if you have the <sys/types.h> header file. */
#undef HAVE_SYS_TYPES_H

/* Define to 1 if you have the <szlib.h> header file. */
#undef HAVE_SZLIB_H

/* Define if we have thread safe support */
#undef HAVE_THREADSAFE

/* Define if timezone is a global variable */
#undef HAVE_TIMEZONE

/* Define if the ioctl TIOCGETD is defined */
#undef HAVE_TIOCGETD

/* Define if the ioctl TIOGWINSZ is defined */
#undef HAVE_TIOCGWINSZ

/* Define to 1 if you have the `tmpfile' function. */
#undef HAVE_TMPFILE

/* Define if tm_gmtoff is a member of struct tm */
#undef HAVE_TM_GMTOFF

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define to 1 if you have the `vasprintf' function. */
#undef HAVE_VASPRINTF

/* Define to 1 if you have the `vsnprintf' function. */
#undef HAVE_VSNPRINTF

/* Define to 1 if you have the `waitpid' function. */
#undef HAVE_WAITPID

/* Define if your system has window style path name. */
#undef HAVE_WINDOW_PATH

/* Define to 1 if you have the <winsock2.h> header file. */
#undef HAVE_WINSOCK2_H

/* Define to 1 if you have the <zlib.h> header file. */
#undef HAVE_ZLIB_H

/* Define to 1 if you have the `_getvideoconfig' function. */
#undef HAVE__GETVIDEOCONFIG

/* Define to 1 if you have the `_scrsize' function. */
#undef HAVE__SCRSIZE

/* Define if the compiler understands __inline */
#undef HAVE___INLINE

/* Define if the compiler understands __inline__ */
#undef HAVE___INLINE__

/* Define if the high-level library headers should be included in hdf5.h */
#undef INCLUDE_HL

/* Define if your system can convert long double to (unsigned) long long
   values correctly. */
#undef LDOUBLE_TO_LLONG_ACCURATE

/* Define if your system converts long double to (unsigned) long values with
   special algorithm. */
#undef LDOUBLE_TO_LONG_SPECIAL

/* Define if your system can convert (unsigned) long long to long double
   values correctly. */
#undef LLONG_TO_LDOUBLE_CORRECT

/* Define if your system can convert (unsigned) long to long double values
   with special algorithm. */
#undef LONG_TO_LDOUBLE_SPECIAL

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#undef LT_OBJDIR

/* Define to enable internal memory allocation sanity checking. */
#undef MEMORY_ALLOC_SANITY_CHECK

/* Define if the metadata trace file code is to be compiled in */
#undef METADATA_TRACE_FILE

/* Define if we can violate pointer alignment restrictions */
#undef NO_ALIGNMENT_RESTRICTIONS

/* Define if deprecated public API symbols are disabled */
#undef NO_DEPRECATED_SYMBOLS

/* Name of package */
#undef PACKAGE

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the home page for this package. */
#undef PACKAGE_URL

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* Determine the maximum decimal precision in C */
#undef PAC_C_MAX_REAL_PRECISION

/* Define Fortran Maximum Real Decimal Precision */
#undef PAC_FC_MAX_REAL_PRECISION

/* Width for printf() for type `long long' or `__int64', use `ll' */
#undef PRINTF_LL_WIDTH

/* The size of `bool', as computed by sizeof. */
#undef SIZEOF_BOOL

/* The size of `char', as computed by sizeof. */
#undef SIZEOF_CHAR

/* The size of `double', as computed by sizeof. */
#undef SIZEOF_DOUBLE

/* The size of `float', as computed by sizeof. */
#undef SIZEOF_FLOAT

/* The size of `int', as computed by sizeof. */
#undef SIZEOF_INT

/* The size of `int16_t', as computed by sizeof. */
#undef SIZEOF_INT16_T

/* The size of `int32_t', as computed by sizeof. */
#undef SIZEOF_INT32_T

/* The size of `int64_t', as computed by sizeof. */
#undef SIZEOF_INT64_T

/* The size of `int8_t', as computed by sizeof. */
#undef SIZEOF_INT8_T

/* The size of `int_fast16_t', as computed by sizeof. */
#undef SIZEOF_INT_FAST16_T

/* The size of `int_fast32_t', as computed by sizeof. */
#undef SIZEOF_INT_FAST32_T

/* The size of `int_fast64_t', as computed by sizeof. */
#undef SIZEOF_INT_FAST64_T

/* The size of `int_fast8_t', as computed by sizeof. */
#undef SIZEOF_INT_FAST8_T

/* The size of `int_least16_t', as computed by sizeof. */
#undef SIZEOF_INT_LEAST16_T

/* The size of `int_least32_t', as computed by sizeof. */
#undef SIZEOF_INT_LEAST32_T

/* The size of `int_least64_t', as computed by sizeof. */
#undef SIZEOF_INT_LEAST64_T

/* The size of `int_least8_t', as computed by sizeof. */
#undef SIZEOF_INT_LEAST8_T

/* The size of `long', as computed by sizeof. */
#undef SIZEOF_LONG

/* The size of `long double', as computed by sizeof. */
#undef SIZEOF_LONG_DOUBLE

/* The size of `long long', as computed by sizeof. */
#undef SIZEOF_LONG_LONG

/* The size of `off_t', as computed by sizeof. */
#undef SIZEOF_OFF_T

/* The size of `ptrdiff_t', as computed by sizeof. */
#undef SIZEOF_PTRDIFF_T

/* The size of `short', as computed by sizeof. */
#undef SIZEOF_SHORT

/* The size of `size_t', as computed by sizeof. */
#undef SIZEOF_SIZE_T

/* The size of `ssize_t', as computed by sizeof. */
#undef SIZEOF_SSIZE_T

/* The size of `uint16_t', as computed by sizeof. */
#undef SIZEOF_UINT16_T

/* The size of `uint32_t', as computed by sizeof. */
#undef SIZEOF_UINT32_T

/* The size of `uint64_t', as computed by sizeof. */
#undef SIZEOF_UINT64_T

/* The size of `uint8_t', as computed by sizeof. */
#undef SIZEOF_UINT8_T

/* The size of `uint_fast16_t', as computed by sizeof. */
#undef SIZEOF_UINT_FAST16_T

/* The size of `uint_fast32_t', as computed by sizeof. */
#undef SIZEOF_UINT_FAST32_T

/* The size of `uint_fast64_t', as computed by sizeof. */
#undef SIZEOF_UINT_FAST64_T

/* The size of `uint_fast8_t', as computed by sizeof. */
#undef SIZEOF_UINT_FAST8_T

/* The size of `uint_least16_t', as computed by sizeof. */
#undef SIZEOF_UINT_LEAST16_T

/* The size of `uint_least32_t', as computed by sizeof. */
#undef SIZEOF_UINT_LEAST32_T

/* The size of `uint_least64_t', as computed by sizeof. */
#undef SIZEOF_UINT_LEAST64_T

/* The size of `uint_least8_t', as computed by sizeof. */
#undef SIZEOF_UINT_LEAST8_T

/* The size of `unsigned', as computed by sizeof. */
#undef SIZEOF_UNSIGNED

/* The size of `_Quad', as computed by sizeof. */
#undef SIZEOF__QUAD

/* The size of `__float128', as computed by sizeof. */
#undef SIZEOF___FLOAT128

/* The size of `__int64', as computed by sizeof. */
#undef SIZEOF___INT64

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS

/* Define if strict file format checks are enabled */
#undef STRICT_FORMAT_CHECKS

/* Define if your system supports pthread_attr_setscope(&attribute,
   PTHREAD_SCOPE_SYSTEM) call. */
#undef SYSTEM_SCOPE_THREADS

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#undef TIME_WITH_SYS_TIME

/* Define using v1.6 public API symbols by default */
#undef USE_16_API_DEFAULT

/* Define using v1.8 public API symbols by default */
#undef USE_18_API_DEFAULT

/* Define if a memory checking tool will be used on the library, to cause
   library to be very picky about memory operations and also disable the
   internal free list manager code. */
#undef USING_MEMCHECKER

/* Version number of package */
#undef VERSION

/* Data accuracy is prefered to speed during data conversions */
#undef WANT_DATA_ACCURACY

/* Check exception handling functions during data conversions */
#undef WANT_DCONV_EXCEPTION

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
#undef _FILE_OFFSET_BITS

/* Define for large files, on AIX-style hosts. */
#undef _LARGE_FILES

/* Define to empty if `const' does not conform to ANSI C. */
#undef const

/* Define to `long int' if <sys/types.h> does not define. */
#undef off_t

/* Define to `long' if <sys/types.h> does not define. */
#undef ptrdiff_t

/* Define to `unsigned long' if <sys/types.h> does not define. */
#undef size_t

/* Define to `long' if <sys/types.h> does not define. */
#undef ssize_t
