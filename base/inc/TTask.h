// @(#)root/base:$Name:  $:$Id: TTask.h,v 1.4 2000/09/06 09:29:20 brun Exp $
// Author: Rene Brun   02/09/2000

/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

#ifndef ROOT_TTask
#define ROOT_TTask


//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TTask                                                                //
//                                                                      //
// Base class for recursive execution of tasks.                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif

class TBrowser;


class TTask : public TNamed {

protected:
   TList        *fTasks;        //List of Tasks
   TString       fOption;       //Option specified in ExecuteTask
   Int_t         fBreakin;      //=1 if a break point set at task extry
   Int_t         fBreakout;     //=1 if a break point set at task exit
   Bool_t        fHasExecuted;  //True if task has executed
   Bool_t        fActive;       //true if task is active

   static TTask *fgBeginTask;    //pointer to task initiator
   static TTask *fgBreakPoint;   //pointer to current break point

public:
   TTask();
   TTask(const char* name, const char *title);
   TTask(const TTask &task);
   virtual ~TTask();

           void  Abort();  // *MENU*
           void  Add(TTask *task) {fTasks->Add(task);}
   virtual void  Browse(TBrowser *b);
           void  CleanTasks();
   virtual void  Clear(Option_t *option="");
   virtual void  Continue(); // *MENU*
   virtual void  Exec(Option_t *option);
           void  ExecuteTask(Option_t *option="0");  // *MENU*
           void  ExecuteTasks(Option_t *option);
          Int_t  GetBreakin() const {return fBreakin;}
          Int_t  GetBreakout() const {return fBreakout;}
         Bool_t  IsActive() const { return fActive; }
         Bool_t  IsFolder() const { return kTRUE; }
   virtual void  ls(Option_t *option="*");  // *MENU*
           void  SetActive(Bool_t active=kTRUE) {fActive=active;} // *TOGGLE*
           void  SetBreakin(Int_t breakin=1)    {fBreakin = breakin;} // *TOGGLE*
           void  SetBreakout(Int_t breakout=1)  {fBreakout=breakout;} // *TOGGLE*
          TList *GetListOfTasks() const {return fTasks;}

   ClassDef(TTask,1)  //Base class for tasks
};

#endif
