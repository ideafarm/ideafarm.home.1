/***************************************************************************
 * FILE: wchar.h/cwchar (Wide character functions)
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2002-2018 The Open Watcom Contributors. All Rights Reserved.
 * Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 *
 * Description: This header is part of the C/C++ standard library. It
 *              declares functions and types pertaining to the use of
 *              wide characters.
 ***************************************************************************/
#ifndef _WCHAR_H_INCLUDED
#define _WCHAR_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus

#include <cwchar>

// C99 types in wchar.h
#ifndef _MBSTATE_T_DEFINED
#define _MBSTATE_T_DEFINED
 #define _MBSTATE_T_DEFINED_
 using std::mbstate_t;
#endif
#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
 #define _SIZE_T_DEFINED_
 using std::size_t;
#endif
#ifndef _WINT_T_DEFINED
#define _WINT_T_DEFINED
 #define _WINT_T_DEFINED_
 using std::wint_t;
#endif
#ifndef _WCTYPE_T_DEFINED
#define _WCTYPE_T_DEFINED
 #define _WCTYPE_T_DEFINED_
 using std::wctype_t;
#endif
#ifndef _TM_DEFINED
#define _TM_DEFINED
 #define _TM_DEFINED_
 using std::tm;
#endif

// C99 functions in wchar.h
using std::fgetwc;
using std::fgetws;
using std::fputwc;
using std::fputws;
using std::fwprintf;
using std::fwscanf;
using std::getwc;
using std::getwchar;
using std::mbrlen;
using std::mbrtowc;
using std::mbsrtowcs;
using std::putwc;
using std::putwchar;
using std::swprintf;
using std::swscanf;
using std::ungetwc;
using std::vfwprintf;
using std::vfwscanf;
using std::vswprintf;
using std::vswscanf;
using std::vwprintf;
using std::vwscanf;
using std::wcrtomb;
using std::wcscat;
using std::wcschr;
using std::wcscmp;
using std::wcscoll;
using std::wcscpy;
using std::wcscspn;
using std::wcsftime;
using std::wcslen;
using std::wcsncat;
using std::wcsncmp;
using std::wcsncpy;
using std::wcspbrk;
using std::wcsrchr;
using std::wcsrtombs;
using std::wcsspn;
using std::wcsstr;
using std::wcstod;
using std::wcstok;
using std::wcstol;
using std::wcstoll;
using std::wcstoul;
using std::wcstoull;
using std::wcsxfrm;
using std::wctob;
using std::wmemchr;
using std::wmemcmp;
using std::wmemcpy;
using std::wmemmove;
using std::wmemset;
using std::wprintf;
using std::wscanf;

#if !defined(NO_EXT_KEYS) /* extensions enabled */

// C99 functions not specified for wchar.h
using std::iswalnum;
using std::iswalpha;
using std::iswcntrl;
using std::iswdigit;
using std::iswgraph;
using std::iswlower;
using std::iswprint;
using std::iswpunct;
using std::iswspace;
using std::iswupper;
using std::iswxdigit;
using std::iswctype;
using std::towlower;
using std::towupper;
using std::wctype;

#endif /* extensions enabled */

#else /* __cplusplus not defined */

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifndef _STDARG_H_INCLUDED
 #include <stdarg.h>
#endif

#ifndef NULL
 #define NULL ((void *)0)
#endif

#define WCHAR_MIN       0
#define WCHAR_MAX       65535U

#define WEOF  ((wint_t)(-1))      /*  EOF equivalent for wide chars   */

 #ifndef _WCHAR_T_DEFINED
 #define _WCHAR_T_DEFINED
  #define _WCHAR_T_DEFINED_
  typedef unsigned short wchar_t;
 #endif

 #ifndef _WINT_T_DEFINED
 #define _WINT_T_DEFINED
  #define _WINT_T_DEFINED_
  typedef unsigned short wint_t;
  typedef wint_t __w_wint_t;
 #endif

 #ifndef _WCTYPE_T_DEFINED
 #define _WCTYPE_T_DEFINED
  #define _WCTYPE_T_DEFINED_
  typedef unsigned short wctype_t;
 #endif

 #ifndef _SIZE_T_DEFINED
 #define _SIZE_T_DEFINED
  #define _SIZE_T_DEFINED_
  typedef unsigned size_t;
  typedef size_t   __w_size_t;
 #endif

 #ifndef _MBSTATE_T_DEFINED
 #define _MBSTATE_T_DEFINED
  #define _MBSTATE_T_DEFINED_
  typedef int mbstate_t;
  typedef mbstate_t __w_mbstate_t;
 #endif


