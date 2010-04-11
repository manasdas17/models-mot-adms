/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:30:15 ***/


#include "ngspice.h"
#include "mextramdefs.h"
#include "sperror.h"
#include "suffix.h"

int mextramdelete(GENmodel *inModel, IFuid name, GENinstance **inInst)

{
  register mextrammodel *model = (mextrammodel*)inModel;
  register mextraminstance **fast =(mextraminstance**)inInst;
  
  mextraminstance **prev = NULL;
  mextraminstance *here;
  
  for ( ; model ; model = model->mextramnextModel ) {
      prev = &(model->mextraminstances);  
      for (here = *prev; here ; here  = *prev) {
          if(here->mextramname == name || (fast && here==*fast) ) {
	      *prev = here->mextramnextInstance;
	      FREE(here);
	      return(OK);
	      }
         
    } 
  } 
  return(E_NODEV);
}
