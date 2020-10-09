// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIlibdIMiTools
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "MiTools.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_MiTools(void *p = 0);
   static void *newArray_MiTools(Long_t size, void *p);
   static void delete_MiTools(void *p);
   static void deleteArray_MiTools(void *p);
   static void destruct_MiTools(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MiTools*)
   {
      ::MiTools *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MiTools >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MiTools", ::MiTools::Class_Version(), "MiTools.h", 14,
                  typeid(::MiTools), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MiTools::Dictionary, isa_proxy, 4,
                  sizeof(::MiTools) );
      instance.SetNew(&new_MiTools);
      instance.SetNewArray(&newArray_MiTools);
      instance.SetDelete(&delete_MiTools);
      instance.SetDeleteArray(&deleteArray_MiTools);
      instance.SetDestructor(&destruct_MiTools);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MiTools*)
   {
      return GenerateInitInstanceLocal((::MiTools*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MiTools*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MiTools::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MiTools::Class_Name()
{
   return "MiTools";
}

//______________________________________________________________________________
const char *MiTools::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiTools*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MiTools::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiTools*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MiTools::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiTools*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MiTools::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiTools*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MiTools::Streamer(TBuffer &R__b)
{
   // Stream an object of class MiTools.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MiTools::Class(),this);
   } else {
      R__b.WriteClassBuffer(MiTools::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MiTools(void *p) {
      return  p ? new(p) ::MiTools : new ::MiTools;
   }
   static void *newArray_MiTools(Long_t nElements, void *p) {
      return p ? new(p) ::MiTools[nElements] : new ::MiTools[nElements];
   }
   // Wrapper around operator delete
   static void delete_MiTools(void *p) {
      delete ((::MiTools*)p);
   }
   static void deleteArray_MiTools(void *p) {
      delete [] ((::MiTools*)p);
   }
   static void destruct_MiTools(void *p) {
      typedef ::MiTools current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MiTools

namespace {
  void TriggerDictionaryInitialization_MiTools_Impl() {
    static const char* headers[] = {
"MiTools.h",
0
    };
    static const char* includePaths[] = {
"/opt/supernemo/Cellar/root6/6.18.04/include/root6",
"/home/mireq-utef/SNEMO/MiModule_v1.1.0/include/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MiTools dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MiTools.h")))  MiTools;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MiTools dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MiTools.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MiTools", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MiTools",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MiTools_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MiTools_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MiTools() {
  TriggerDictionaryInitialization_MiTools_Impl();
}
