/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:28:36 ***/


#include "ngspice.h"
#include "const.h"
#include "ifsim.h"
#include "hicum2defs.h"
#include "sperror.h"
#include "suffix.h"

int hicum2par(int param, IFvalue *value, GENinstance *inst, IFvalue *select)
{
  hicum2instance *myinstance = (hicum2instance*)inst;
  switch (param) {
  default:
    return(-1);
  }
  return(OK);
}
