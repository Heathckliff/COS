#ifndef COS_INDEX_H
#define COS_INDEX_H

/*
 o---------------------------------------------------------------------o
 |
 | COS Index
 |
 o---------------------------------------------------------------------o
 |
 | C Object System
 |
 | Copyright (c) 2006+ Laurent Deniau, laurent.deniau@cern.ch
 |
 | For more information, see:
 | http://cern.ch/laurent.deniau/cos.html
 |
 o---------------------------------------------------------------------o
 |
 | This file is part of the C Object System framework.
 |
 | The C Object System is free software; you can redistribute it and/or
 | modify it under the terms of the GNU Lesser General Public License
 | as published by the Free Software Foundation; either version 3 of
 | the License, or (at your option) any later version.
 |
 | The C Object System is distributed in the hope that it will be
 | useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 | of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 |
 | See <http://www.gnu.org/licenses> for more details.
 |
 o---------------------------------------------------------------------o
 |
 | $Id: Index.h,v 1.4 2008/08/21 15:53:43 ldeniau Exp $
 |
*/

#include <cos/Value.h>

// ----- definitions

/* NOTE-USER: negative indexes
   negative indexes mean starting from the end
   e.g. -1 is the last element
 */

defclass(Index,Value)
endclass

defclass(Index1,Index)
  S32 value;
endclass

defclass(Index2,Index)
  S32 value[2];
endclass

defclass(Index3,Index)
  S32 value[3];
endclass

defclass(Index4,Index)
  S32 value[4];
endclass

defclass(Index5,Index)
  S32 value[5];
endclass

// ----- automatic constructor

#define aIndex(...) \
        aIndexN(COS_PP_NARG(__VA_ARGS__),__VA_ARGS__)

#define aIndexN(N,...) ( (OBJ)&(struct COS_PP_CAT(Index,N)) { \
        {{{{ COS_CLS_NAME(COS_PP_CAT(Index,N)).Behavior.id, COS_RC_AUTO }}}}, \
         COS_PP_IF(COS_PP_ISONE(N))((__VA_ARGS__), { __VA_ARGS__ }) } )

#endif // COS_INDEX_H
