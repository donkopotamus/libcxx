//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_SUPPORT_AVR_WCHAR_H
#define _LIBCPP_SUPPORT_AVR_WCHAR_H

// define a placeholder mbstate_t on avr
typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    char __wchb[4];
  } __value;		/* Value so far.  */
} mbstate_t;

// a glibc style indicator that mbstate_t is defined
#undef __need_mbstate_t

#endif // _LIBCPP_SUPPORT_AVR_WCHAR_H