#ifndef _TM_DEFINED
#define _TM_DEFINED
 #define _TM_DEFINED_
 struct tm;
 typedef struct tm __w_tm;
#endif

#ifndef ___IOBUF_DEFINED
#define ___IOBUF_DEFINED
 struct __iobuf;
#endif
#ifndef _FILE_DEFINED
#define _FILE_DEFINED
 #define _FILE_DEFINED_
 typedef struct __iobuf FILE;
 typedef FILE __w_FILE;
#endif

_WCRTLINK extern wint_t     btowc( int __c );
_WCRTLINK extern wint_t     fgetwc( FILE *__strm );
_WCRTLINK extern wchar_t    *fgetws( wchar_t *__s, int __n, FILE *__strm );
_WCRTLINK extern wint_t     fputwc( wint_t __wc, FILE *__strm );
_WCRTLINK extern int        fputws( const wchar_t *__s, FILE *__strm );
_WCRTLINK extern int        fwide( FILE *__strm, int __mode );
_WCRTLINK extern int        fwprintf( FILE *__strm, const wchar_t *__format, ... );
_WCRTLINK extern int        fwscanf( FILE *__strm, const wchar_t *__format, ... );
_WCRTLINK extern wint_t     getwc( FILE *__strm );
_WCRTLINK extern wint_t     getwchar( void );
_WCRTLINK extern int        mbrlen( const char *__s, size_t __n, mbstate_t *__ps );
_WCRTLINK extern int        mbrtowc( wchar_t *__pwc, const char *__s, size_t __n, mbstate_t *__ps );
_WCRTLINK extern int        mbsinit( const mbstate_t *__ps );
_WCRTLINK extern size_t     mbsrtowcs( wchar_t *__dst, const char **__src, size_t __n, mbstate_t *__ps );
_WCRTLINK extern wint_t     putwc( wint_t __wc, FILE *__strm );
_WCRTLINK extern wint_t     putwchar( wint_t __wc );
_WCRTLINK extern int        swprintf( wchar_t *__s, size_t __n, const wchar_t *__format, ... );
_WCRTLINK extern int        swscanf( const wchar_t *__s, const wchar_t *__format, ... );
_WCRTLINK extern wint_t     ungetwc( wint_t __wc, FILE *__strm );
_WCRTLINK extern int        vfwprintf( FILE *__strm, const wchar_t *__format, va_list __arg );
_WCRTLINK extern int        vfwscanf( FILE *__strm, const wchar_t *__format, va_list __arg );
_WCRTLINK extern int        vswprintf( wchar_t *__s, size_t __n, const wchar_t *__format, va_list __arg );
_WCRTLINK extern int        vswscanf( const wchar_t *__s, const wchar_t *__format, va_list __arg );
_WCRTLINK extern int        vwprintf( const wchar_t *__format, va_list __arg );
_WCRTLINK extern int        vwscanf( const wchar_t *, __va_list );
_WCRTLINK extern int        wcrtomb( char *__s, wchar_t __wc, mbstate_t *__ps );
_WCRTLINK extern wchar_t    *wcscat( wchar_t *__s1, const wchar_t *__s2 );
_WCRTLINK extern wchar_t    *wcschr( const wchar_t *__s, wint_t __wc );
_WCRTLINK extern int        wcscmp( const wchar_t *__s1, const wchar_t *__s2 );
_WCRTLINK extern int        wcscoll( const wchar_t *__s1, const wchar_t *__s2 );
_WCRTLINK extern wchar_t    *wcscpy( wchar_t *__s1, const wchar_t *__s2 );
_WCRTLINK extern size_t     wcscspn( const wchar_t *__s1, const wchar_t *__s2 );
_WCRTLINK extern size_t     wcsftime( wchar_t *__s, size_t __maxsize, const wchar_t *__format, const struct tm *__timeptr );
_WCRTLINK extern size_t     wcslen( const wchar_t *__s );
_WCRTLINK extern wchar_t    *wcsncat( wchar_t *__s1, const wchar_t *__s2, size_t __n );
_WCRTLINK extern int        wcsncmp( const wchar_t *__s1, const wchar_t *__s2, size_t __n );
_WCRTLINK extern wchar_t    *wcsncpy( wchar_t *__s1, const wchar_t *__s2, size_t __n );
_WCRTLINK extern wchar_t    *wcspbrk( const wchar_t *__s1, const wchar_t *__s2 );
_WCRTLINK extern wchar_t    *wcsrchr( const wchar_t *__s, wint_t __wc );
_WCRTLINK extern size_t     wcsrtombs( char *__dst, const wchar_t **__src, size_t __n, mbstate_t *__ps );
_WCRTLINK extern size_t     wcsspn( const wchar_t *__s1, const wchar_t *__s2 );
_WCRTLINK extern wchar_t    *wcsstr( const wchar_t *__s1, const wchar_t *__s2 );
_WMRTLINK extern double     wcstod( const wchar_t *__nptr, wchar_t **__endptr );
_WCRTLINK extern wchar_t    *wcstok( wchar_t *__s1, const wchar_t *__s2, wchar_t **__ptr );
_WCRTLINK extern long int   wcstol( const wchar_t *, wchar_t **, int );
_WCRTLINK extern long long int wcstoll( const wchar_t *, wchar_t **, int );
_WCRTLINK extern unsigned long int wcstoul( const wchar_t *, wchar_t **, int );
_WCRTLINK extern unsigned long long int wcstoull( const wchar_t *, wchar_t **, int );
_WCRTLINK extern size_t     wcsxfrm( wchar_t *__s1, const wchar_t *__s2, size_t __n );
_WCRTLINK extern int        wctob( wint_t __wc );
_WCRTLINK extern wchar_t    *wmemchr( const wchar_t *__s, wchar_t __wc, size_t __n );
_WCRTLINK extern int        wmemcmp( const wchar_t *__s1, const wchar_t *__s2, size_t __n );
_WCRTLINK extern wchar_t    *wmemcpy( wchar_t *__s1, const wchar_t *__s2, size_t __n );
_WCRTLINK extern wchar_t    *wmemmove( wchar_t *__s1, const wchar_t *__s2, size_t __n );
_WCRTLINK extern wchar_t    *wmemset( wchar_t *__s, wchar_t __wc, size_t __n );
_WCRTLINK extern int        wprintf( const wchar_t *__format, ... );
_WCRTLINK extern int        wscanf( const wchar_t *__format, ... );

