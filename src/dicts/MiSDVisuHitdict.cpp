// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIlibdIMiSDVisuHitdict
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
#include "MiSDVisuHit.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_MiSDVisuHit(void *p = 0);
   static void *newArray_MiSDVisuHit(Long_t size, void *p);
   static void delete_MiSDVisuHit(void *p);
   static void deleteArray_MiSDVisuHit(void *p);
   static void destruct_MiSDVisuHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MiSDVisuHit*)
   {
      ::MiSDVisuHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MiSDVisuHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MiSDVisuHit", ::MiSDVisuHit::Class_Version(), "MiSDVisuHit.h", 15,
                  typeid(::MiSDVisuHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MiSDVisuHit::Dictionary, isa_proxy, 4,
                  sizeof(::MiSDVisuHit) );
      instance.SetNew(&new_MiSDVisuHit);
      instance.SetNewArray(&newArray_MiSDVisuHit);
      instance.SetDelete(&delete_MiSDVisuHit);
      instance.SetDeleteArray(&deleteArray_MiSDVisuHit);
      instance.SetDestructor(&destruct_MiSDVisuHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MiSDVisuHit*)
   {
      return GenerateInitInstanceLocal((::MiSDVisuHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MiSDVisuHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MiSDVisuHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MiSDVisuHit::Class_Name()
{
   return "MiSDVisuHit";
}

//______________________________________________________________________________
const char *MiSDVisuHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiSDVisuHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MiSDVisuHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiSDVisuHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MiSDVisuHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiSDVisuHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MiSDVisuHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiSDVisuHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MiSDVisuHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class MiSDVisuHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MiSDVisuHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(MiSDVisuHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MiSDVisuHit(void *p) {
      return  p ? new(p) ::MiSDVisuHit : new ::MiSDVisuHit;
   }
   static void *newArray_MiSDVisuHit(Long_t nElements, void *p) {
      return p ? new(p) ::MiSDVisuHit[nElements] : new ::MiSDVisuHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_MiSDVisuHit(void *p) {
      delete ((::MiSDVisuHit*)p);
   }
   static void deleteArray_MiSDVisuHit(void *p) {
      delete [] ((::MiSDVisuHit*)p);
   }
   static void destruct_MiSDVisuHit(void *p) {
      typedef ::MiSDVisuHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MiSDVisuHit

namespace {
  void TriggerDictionaryInitialization_MiSDVisuHitdict_Impl() {
    static const char* headers[] = {
"MiSDVisuHit.h",
0
    };
    static const char* includePaths[] = {
"/opt/supernemo/Cellar/root6/6.18.04/include/root6",
"/home/mireq-utef/SNEMO/MiModule_v1.1.0/include/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MiSDVisuHitdict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MiSDVisuHit.h")))  MiSDVisuHit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MiSDVisuHitdict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MiSDVisuHit.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MiSDVisuHit", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MiSDVisuHitdict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MiSDVisuHitdict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MiSDVisuHitdict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MiSDVisuHitdict() {
  TriggerDictionaryInitialization_MiSDVisuHitdict_Impl();
}
