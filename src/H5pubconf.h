/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Copyright by The HDF Group.                                               *
 * All rights reserved.                                                      *
 *                                                                           *
 * This file is part of HDF5.  The full HDF5 copyright notice, including     *
 * terms governing use, modification, and redistribution, is contained in    *
 * the COPYING file, which can be found at the root of the source code       *
 * distribution tree, or in https://support.hdfgroup.org/ftp/HDF5/releases.  *
 * If you do not have access to either file, you may request a copy from     *
 * help@hdfgroup.org.                                                        *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef H5_CONFIG_H_
#define H5_CONFIG_H_

#ifdef _H5private_H
#pragma warning(disable: 4996)
#endif

#include <stdint.h>
#if INTPTR_MAX == INT64_MAX
#define H5_SIZEOF_SIZE_T 8
#define H5_SIZEOF_PTRDIFF_T 8
#elif INTPTR_MAX == INT32_MAX
#define H5_SIZEOF_SIZE_T 4
#define H5_SIZEOF_PTRDIFF_T 4
#else
#error Unknown pointer size or missing size macros!
#endif

#define H5_HAVE_THREADSAFE

#define H5_HAVE_FILTER_DEFLATE
#define H5_HAVE_ZLIB_H

#if defined _WIN32
#define H5_HAVE_WINDOWS
#define H5_HAVE_WIN32_API
#define H5_HAVE_WINSOCK2_H
#define H5_HAVE_VISUAL_STUDIO
#define H5_HAVE_WIN_THREADS
#define H5_HAVE_IO_H
#else
#define H5_HAVE_PTHREAD_H
#define H5_HAVE_FLOCK
#define H5_HAVE_UNISTD_H
#define H5_TIME_WITH_SYS_TIME
#define H5_HAVE_SYS_FILE_H
#define H5_HAVE_SYS_RESOURCE_H
#define H5_HAVE_SYS_IOCTL_H
#ifndef __APPLE__
#define H5_HAVE_SYS_SYSINFO_H
#endif
#ifndef __linux__
#define H5_HAVE_SYS_PROC_H
#endif
#define H5_HAVE_DIRENT_H
#define H5_HAVE_DLFCN_H
#endif

#define H5_CXX_HAVE_OFFSETOF
#define H5_HAVE_INTTYPES_H
#define H5_STDC_HEADERS
#define H5_HAVE_STDINT_H
#define H5_HAVE_STDINT_H_CXX
#define H5_HAVE_STDLIB_H
#define H5_HAVE_STDDEF_H
#define H5_HAVE_STDBOOL_H
#define H5_HAVE_INLINE
#define H5_HAVE_ZLIB_H
#define H5_HAVE_SYS_TYPES_H
#define H5_HAVE_SYS_STAT_H
#define H5_HAVE_STRDUP
#define H5_HAVE_GETHOSTNAME

#if defined _WIN32
#define H5_SIZEOF_LONG 4
#else
#define H5_SIZEOF_LONG 8
#endif

#define H5_SIZEOF_LONG_LONG 8
#define H5_SIZEOF_BOOL 1
#define H5_SIZEOF_CHAR 1
#define H5_SIZEOF_DOUBLE 8
#define H5_SIZEOF_FLOAT 4
#define H5_SIZEOF_INT 4
#define H5_SIZEOF_INT8_T 1
#define H5_SIZEOF_INT16_T 2
#define H5_SIZEOF_INT32_T 4
#define H5_SIZEOF_INT64_T 8
#define H5_SIZEOF_UINT 4
#define H5_SIZEOF_UINT8_T 1
#define H5_SIZEOF_UINT16_T 2
#define H5_SIZEOF_UINT32_T 4
#define H5_SIZEOF_UINT64_T 8

#define H5_SIZEOF_LONG_DOUBLE 8
#define H5_SIZEOF_OFF64_T 8
#define H5_SIZEOF_OFF_T 4
#define H5_SIZEOF_SHORT 2
#define H5_SIZEOF___INT64 8

#define H5_HAVE_FUNCTION

#define H5_PRINTF_LL_WIDTH "lld"

#if defined _WIN32
#define H5_DEFAULT_PLUGINDIR "%ALLUSERSPROFILE%\\\\hdf5\\\\lib\\\\plugin"
#else
#define H5_DEFAULT_PLUGINDIR "/usr/local/hdf5/lib/plugin"
#endif

#endif