_WCRTLINK extern wchar_t    *_wcsdup( const wchar_t * );
_WCRTLINK extern int        _wcsicmp( const wchar_t *, const wchar_t * );
_WCRTLINK extern wchar_t    *_wcslwr( wchar_t * );
_WCRTLINK extern int        _wcsnicmp( const wchar_t *, const wchar_t *, __w_size_t );
_WCRTLINK extern wchar_t    *_wcsnset( wchar_t *, int, __w_size_t );
_WCRTLINK extern wchar_t    *_wcsupr( wchar_t * );
_WCRTLINK extern wchar_t    *_wcsrev( wchar_t * );
_WCRTLINK extern wchar_t    *_wcsset( wchar_t *, wchar_t );
_WCRTLINK extern wchar_t    *_wmktemp( wchar_t *__template );
_WCRTLINK extern wchar_t    *_wtempnam( const wchar_t *__dir, const wchar_t *__prefix );

#if !defined(NO_EXT_KEYS) /* extensions enabled */

_WCRTLINK extern int        iswalnum( wint_t __wc );
_WCRTLINK extern int        iswalpha( wint_t __wc );
_WCRTLINK extern int        iswcntrl( wint_t __wc );
_WCRTLINK extern int        iswdigit( wint_t __wc );
_WCRTLINK extern int        iswgraph( wint_t __wc );
_WCRTLINK extern int        iswlower( wint_t __wc );
_WCRTLINK extern int        iswprint( wint_t __wc );
_WCRTLINK extern int        iswpunct( wint_t __wc );
_WCRTLINK extern int        iswspace( wint_t __wc );
_WCRTLINK extern int        iswupper( wint_t __wc );
_WCRTLINK extern int        iswxdigit( wint_t __wc );
_WCRTLINK extern int        iswctype( wint_t __wc, wctype_t __desc );
_WCRTLINK extern wint_t     towlower( wint_t __wc );
_WCRTLINK extern wint_t     towupper( wint_t __wc );
_WCRTLINK extern wctype_t   wctype( const char *__property );

