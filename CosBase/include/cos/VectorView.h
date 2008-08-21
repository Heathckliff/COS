#ifndef COS_VECTORVIEW_H
#define COS_VECTORVIEW_H

/*
 o---------------------------------------------------------------------o
 |
 | COS Vectors View (sliced)
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
 | $Id: VectorView.h,v 1.1 2008/08/21 15:53:43 ldeniau Exp $
 |
*/

#include <cos/Vector.h>
#include <cos/Slice.h>

defclass(IntVectorView, IntVector)
  S32 *value;
  OBJ vector;
  struct Slice1 slice;
endclass

defclass(LngVectorView, LngVector)
  S64 *value;
  OBJ vector;
  struct Slice1 slice;
endclass

defclass(DblVectorView, DblVector)
  DOUBLE *value;
  OBJ vector;
  struct Slice1 slice;
endclass

defclass(CpxVectorView, CpxVector)
  COMPLEX *value;
  OBJ vector;
  struct Slice1 slice;
endclass

#endif // COS_VECTORVIEW_H
