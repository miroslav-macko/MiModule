// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIlibdIMiSDCaloHitdict
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
#include "MiSDCaloHit.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_MiSDCaloHit(void *p = 0);
   static void *newArray_MiSDCaloHit(Long_t size, void *p);
   static void delete_MiSDCaloHit(void *p);
   static void deleteArray_MiSDCaloHit(void *p);
   static void destruct_MiSDCaloHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MiSDCaloHit*)
   {
      ::MiSDCaloHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MiSDCaloHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MiSDCaloHit", ::MiSDCaloHit::Class_Version(), "MiSDCaloHit.h", 12,
                  typeid(::MiSDCaloHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MiSDCaloHit::Dictionary, isa_proxy, 4,
                  sizeof(::MiSDCaloHit) );
      instance.SetNew(&new_MiSDCaloHit);
      instance.SetNewArray(&newArray_MiSDCaloHit);
      instance.SetDelete(&delete_MiSDCaloHit);
      instance.SetDeleteArray(&deleteArray_MiSDCaloHit);
      instance.SetDestructor(&destruct_MiSDCaloHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MiSDCaloHit*)
   {
      return GenerateInitInstanceLocal((::MiSDCaloHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MiSDCaloHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MiSDCaloHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MiSDCaloHit::Class_Name()
{
   return "MiSDCaloHit";
}

//______________________________________________________________________________
const char *MiSDCaloHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiSDCaloHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MiSDCaloHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiSDCaloHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MiSDCaloHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiSDCaloHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MiSDCaloHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiSDCaloHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MiSDCaloHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class MiSDCaloHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MiSDCaloHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(MiSDCaloHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MiSDCaloHit(void *p) {
      return  p ? new(p) ::MiSDCaloHit : new ::MiSDCaloHit;
   }
   static void *newArray_MiSDCaloHit(Long_t nElements, void *p) {
      return p ? new(p) ::MiSDCaloHit[nElements] : new ::MiSDCaloHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_MiSDCaloHit(void *p) {
      delete ((::MiSDCaloHit*)p);
   }
   static void deleteArray_MiSDCaloHit(void *p) {
      delete [] ((::MiSDCaloHit*)p);
   }
   static void destruct_MiSDCaloHit(void *p) {
      typedef ::MiSDCaloHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MiSDCaloHit

namespace {
  void TriggerDictionaryInitialization_MiSDCaloHitdict_Impl() {
    static const char* headers[] = {
"MiSDCaloHit.h",
0
    };
    static const char* includePaths[] = {
"/opt/supernemo/Cellar/root6/6.18.04/include/root6",
"/home/mireq-utef/SNEMO/MiModule_v1.1.0/include/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MiSDCaloHitdict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MiSDCaloHit.h")))  MiSDCaloHit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MiSDCaloHitdict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MiSDCaloHit.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MiSDCaloHit", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MiSDCaloHitdict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MiSDCaloHitdict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MiSDCaloHitdict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MiSDCaloHitdict() {
  TriggerDictionaryInitialization_MiSDCaloHitdict_Impl();
}