_WCRTLINK extern int        sisinit( const __w_mbstate_t *__ps );

_WCRTLINK extern int        _fmbrlen( const char _WCFAR *__s, __w_size_t __n, __w_mbstate_t _WCFAR *__ps );
_WCRTLINK extern int        _fmbrtowc( wchar_t _WCFAR *__pwc, const char _WCFAR *__s, __w_size_t __n, __w_mbstate_t _WCFAR *__ps );
_WCRTLINK extern __w_size_t _fmbsrtowcs( wchar_t _WCFAR *__dst, const char _WCFAR * _WCFAR *__src, __w_size_t __n, __w_mbstate_t _WCFAR *__ps );
_WCRTLINK extern int        _fwcrtomb( char _WCFAR *__s, wchar_t __wc, __w_mbstate_t _WCFAR *__ps );
_WCRTLINK extern __w_size_t _fwcsrtombs( char _WCFAR *__dst, const wchar_t _WCFAR * _WCFAR *__src, __w_size_t __n, __w_mbstate_t _WCFAR *__ps );
_WCRTLINK extern int        _swprintf( wchar_t *__s, const wchar_t *__format, ... );
_WCRTLINK extern int        _vswprintf( wchar_t *__s, const wchar_t *__format, va_list __arg );

#endif /* extensions enabled */

#if defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ == 1

 #ifndef _TIME_T_DEFINED
 #define _TIME_T_DEFINED
  #define _TIME_T_DEFINED_
  typedef unsigned long time_t;
  typedef time_t __w_time_t;
 #endif

#ifndef _ERRNO_T_DEFINED
 #define _ERRNO_T_DEFINED
 typedef int errno_t;
#endif

#ifndef _RSIZE_T_DEFINED
#define _RSIZE_T_DEFINED
 typedef size_t rsize_t;
#endif

_WCRTLINK extern int        fwprintf_s( FILE * __restrict __stream, const wchar_t * __restrict __format, ... );
_WCRTLINK extern int        fwscanf_s( FILE * __restrict __stream, const wchar_t * __restrict __format, ... );
_WCRTLINK extern int        snwprintf_s( wchar_t * __restrict __s, rsize_t __n, const wchar_t * __restrict __format, ... );
_WCRTLINK extern int        swprintf_s( wchar_t * __restrict __s, rsize_t __n, const wchar_t * __restrict __format, ... );
_WCRTLINK extern int        swscanf_s( const wchar_t * __restrict __s, const wchar_t * __restrict __format, ... );
_WCRTLINK extern int        vfwprintf_s( FILE * __restrict __stream, const wchar_t * __restrict __format, __va_list __arg );
_WCRTLINK extern int        vfwscanf_s( FILE * __restrict __stream, const wchar_t * __restrict __format, __va_list __arg );
_WCRTLINK extern int        vsnwprintf_s( wchar_t * __restrict __s, rsize_t __n, const wchar_t * __restrict __format, __va_list __arg );
_WCRTLINK extern int        vswprintf_s( wchar_t * __restrict __s, rsize_t __n, const wchar_t * __restrict __format, __va_list __arg );
_WCRTLINK extern int        vswscanf_s( const wchar_t * __restrict __s, const wchar_t * __restrict __format, __va_list __arg );
_WCRTLINK extern int        vwprintf_s( const wchar_t * __restrict __format, __va_list __arg );
_WCRTLINK extern int        vwscanf_s( const wchar_t * __restrict __format, __va_list __arg );
_WCRTLINK extern int        wprintf_s( const wchar_t * __restrict __format, ... );
_WCRTLINK extern int        wscanf_s( const wchar_t * __restrict __format, ... );

