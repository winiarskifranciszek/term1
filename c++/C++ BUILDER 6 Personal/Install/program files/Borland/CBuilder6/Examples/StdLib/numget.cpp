#include "stlexam.h"
#pragma hdrstop
/**************************************************************************
 *
 * numget.cpp - Example program for the numget facet. 
 *              See Class Reference Section
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

#include <string>
#include <sstream>

int main ()
{
#ifndef _RWSTD_NO_NAMESPACE
  using namespace std;
#endif

  typedef istreambuf_iterator<char,char_traits<char> > iter_type;
  
  locale loc;
  ios_base::iostate state;
  bool bval = false;
  long lval = 0L;
  long double ldval = 0.0;
  iter_type end;

  // Get a num_get facet
  const num_get<char,iter_type>& tg = 
#ifndef _RWSTD_NO_TEMPLATE_ON_RETURN_TYPE
    use_facet<num_get<char,iter_type> >(loc);
#else
    use_facet(loc,(num_get<char,iter_type>*)0);
#endif
#ifndef _RWSTD_NO_BOOL
  {
    // Build an istringstream from the buffer and construct
    // beginning and ending iterators on it.
    istringstream ins("true");
    iter_type begin(ins);

    // Get the time
    tg.get(begin,end,ins,state,bval);
  }
#endif
  cout << bval << endl;
  {
    // Get the date
    istringstream ins("2422235");
    iter_type begin(ins);
    tg.get(begin,end,ins,state,lval);
  }
  cout << lval << endl;
  {
    // Get the weekday
    istringstream ins("32324342.98908");
    iter_type begin(ins);
    tg.get(begin,end,ins,state,ldval);
  }
  cout << ldval << endl;

  return 0;
}

