#include "stlexam.h"
#pragma hdrstop
/**************************************************************************
 *
 * for_each.cpp - Example program for applying a function to each element 
 *                in a range. See Class Reference Section
 *
 * $Id: for_each.cpp,v 9.5 2001/07/10 17:24:09 nyork Exp $
 *
 ***************************************************************************
 *
 * (c) Copyright 1994, 1998 Rogue Wave Software, Inc.
 * ALL RIGHTS RESERVED
 *
 * The software and information contained herein are proprietary to, and
 * comprise valuable trade secrets of, Rogue Wave Software, Inc., which
 * intends to preserve as trade secrets such software and information.
 * This software is furnished pursuant to a written license agreement and
 * may be used, copied, transmitted, and stored only in accordance with
 * the terms of such license and with the inclusion of the above copyright
 * notice.  This software and information or any other copies thereof may
 * not be provided or otherwise made available to any other person.
 *
 * Notwithstanding any other lease or license that may pertain to, or
 * accompany the delivery of, this computer software and information, the
 * rights of the Government regarding its use, reproduction and disclosure
 * are as set forth in Section 52.227-19 of the FARS Computer
 * Software-Restricted Rights clause.
 * 
 * Use, duplication, or disclosure by the Government is subject to
 * restrictions as set forth in subparagraph (c)(1)(ii) of the Rights in
 * Technical Data and Computer Software clause at DFARS 252.227-7013.
 * Contractor/Manufacturer is Rogue Wave Software, Inc.,
 * P.O. Box 2328, Corvallis, Oregon 97339.
 *
 * This computer software and information is distributed with "restricted
 * rights."  Use, duplication or disclosure is subject to restrictions as
 * set forth in NASA FAR SUP 18-52.227-79 (April 1985) "Commercial
 * Computer Software-Restricted Rights (April 1985)."  If the Clause at
 * 18-52.227-74 "Rights in Data General" is specified in the contract,
 * then the "Alternate III" clause applies.
 *
 **************************************************************************/
#include <vector>
#include <algorithm>
#include <functional>

#ifdef _RW_STD_IOSTREAM
#include <iostream>
#else
#include <iostream.h>
#endif     

#ifndef _RWSTD_NO_NAMESPACE
  using namespace std;
#endif

//
// Function class that outputs its argument times x.
//
template <class Arg>
class out_times_x :  private unary_function<Arg,void>
{
private:
  Arg multiplier;
public:
  out_times_x(const Arg& x) : multiplier(x) { }
  void operator()(const Arg& x) { cout << x * multiplier << " " << endl; }
};

int main ()
{
  int sequence[5] = {1,2,3,4,5};  
  //
  // Set up a vector.
  //
  vector<int,allocator<int> > v(sequence+0, sequence+5);
  // 
  // Setup a function object.
  //
  out_times_x<int> f2(2);
  
  for_each(v.begin(),v.end(),f2);   // Apply function
  
  return 0;
}