_WCRTLINK extern errno_t    wcscpy_s( wchar_t * __restrict __s1, rsize_t __s1max, const wchar_t * __restrict __s2 );
_WCRTLINK extern errno_t    wcsncpy_s( wchar_t * __restrict __s1, rsize_t __s1max, const wchar_t * __restrict __s2, rsize_t __n );
_WCRTLINK extern errno_t    wmemcpy_s( wchar_t * __restrict __s1, rsize_t __s1max, const wchar_t * __restrict __s2, rsize_t __n );
_WCRTLINK extern errno_t    wmemmove_s( wchar_t *__s1, rsize_t __s1max, const wchar_t *__s2, rsize_t __n );
_WCRTLINK extern errno_t    wcscat_s( wchar_t * __restrict __s1, rsize_t __s1max, const wchar_t * __restrict __s2 );
_WCRTLINK extern errno_t    wcsncat_s( wchar_t * __restrict __s1, rsize_t __s1max, const wchar_t * __restrict __s2, rsize_t __n );
_WCRTLINK extern wchar_t    *wcstok_s( wchar_t * __restrict __s1, rsize_t * __restrict __s1max, const wchar_t * __restrict __s2, wchar_t ** __restrict __ptr );
_WCRTLINK extern size_t     wcsnlen_s( const wchar_t *__s, size_t __maxsize );

_WCRTLINK extern size_t     wcserrorlen_s( errno_t __errnum );
_WCRTLINK extern errno_t    wcserror_s( wchar_t * __restrict __s, rsize_t __maxsize, errno_t __errnum );

_WCRTLINK extern errno_t    _wasctime_s( wchar_t * __restrict __s, rsize_t __maxsize, const struct tm * __timeptr );
_WCRTLINK extern errno_t    _wctime_s( wchar_t * __restrict s, rsize_t __maxsize, const time_t * __timer );

_WCRTLINK extern errno_t    mbsrtowcs_s( size_t * __restrict __retval, wchar_t * __restrict __dst, rsize_t __dstmax, const char * * __restrict __src, rsize_t __len, mbstate_t * __restrict __ps );
_WCRTLINK extern errno_t    wcrtomb_s( size_t * __restrict __retval, char * __restrict __s,  rsize_t __smax, wchar_t __wc, mbstate_t * __restrict __ps );
_WCRTLINK extern errno_t    wcsrtombs_s( size_t * __restrict __retval, char * __restrict __dst, rsize_t __dstmax, const wchar_t ** __restrict __src, rsize_t __len, mbstate_t * __restrict __ps );
_WCRTLINK extern errno_t    _fmbsrtowcs_s( size_t _WCFAR * __restrict __retval, wchar_t _WCFAR * __restrict __dst, rsize_t __dstmax, const char _WCFAR * _WCFAR * __restrict __src, rsize_t __len, mbstate_t _WCFAR * __restrict __ps );
_WCRTLINK extern errno_t    _fwcrtomb_s( size_t _WCFAR * __restrict __retval, char _WCFAR * __restrict __s, rsize_t __smax, wchar_t __wc, mbstate_t _WCFAR * __restrict __ps );
_WCRTLINK extern errno_t    _fwcsrtombs_s( size_t _WCFAR * __restrict __retval, char _WCFAR * __restrict __dst, rsize_t __dstmax, const wchar_t _WCFAR * _WCFAR * __restrict __src, rsize_t __len, mbstate_t _WCFAR * __restrict __ps );

#endif /* __STDC_WANT_LIB_EXT1__ */

#endif /* __cplusplus not defined */

#endif