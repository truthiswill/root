// Id$
// Author: Valeriy Onuchin  15/11/2003


/*************************************************************************
 * Copyright (C) 1995-2001, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/


//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TGWin32InterpreterProxy                                              //
//                                                                      //
// This class defines thread-safe interface to a command line           //
// interpreter (CINT).                                                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#include "TGWin32ProxyDefs.h"
#include "TGWin32InterpreterProxy.h"
#include "TROOT.h"
#include "TGWin32.h"


////////////////////////////////////////////////////////////////////////////////
//______________________________________________________________________________
TInterpreter *TGWin32InterpreterProxy::RealObject()
{
   // returns TCint object

   return gROOT->GetInterpreter();
}

RETURN_PROXY_OBJECT(Interpreter)
VOID_METHOD_ARG1(Interpreter,AddIncludePath,const char*,path,1)
VOID_METHOD_ARG0(Interpreter,ClearFileBusy,1)
VOID_METHOD_ARG0(Interpreter,ClearStack,1)
VOID_METHOD_ARG0(Interpreter,EndOfLineAction,1)
RETURN_METHOD_ARG0(Interpreter,Int_t,InitializeDictionaries)
RETURN_METHOD_ARG0(Interpreter,char*,GetPrompt)
RETURN_METHOD_ARG0(Interpreter,const char*,GetSharedLibs)
RETURN_METHOD_ARG0(Interpreter,const char*,GetIncludePath)
RETURN_METHOD_ARG2(Interpreter,Int_t,Load,const char*,filenam,Bool_t,system)
VOID_METHOD_ARG2(Interpreter,LoadMacro,const char*,filename,TInterpreter::EErrorCode*,error,1)
RETURN_METHOD_ARG2(Interpreter,Long_t,ProcessLine,const char*,line,TInterpreter::EErrorCode*,error)
RETURN_METHOD_ARG2(Interpreter,Long_t,ProcessLineSynch,const char*,line,TInterpreter::EErrorCode*,error)
VOID_METHOD_ARG0(Interpreter,PrintIntro,1)
VOID_METHOD_ARG0(Interpreter,Reset,1)
VOID_METHOD_ARG0(Interpreter,ResetAll,1)
VOID_METHOD_ARG0(Interpreter,ResetGlobals,1)
VOID_METHOD_ARG0(Interpreter,RewindDictionary,1)
RETURN_METHOD_ARG1(Interpreter,Int_t,DeleteGlobal,void*,obj)
VOID_METHOD_ARG0(Interpreter,SaveContext,1)
VOID_METHOD_ARG0(Interpreter,SaveGlobalsContext,1)
VOID_METHOD_ARG0_LOCK(Interpreter,UpdateListOfGlobals)
VOID_METHOD_ARG0_LOCK(Interpreter,UpdateListOfGlobalFunctions)
VOID_METHOD_ARG0_LOCK(Interpreter,UpdateListOfTypes)
VOID_METHOD_ARG2_LOCK(Interpreter,SetClassInfo,TClass*,cl,Bool_t,reload)
RETURN_METHOD_ARG1(Interpreter,Bool_t,CheckClassInfo,const char*,name)
RETURN_METHOD_ARG2(Interpreter,Long_t,Calc,const char*,line,TInterpreter::EErrorCode*,error)
VOID_METHOD_ARG1_LOCK(Interpreter,CreateListOfBaseClasses,TClass*,cl)
VOID_METHOD_ARG1_LOCK(Interpreter,CreateListOfDataMembers,TClass*,cl)
VOID_METHOD_ARG1_LOCK(Interpreter,CreateListOfMethods,TClass*,cl)
VOID_METHOD_ARG1_LOCK(Interpreter,CreateListOfMethodArgs,TFunction*,m)
RETURN_METHOD_ARG3(Interpreter,TString,GetMangledName,TClass*,cl,const char*,method,const char*,params)
RETURN_METHOD_ARG3(Interpreter,TString,GetMangledNameWithPrototype,TClass*,cl,const char*,method,const char*,proto)
RETURN_METHOD_ARG3(Interpreter,void*,GetInterfaceMethod,TClass*,cl,const char*,method,const char*,params)
RETURN_METHOD_ARG3(Interpreter,void*,GetInterfaceMethodWithPrototype,TClass*,cl,const char*,method,const char*,proto)
VOID_METHOD_ARG3(Interpreter,Execute,const char*,function,const char*,params,int*,error,1)
VOID_METHOD_ARG5(Interpreter,Execute,TObject*,obj,TClass*,cl,const char*,method,const char*,params,int*,error,1)
VOID_METHOD_ARG5(Interpreter,Execute,TObject*,object,TClass*,cl,TMethod*,method,TObjArray*,params,int*,error,1)
RETURN_METHOD_ARG2(Interpreter,Long_t,ExecuteMacro,const char*,filename,TInterpreter::EErrorCode*,error)
RETURN_METHOD_ARG0(Interpreter,Bool_t,IsErrorMessagesEnabled)
RETURN_METHOD_ARG1(Interpreter,Bool_t,SetErrorMessages,Bool_t,enable)
RETURN_METHOD_ARG1(Interpreter,const char*,TypeName,const char*,s)
