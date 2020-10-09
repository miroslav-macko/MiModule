// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIlibdIMiCDCaloHitdict
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
#include "MiCDCaloHit.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_MiCDCaloHit(void *p = 0);
   static void *newArray_MiCDCaloHit(Long_t size, void *p);
   static void delete_MiCDCaloHit(void *p);
   static void deleteArray_MiCDCaloHit(void *p);
   static void destruct_MiCDCaloHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MiCDCaloHit*)
   {
      ::MiCDCaloHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MiCDCaloHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MiCDCaloHit", ::MiCDCaloHit::Class_Version(), "MiCDCaloHit.h", 12,
                  typeid(::MiCDCaloHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MiCDCaloHit::Dictionary, isa_proxy, 4,
                  sizeof(::MiCDCaloHit) );
      instance.SetNew(&new_MiCDCaloHit);
      instance.SetNewArray(&newArray_MiCDCaloHit);
      instance.SetDelete(&delete_MiCDCaloHit);
      instance.SetDeleteArray(&deleteArray_MiCDCaloHit);
      instance.SetDestructor(&destruct_MiCDCaloHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MiCDCaloHit*)
   {
      return GenerateInitInstanceLocal((::MiCDCaloHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MiCDCaloHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MiCDCaloHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MiCDCaloHit::Class_Name()
{
   return "MiCDCaloHit";
}

//______________________________________________________________________________
const char *MiCDCaloHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiCDCaloHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MiCDCaloHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiCDCaloHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MiCDCaloHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiCDCaloHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MiCDCaloHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiCDCaloHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MiCDCaloHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class MiCDCaloHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MiCDCaloHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(MiCDCaloHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MiCDCaloHit(void *p) {
      return  p ? new(p) ::MiCDCaloHit : new ::MiCDCaloHit;
   }
   static void *newArray_MiCDCaloHit(Long_t nElements, void *p) {
      return p ? new(p) ::MiCDCaloHit[nElements] : new ::MiCDCaloHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_MiCDCaloHit(void *p) {
      delete ((::MiCDCaloHit*)p);
   }
   static void deleteArray_MiCDCaloHit(void *p) {
      delete [] ((::MiCDCaloHit*)p);
   }
   static void destruct_MiCDCaloHit(void *p) {
      typedef ::MiCDCaloHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MiCDCaloHit

namespace {
  void TriggerDictionaryInitialization_MiCDCaloHitdict_Impl() {
    static const char* headers[] = {
"MiCDCaloHit.h",
0
    };
    static const char* includePaths[] = {
"/opt/supernemo/Cellar/root6/6.18.04/include/root6",
"/home/mireq-utef/SNEMO/MiModule_v1.1.0/include/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MiCDCaloHitdict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MiCDCaloHit.h")))  MiCDCaloHit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MiCDCaloHitdict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MiCDCaloHit.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MiCDCaloHit", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MiCDCaloHitdict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MiCDCaloHitdict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MiCDCaloHitdict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MiCDCaloHitdict() {
  TriggerDictionaryInitialization_MiCDCaloHitdict_Impl();
}
