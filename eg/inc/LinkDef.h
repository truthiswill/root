/* @(#)root/eg:$Name:  $:$Id: LinkDef.h,v 1.2 2000/09/06 15:15:18 brun Exp $ */

/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ class TParticle-;
#pragma link C++ class TAttParticle;
#pragma link C++ class TPrimary;
#pragma link C++ class TGenerator-;
#pragma link C++ class TDatabasePDG+;
#pragma link C++ class TParticlePDG+;

#endif
