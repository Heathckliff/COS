#
# o---------------------------------------------------------------------o
# |
# | COS makefile
# |
# o---------------------------------------------------------------------o
# |
# | C Object System
# |
# | Copyright (c) 2007+ Laurent Deniau, laurent.deniau@cern.ch
# |
# | For more information, see:
# | http://cern.ch/laurent.deniau/cos.html
# |
# o---------------------------------------------------------------------o
# |
# | This file is part of the C Object System framework.
# |
# | The C Object System is free software; you can redistribute it and/or
# | modify it under the terms of the GNU Lesser General Public License
# | as published by the Free Software Foundation; either version 3 of
# | the License, or (at your option) any later version.
# |
# | The C Object System is distributed in the hope that it will be
# | useful, but WITHOUT ANY WARRANTY; without even the implied warranty
# | of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# |
# | See <http://www.gnu.org/licenses> for more details.
# |
# o---------------------------------------------------------------------o
# |
# | $Id: Makefile,v 1.6 2008/12/16 14:34:37 ldeniau Exp $
# |
#

# detect location (bootstrap, normally $(cos) = cos)
pwd := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))
cos := $(pwd)/CosBase/include/cos

#
# standard COS makefile
#

include $(cos)/prologue

distrib := cos
version := 0.7
release := 200801

moddeps := CosBase CosStd

include $(cos)/epilogue

#
# makefile customization
#

FILES := $(subst $(BASEDIR)/,, \
           $(shell $(FIND) $(BASEDIR) -maxdepth 1 -name CVS -prune \
                   -o \( -type f -o -type l \) -name '[!.]*' -print))

install.post:
	$_ cd $(BASEDIR);                                         \
     for f in $(FILES) ; do                                 \
       $(CP) -P $$f $(INSTDIR)/share/doc/$($(PRJTYPE))/$$f; \
     done

uninstall:
	@  echo "*** Uninstalling $($(PRJTYPE))"


# end of makefile
