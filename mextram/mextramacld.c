/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:30:15 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "mextramdefs.h"
#include "sperror.h"
#include "suffix.h"

int mextramacLoad(GENmodel *inModel, CKTcircuit *ckt)
{
  register mextrammodel *model = (mextrammodel*)inModel;
  register mextraminstance *here;
  for ( ; model != NULL; model = model->mextramnextModel )
  {
    /* loop through all the instances of the model */
    for (here = model->mextraminstances; here != NULL ; here = here->mextramnextInstance)
    {  if(here->PTR_J_c1_c1_required) *(here->PTR_J_c1_c1)+=here->JSVAL_c1_c1;
  if(here->PTR_J_c1_c2_required) *(here->PTR_J_c1_c2)+=here->JSVAL_c1_c2;
  if(here->PTR_J_c2_c1_required) *(here->PTR_J_c2_c1)+=here->JSVAL_c2_c1;
  if(here->PTR_J_c2_c2_required) *(here->PTR_J_c2_c2)+=here->JSVAL_c2_c2;
  if(here->PTR_J_c1_b2_required) *(here->PTR_J_c1_b2)+=here->JSVAL_c1_b2;
  if(here->PTR_J_c2_b2_required) *(here->PTR_J_c2_b2)+=here->JSVAL_c2_b2;
  if(here->PTR_J_c1_dt_required) *(here->PTR_J_c1_dt)+=here->JSVAL_c1_dt;
  if(here->PTR_J_c2_dt_required) *(here->PTR_J_c2_dt)+=here->JSVAL_c2_dt;
  if(here->PTR_J_e1_c1_required) *(here->PTR_J_e1_c1)+=here->JSVAL_e1_c1;
  if(here->PTR_J_e1_c2_required) *(here->PTR_J_e1_c2)+=here->JSVAL_e1_c2;
  if(here->PTR_J_e1_b2_required) *(here->PTR_J_e1_b2)+=here->JSVAL_e1_b2;
  if(here->PTR_J_c2_e1_required) *(here->PTR_J_c2_e1)+=here->JSVAL_c2_e1;
  if(here->PTR_J_e1_e1_required) *(here->PTR_J_e1_e1)+=here->JSVAL_e1_e1;
  if(here->PTR_J_e1_dt_required) *(here->PTR_J_e1_dt)+=here->JSVAL_e1_dt;
  if(here->PTR_J_b1_b1_required) *(here->PTR_J_b1_b1)+=here->JSVAL_b1_b1;
  if(here->PTR_J_b1_e1_required) *(here->PTR_J_b1_e1)+=here->JSVAL_b1_e1;
  if(here->PTR_J_e1_b1_required) *(here->PTR_J_e1_b1)+=here->JSVAL_e1_b1;
  if(here->PTR_J_b1_dt_required) *(here->PTR_J_b1_dt)+=here->JSVAL_b1_dt;
  if(here->PTR_J_b2_b2_required) *(here->PTR_J_b2_b2)+=here->JSVAL_b2_b2;
  if(here->PTR_J_b2_e1_required) *(here->PTR_J_b2_e1)+=here->JSVAL_b2_e1;
  if(here->PTR_J_b2_dt_required) *(here->PTR_J_b2_dt)+=here->JSVAL_b2_dt;
  if(here->PTR_J_b2_c1_required) *(here->PTR_J_b2_c1)+=here->JSVAL_b2_c1;
  if(here->PTR_J_b2_c2_required) *(here->PTR_J_b2_c2)+=here->JSVAL_b2_c2;
  if(here->PTR_J_b1_c4_required) *(here->PTR_J_b1_c4)+=here->JSVAL_b1_c4;
  if(here->PTR_J_b1_c1_required) *(here->PTR_J_b1_c1)+=here->JSVAL_b1_c1;
  if(here->PTR_J_s_c4_required) *(here->PTR_J_s_c4)+=here->JSVAL_s_c4;
  if(here->PTR_J_s_c1_required) *(here->PTR_J_s_c1)+=here->JSVAL_s_c1;
  if(here->PTR_J_b1_c2_required) *(here->PTR_J_b1_c2)+=here->JSVAL_b1_c2;
  if(here->PTR_J_s_c2_required) *(here->PTR_J_s_c2)+=here->JSVAL_s_c2;
  if(here->PTR_J_b1_b2_required) *(here->PTR_J_b1_b2)+=here->JSVAL_b1_b2;
  if(here->PTR_J_s_b2_required) *(here->PTR_J_s_b2)+=here->JSVAL_s_b2;
  if(here->PTR_J_s_b1_required) *(here->PTR_J_s_b1)+=here->JSVAL_s_b1;
  if(here->PTR_J_s_dt_required) *(here->PTR_J_s_dt)+=here->JSVAL_s_dt;
  if(here->PTR_J_b_c1_required) *(here->PTR_J_b_c1)+=here->JSVAL_b_c1;
  if(here->PTR_J_b_c2_required) *(here->PTR_J_b_c2)+=here->JSVAL_b_c2;
  if(here->PTR_J_b_b2_required) *(here->PTR_J_b_b2)+=here->JSVAL_b_b2;
  if(here->PTR_J_b_e1_required) *(here->PTR_J_b_e1)+=here->JSVAL_b_e1;
  if(here->PTR_J_s_e1_required) *(here->PTR_J_s_e1)+=here->JSVAL_s_e1;
  if(here->PTR_J_b_c3_required) *(here->PTR_J_b_c3)+=here->JSVAL_b_c3;
  if(here->PTR_J_b_c4_required) *(here->PTR_J_b_c4)+=here->JSVAL_b_c4;
  if(here->PTR_J_s_c3_required) *(here->PTR_J_s_c3)+=here->JSVAL_s_c3;
  if(here->PTR_J_b_b1_required) *(here->PTR_J_b_b1)+=here->JSVAL_b_b1;
  if(here->PTR_J_b_b_required) *(here->PTR_J_b_b)+=here->JSVAL_b_b;
  if(here->PTR_J_s_b_required) *(here->PTR_J_s_b)+=here->JSVAL_s_b;
  if(here->PTR_J_b_c_required) *(here->PTR_J_b_c)+=here->JSVAL_b_c;
  if(here->PTR_J_s_c_required) *(here->PTR_J_s_c)+=here->JSVAL_s_c;
  if(here->PTR_J_b_dt_required) *(here->PTR_J_b_dt)+=here->JSVAL_b_dt;
  if(here->PTR_J_s_s_required) *(here->PTR_J_s_s)+=here->JSVAL_s_s;
  if(here->PTR_J_c1_s_required) *(here->PTR_J_c1_s)+=here->JSVAL_c1_s;
  if(here->PTR_J_b1_c3_required) *(here->PTR_J_b1_c3)+=here->JSVAL_b1_c3;
  if(here->PTR_J_b2_c3_required) *(here->PTR_J_b2_c3)+=here->JSVAL_b2_c3;
  if(here->PTR_J_b2_c4_required) *(here->PTR_J_b2_c4)+=here->JSVAL_b2_c4;
  if(here->PTR_J_b1_b_required) *(here->PTR_J_b1_b)+=here->JSVAL_b1_b;
  if(here->PTR_J_b2_b_required) *(here->PTR_J_b2_b)+=here->JSVAL_b2_b;
  if(here->PTR_J_b2_b1_required) *(here->PTR_J_b2_b1)+=here->JSVAL_b2_b1;
  if(here->PTR_J_b1_c_required) *(here->PTR_J_b1_c)+=here->JSVAL_b1_c;
  if(here->PTR_J_b2_c_required) *(here->PTR_J_b2_c)+=here->JSVAL_b2_c;
  if(here->PTR_J_c2_c3_required) *(here->PTR_J_c2_c3)+=here->JSVAL_c2_c3;
  if(here->PTR_J_c2_c4_required) *(here->PTR_J_c2_c4)+=here->JSVAL_c2_c4;
  if(here->PTR_J_c2_b1_required) *(here->PTR_J_c2_b1)+=here->JSVAL_c2_b1;
  if(here->PTR_J_c2_b_required) *(here->PTR_J_c2_b)+=here->JSVAL_c2_b;
  if(here->PTR_J_c2_c_required) *(here->PTR_J_c2_c)+=here->JSVAL_c2_c;
  if(here->PTR_J_e_dt_required) *(here->PTR_J_e_dt)+=here->JSVAL_e_dt;
  if(here->PTR_J_e_e_required) *(here->PTR_J_e_e)+=here->JSVAL_e_e;
  if(here->PTR_J_e_e1_required) *(here->PTR_J_e_e1)+=here->JSVAL_e_e1;
  if(here->PTR_J_e1_e_required) *(here->PTR_J_e1_e)+=here->JSVAL_e1_e;
  if(here->PTR_J_dt_dt_required) *(here->PTR_J_dt_dt)+=here->JSVAL_dt_dt;
  if(here->PTR_J_dt_s_required) *(here->PTR_J_dt_s)+=here->JSVAL_dt_s;
  if(here->PTR_J_dt_c1_required) *(here->PTR_J_dt_c1)+=here->JSVAL_dt_c1;
  if(here->PTR_J_dt_b1_required) *(here->PTR_J_dt_b1)+=here->JSVAL_dt_b1;
  if(here->PTR_J_dt_e1_required) *(here->PTR_J_dt_e1)+=here->JSVAL_dt_e1;
  if(here->PTR_J_dt_e_required) *(here->PTR_J_dt_e)+=here->JSVAL_dt_e;
  if(here->PTR_J_dt_c3_required) *(here->PTR_J_dt_c3)+=here->JSVAL_dt_c3;
  if(here->PTR_J_dt_c4_required) *(here->PTR_J_dt_c4)+=here->JSVAL_dt_c4;
  if(here->PTR_J_dt_b2_required) *(here->PTR_J_dt_b2)+=here->JSVAL_dt_b2;
  if(here->PTR_J_dt_b_required) *(here->PTR_J_dt_b)+=here->JSVAL_dt_b;
  if(here->PTR_J_dt_c_required) *(here->PTR_J_dt_c)+=here->JSVAL_dt_c;
  if(here->PTR_J_dt_c2_required) *(here->PTR_J_dt_c2)+=here->JSVAL_dt_c2;
  if(here->PTR_J_noi_noi_required) *(here->PTR_J_noi_noi)+=here->JSVAL_noi_noi;
  if(here->PTR_J_noi_e1_required) *(here->PTR_J_noi_e1)+=here->JSVAL_noi_e1;
  if(here->PTR_J_e1_noi_required) *(here->PTR_J_e1_noi)+=here->JSVAL_e1_noi;
  if(here->PTR_J_b2_noi_required) *(here->PTR_J_b2_noi)+=here->JSVAL_b2_noi;
  if(here->PTR_J_c2_noi_required) *(here->PTR_J_c2_noi)+=here->JSVAL_c2_noi;
  if(here->PTR_J_c1_e1_required) *(here->PTR_J_c1_e1)+=here->JSVAL_c1_e1;
  if(here->PTR_J_c1_b1_required) *(here->PTR_J_c1_b1)+=here->JSVAL_c1_b1;
  if(here->PTR_J_c1_c4_required) *(here->PTR_J_c1_c4)+=here->JSVAL_c1_c4;
  if(here->PTR_J_c1_c3_required) *(here->PTR_J_c1_c3)+=here->JSVAL_c1_c3;
  if(here->PTR_J_c1_b_required) *(here->PTR_J_c1_b)+=here->JSVAL_c1_b;
  if(here->PTR_J_c1_c_required) *(here->PTR_J_c1_c)+=here->JSVAL_c1_c;
  if(here->PTR_J_c_b_required) *(here->PTR_J_c_b)+=here->JSVAL_c_b;
  if(here->PTR_J_c_c_required) *(here->PTR_J_c_c)+=here->JSVAL_c_c;
  if(here->PTR_J_c3_c1_required) *(here->PTR_J_c3_c1)+=here->JSVAL_c3_c1;
  if(here->PTR_J_c3_c2_required) *(here->PTR_J_c3_c2)+=here->JSVAL_c3_c2;
  if(here->PTR_J_c3_b2_required) *(here->PTR_J_c3_b2)+=here->JSVAL_c3_b2;
  if(here->PTR_J_c3_e1_required) *(here->PTR_J_c3_e1)+=here->JSVAL_c3_e1;
  if(here->PTR_J_c3_c3_required) *(here->PTR_J_c3_c3)+=here->JSVAL_c3_c3;
  if(here->PTR_J_c3_c4_required) *(here->PTR_J_c3_c4)+=here->JSVAL_c3_c4;
  if(here->PTR_J_c3_b1_required) *(here->PTR_J_c3_b1)+=here->JSVAL_c3_b1;
  if(here->PTR_J_c3_b_required) *(here->PTR_J_c3_b)+=here->JSVAL_c3_b;
  if(here->PTR_J_c3_c_required) *(here->PTR_J_c3_c)+=here->JSVAL_c3_c;
  if(here->PTR_J_c3_dt_required) *(here->PTR_J_c3_dt)+=here->JSVAL_c3_dt;
  if(here->PTR_J_c_dt_required) *(here->PTR_J_c_dt)+=here->JSVAL_c_dt;
  if(here->PTR_J_c_c3_required) *(here->PTR_J_c_c3)+=here->JSVAL_c_c3;
  if(here->PTR_J_c_c4_required) *(here->PTR_J_c_c4)+=here->JSVAL_c_c4;
  if(here->PTR_J_c_c1_required) *(here->PTR_J_c_c1)+=here->JSVAL_c_c1;
  if(here->PTR_J_c_c2_required) *(here->PTR_J_c_c2)+=here->JSVAL_c_c2;
  if(here->PTR_J_c_b2_required) *(here->PTR_J_c_b2)+=here->JSVAL_c_b2;
  if(here->PTR_J_c_b1_required) *(here->PTR_J_c_b1)+=here->JSVAL_c_b1;
  if(here->PTR_J_c4_dt_required) *(here->PTR_J_c4_dt)+=here->JSVAL_c4_dt;
  if(here->PTR_J_c4_c4_required) *(here->PTR_J_c4_c4)+=here->JSVAL_c4_c4;
  if(here->PTR_J_c4_c1_required) *(here->PTR_J_c4_c1)+=here->JSVAL_c4_c1;
  if(here->PTR_J_c4_b2_required) *(here->PTR_J_c4_b2)+=here->JSVAL_c4_b2;
  if(here->PTR_J_c4_e1_required) *(here->PTR_J_c4_e1)+=here->JSVAL_c4_e1;
  if(here->PTR_J_c4_c2_required) *(here->PTR_J_c4_c2)+=here->JSVAL_c4_c2;
  if(here->PTR_J_c4_b1_required) *(here->PTR_J_c4_b1)+=here->JSVAL_c4_b1;
  if(here->PTR_J_c4_c3_required) *(here->PTR_J_c4_c3)+=here->JSVAL_c4_c3;
  if(here->PTR_J_c4_b_required) *(here->PTR_J_c4_b)+=here->JSVAL_c4_b;
  if(here->PTR_J_c4_c_required) *(here->PTR_J_c4_c)+=here->JSVAL_c4_c;
  if(here->PTR_J_noi_b2_required) *(here->PTR_J_noi_b2)+=here->JSVAL_noi_b2;
  if(here->PTR_J_noi_c1_required) *(here->PTR_J_noi_c1)+=here->JSVAL_noi_c1;
  if(here->PTR_J_noi_c2_required) *(here->PTR_J_noi_c2)+=here->JSVAL_noi_c2;
  if(here->PTR_J_noi_dt_required) *(here->PTR_J_noi_dt)+=here->JSVAL_noi_dt;
  if(here->PTR_J_c1_c1_required) *(here->PTR_J_c1_c1+1)+=ckt->CKTomega*here->JDVAL_c1_c1;
  if(here->PTR_J_c1_c2_required) *(here->PTR_J_c1_c2+1)+=ckt->CKTomega*here->JDVAL_c1_c2;
  if(here->PTR_J_c2_c1_required) *(here->PTR_J_c2_c1+1)+=ckt->CKTomega*here->JDVAL_c2_c1;
  if(here->PTR_J_c2_c2_required) *(here->PTR_J_c2_c2+1)+=ckt->CKTomega*here->JDVAL_c2_c2;
  if(here->PTR_J_c1_b2_required) *(here->PTR_J_c1_b2+1)+=ckt->CKTomega*here->JDVAL_c1_b2;
  if(here->PTR_J_c2_b2_required) *(here->PTR_J_c2_b2+1)+=ckt->CKTomega*here->JDVAL_c2_b2;
  if(here->PTR_J_c1_dt_required) *(here->PTR_J_c1_dt+1)+=ckt->CKTomega*here->JDVAL_c1_dt;
  if(here->PTR_J_c2_dt_required) *(here->PTR_J_c2_dt+1)+=ckt->CKTomega*here->JDVAL_c2_dt;
  if(here->PTR_J_e1_c1_required) *(here->PTR_J_e1_c1+1)+=ckt->CKTomega*here->JDVAL_e1_c1;
  if(here->PTR_J_e1_c2_required) *(here->PTR_J_e1_c2+1)+=ckt->CKTomega*here->JDVAL_e1_c2;
  if(here->PTR_J_e1_b2_required) *(here->PTR_J_e1_b2+1)+=ckt->CKTomega*here->JDVAL_e1_b2;
  if(here->PTR_J_c2_e1_required) *(here->PTR_J_c2_e1+1)+=ckt->CKTomega*here->JDVAL_c2_e1;
  if(here->PTR_J_e1_e1_required) *(here->PTR_J_e1_e1+1)+=ckt->CKTomega*here->JDVAL_e1_e1;
  if(here->PTR_J_e1_dt_required) *(here->PTR_J_e1_dt+1)+=ckt->CKTomega*here->JDVAL_e1_dt;
  if(here->PTR_J_b1_b1_required) *(here->PTR_J_b1_b1+1)+=ckt->CKTomega*here->JDVAL_b1_b1;
  if(here->PTR_J_b1_e1_required) *(here->PTR_J_b1_e1+1)+=ckt->CKTomega*here->JDVAL_b1_e1;
  if(here->PTR_J_e1_b1_required) *(here->PTR_J_e1_b1+1)+=ckt->CKTomega*here->JDVAL_e1_b1;
  if(here->PTR_J_b1_dt_required) *(here->PTR_J_b1_dt+1)+=ckt->CKTomega*here->JDVAL_b1_dt;
  if(here->PTR_J_b2_b2_required) *(here->PTR_J_b2_b2+1)+=ckt->CKTomega*here->JDVAL_b2_b2;
  if(here->PTR_J_b2_e1_required) *(here->PTR_J_b2_e1+1)+=ckt->CKTomega*here->JDVAL_b2_e1;
  if(here->PTR_J_b2_dt_required) *(here->PTR_J_b2_dt+1)+=ckt->CKTomega*here->JDVAL_b2_dt;
  if(here->PTR_J_b2_c1_required) *(here->PTR_J_b2_c1+1)+=ckt->CKTomega*here->JDVAL_b2_c1;
  if(here->PTR_J_b2_c2_required) *(here->PTR_J_b2_c2+1)+=ckt->CKTomega*here->JDVAL_b2_c2;
  if(here->PTR_J_b1_c4_required) *(here->PTR_J_b1_c4+1)+=ckt->CKTomega*here->JDVAL_b1_c4;
  if(here->PTR_J_b1_c1_required) *(here->PTR_J_b1_c1+1)+=ckt->CKTomega*here->JDVAL_b1_c1;
  if(here->PTR_J_s_c4_required) *(here->PTR_J_s_c4+1)+=ckt->CKTomega*here->JDVAL_s_c4;
  if(here->PTR_J_s_c1_required) *(here->PTR_J_s_c1+1)+=ckt->CKTomega*here->JDVAL_s_c1;
  if(here->PTR_J_b1_c2_required) *(here->PTR_J_b1_c2+1)+=ckt->CKTomega*here->JDVAL_b1_c2;
  if(here->PTR_J_s_c2_required) *(here->PTR_J_s_c2+1)+=ckt->CKTomega*here->JDVAL_s_c2;
  if(here->PTR_J_b1_b2_required) *(here->PTR_J_b1_b2+1)+=ckt->CKTomega*here->JDVAL_b1_b2;
  if(here->PTR_J_s_b2_required) *(here->PTR_J_s_b2+1)+=ckt->CKTomega*here->JDVAL_s_b2;
  if(here->PTR_J_s_b1_required) *(here->PTR_J_s_b1+1)+=ckt->CKTomega*here->JDVAL_s_b1;
  if(here->PTR_J_s_dt_required) *(here->PTR_J_s_dt+1)+=ckt->CKTomega*here->JDVAL_s_dt;
  if(here->PTR_J_b_c1_required) *(here->PTR_J_b_c1+1)+=ckt->CKTomega*here->JDVAL_b_c1;
  if(here->PTR_J_b_c2_required) *(here->PTR_J_b_c2+1)+=ckt->CKTomega*here->JDVAL_b_c2;
  if(here->PTR_J_b_b2_required) *(here->PTR_J_b_b2+1)+=ckt->CKTomega*here->JDVAL_b_b2;
  if(here->PTR_J_b_e1_required) *(here->PTR_J_b_e1+1)+=ckt->CKTomega*here->JDVAL_b_e1;
  if(here->PTR_J_s_e1_required) *(here->PTR_J_s_e1+1)+=ckt->CKTomega*here->JDVAL_s_e1;
  if(here->PTR_J_b_c3_required) *(here->PTR_J_b_c3+1)+=ckt->CKTomega*here->JDVAL_b_c3;
  if(here->PTR_J_b_c4_required) *(here->PTR_J_b_c4+1)+=ckt->CKTomega*here->JDVAL_b_c4;
  if(here->PTR_J_s_c3_required) *(here->PTR_J_s_c3+1)+=ckt->CKTomega*here->JDVAL_s_c3;
  if(here->PTR_J_b_b1_required) *(here->PTR_J_b_b1+1)+=ckt->CKTomega*here->JDVAL_b_b1;
  if(here->PTR_J_b_b_required) *(here->PTR_J_b_b+1)+=ckt->CKTomega*here->JDVAL_b_b;
  if(here->PTR_J_s_b_required) *(here->PTR_J_s_b+1)+=ckt->CKTomega*here->JDVAL_s_b;
  if(here->PTR_J_b_c_required) *(here->PTR_J_b_c+1)+=ckt->CKTomega*here->JDVAL_b_c;
  if(here->PTR_J_s_c_required) *(here->PTR_J_s_c+1)+=ckt->CKTomega*here->JDVAL_s_c;
  if(here->PTR_J_b_dt_required) *(here->PTR_J_b_dt+1)+=ckt->CKTomega*here->JDVAL_b_dt;
  if(here->PTR_J_s_s_required) *(here->PTR_J_s_s+1)+=ckt->CKTomega*here->JDVAL_s_s;
  if(here->PTR_J_c1_s_required) *(here->PTR_J_c1_s+1)+=ckt->CKTomega*here->JDVAL_c1_s;
  if(here->PTR_J_b1_c3_required) *(here->PTR_J_b1_c3+1)+=ckt->CKTomega*here->JDVAL_b1_c3;
  if(here->PTR_J_b2_c3_required) *(here->PTR_J_b2_c3+1)+=ckt->CKTomega*here->JDVAL_b2_c3;
  if(here->PTR_J_b2_c4_required) *(here->PTR_J_b2_c4+1)+=ckt->CKTomega*here->JDVAL_b2_c4;
  if(here->PTR_J_b1_b_required) *(here->PTR_J_b1_b+1)+=ckt->CKTomega*here->JDVAL_b1_b;
  if(here->PTR_J_b2_b_required) *(here->PTR_J_b2_b+1)+=ckt->CKTomega*here->JDVAL_b2_b;
  if(here->PTR_J_b2_b1_required) *(here->PTR_J_b2_b1+1)+=ckt->CKTomega*here->JDVAL_b2_b1;
  if(here->PTR_J_b1_c_required) *(here->PTR_J_b1_c+1)+=ckt->CKTomega*here->JDVAL_b1_c;
  if(here->PTR_J_b2_c_required) *(here->PTR_J_b2_c+1)+=ckt->CKTomega*here->JDVAL_b2_c;
  if(here->PTR_J_c2_c3_required) *(here->PTR_J_c2_c3+1)+=ckt->CKTomega*here->JDVAL_c2_c3;
  if(here->PTR_J_c2_c4_required) *(here->PTR_J_c2_c4+1)+=ckt->CKTomega*here->JDVAL_c2_c4;
  if(here->PTR_J_c2_b1_required) *(here->PTR_J_c2_b1+1)+=ckt->CKTomega*here->JDVAL_c2_b1;
  if(here->PTR_J_c2_b_required) *(here->PTR_J_c2_b+1)+=ckt->CKTomega*here->JDVAL_c2_b;
  if(here->PTR_J_c2_c_required) *(here->PTR_J_c2_c+1)+=ckt->CKTomega*here->JDVAL_c2_c;
  if(here->PTR_J_e_e_required) *(here->PTR_J_e_e+1)+=ckt->CKTomega*here->JDVAL_e_e;
  if(here->PTR_J_dt_dt_required) *(here->PTR_J_dt_dt+1)+=ckt->CKTomega*here->JDVAL_dt_dt;
  if(here->PTR_J_e1_c3_required) *(here->PTR_J_e1_c3+1)+=ckt->CKTomega*here->JDVAL_e1_c3;
  if(here->PTR_J_e1_c4_required) *(here->PTR_J_e1_c4+1)+=ckt->CKTomega*here->JDVAL_e1_c4;
  if(here->PTR_J_e1_b_required) *(here->PTR_J_e1_b+1)+=ckt->CKTomega*here->JDVAL_e1_b;
  if(here->PTR_J_e1_c_required) *(here->PTR_J_e1_c+1)+=ckt->CKTomega*here->JDVAL_e1_c;
  if(here->PTR_J_c1_e1_required) *(here->PTR_J_c1_e1+1)+=ckt->CKTomega*here->JDVAL_c1_e1;
  if(here->PTR_J_c1_b1_required) *(here->PTR_J_c1_b1+1)+=ckt->CKTomega*here->JDVAL_c1_b1;
  if(here->PTR_J_c1_c4_required) *(here->PTR_J_c1_c4+1)+=ckt->CKTomega*here->JDVAL_c1_c4;
  if(here->PTR_J_c1_c3_required) *(here->PTR_J_c1_c3+1)+=ckt->CKTomega*here->JDVAL_c1_c3;
  if(here->PTR_J_c1_b_required) *(here->PTR_J_c1_b+1)+=ckt->CKTomega*here->JDVAL_c1_b;
  if(here->PTR_J_c1_c_required) *(here->PTR_J_c1_c+1)+=ckt->CKTomega*here->JDVAL_c1_c;
  if(here->PTR_J_b_e_required) *(here->PTR_J_b_e+1)+=ckt->CKTomega*here->JDVAL_b_e;
  if(here->PTR_J_e_b_required) *(here->PTR_J_e_b+1)+=ckt->CKTomega*here->JDVAL_e_b;
  if(here->PTR_J_c_b_required) *(here->PTR_J_c_b+1)+=ckt->CKTomega*here->JDVAL_c_b;
  if(here->PTR_J_c_c_required) *(here->PTR_J_c_c+1)+=ckt->CKTomega*here->JDVAL_c_c;
  if(here->PTR_J_c3_c1_required) *(here->PTR_J_c3_c1+1)+=ckt->CKTomega*here->JDVAL_c3_c1;
  if(here->PTR_J_c3_c2_required) *(here->PTR_J_c3_c2+1)+=ckt->CKTomega*here->JDVAL_c3_c2;
  if(here->PTR_J_c3_b2_required) *(here->PTR_J_c3_b2+1)+=ckt->CKTomega*here->JDVAL_c3_b2;
  if(here->PTR_J_c3_e1_required) *(here->PTR_J_c3_e1+1)+=ckt->CKTomega*here->JDVAL_c3_e1;
  if(here->PTR_J_c3_c3_required) *(here->PTR_J_c3_c3+1)+=ckt->CKTomega*here->JDVAL_c3_c3;
  if(here->PTR_J_c3_c4_required) *(here->PTR_J_c3_c4+1)+=ckt->CKTomega*here->JDVAL_c3_c4;
  if(here->PTR_J_c3_b1_required) *(here->PTR_J_c3_b1+1)+=ckt->CKTomega*here->JDVAL_c3_b1;
  if(here->PTR_J_c3_b_required) *(here->PTR_J_c3_b+1)+=ckt->CKTomega*here->JDVAL_c3_b;
  if(here->PTR_J_c3_c_required) *(here->PTR_J_c3_c+1)+=ckt->CKTomega*here->JDVAL_c3_c;
  if(here->PTR_J_c3_dt_required) *(here->PTR_J_c3_dt+1)+=ckt->CKTomega*here->JDVAL_c3_dt;
  if(here->PTR_J_c4_dt_required) *(here->PTR_J_c4_dt+1)+=ckt->CKTomega*here->JDVAL_c4_dt;
  if(here->PTR_J_c4_c4_required) *(here->PTR_J_c4_c4+1)+=ckt->CKTomega*here->JDVAL_c4_c4;
  if(here->PTR_J_c4_c1_required) *(here->PTR_J_c4_c1+1)+=ckt->CKTomega*here->JDVAL_c4_c1;
  if(here->PTR_J_c4_b2_required) *(here->PTR_J_c4_b2+1)+=ckt->CKTomega*here->JDVAL_c4_b2;
  if(here->PTR_J_c4_e1_required) *(here->PTR_J_c4_e1+1)+=ckt->CKTomega*here->JDVAL_c4_e1;
  if(here->PTR_J_c4_c2_required) *(here->PTR_J_c4_c2+1)+=ckt->CKTomega*here->JDVAL_c4_c2;
  if(here->PTR_J_c4_b1_required) *(here->PTR_J_c4_b1+1)+=ckt->CKTomega*here->JDVAL_c4_b1;
  if(here->PTR_J_c4_c3_required) *(here->PTR_J_c4_c3+1)+=ckt->CKTomega*here->JDVAL_c4_c3;
  if(here->PTR_J_c4_b_required) *(here->PTR_J_c4_b+1)+=ckt->CKTomega*here->JDVAL_c4_b;
  if(here->PTR_J_c4_c_required) *(here->PTR_J_c4_c+1)+=ckt->CKTomega*here->JDVAL_c4_c;

    } /* End of MOSFET Instance */
  } /* End of Model Instance */
  return(OK);
}
