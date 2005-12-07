/* Return location expression to find return value given a function type DIE.
   Copyright (C) 2005 Red Hat, Inc.

   This program is Open Source software; you can redistribute it and/or
   modify it under the terms of the Open Software License version 1.0 as
   published by the Open Source Initiative.

   You should have received a copy of the Open Software License along
   with this program; if not, you may obtain a copy of the Open Software
   License version 1.0 from http://www.opensource.org/licenses/osl.php or
   by writing the Open Source Initiative c/o Lawrence Rosen, Esq.,
   3001 King Ranch Road, Ukiah, CA 95482.   */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <inttypes.h>
#include <libeblP.h>


int
ebl_return_value_location (ebl, functypedie, locops)
     Ebl *ebl;
     Dwarf_Die *functypedie;
     const Dwarf_Op **locops;
{
  return ebl == NULL ? -1 : ebl->return_value_location (functypedie, locops);
}