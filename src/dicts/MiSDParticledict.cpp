// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIlibdIMiSDParticledict
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
#include "MiSDParticle.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_MiSDParticle(void *p = 0);
   static void *newArray_MiSDParticle(Long_t size, void *p);
   static void delete_MiSDParticle(void *p);
   static void deleteArray_MiSDParticle(void *p);
   static void destruct_MiSDParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MiSDParticle*)
   {
      ::MiSDParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MiSDParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MiSDParticle", ::MiSDParticle::Class_Version(), "MiSDParticle.h", 12,
                  typeid(::MiSDParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MiSDParticle::Dictionary, isa_proxy, 4,
                  sizeof(::MiSDParticle) );
      instance.SetNew(&new_MiSDParticle);
      instance.SetNewArray(&newArray_MiSDParticle);
      instance.SetDelete(&delete_MiSDParticle);
      instance.SetDeleteArray(&deleteArray_MiSDParticle);
      instance.SetDestructor(&destruct_MiSDParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MiSDParticle*)
   {
      return GenerateInitInstanceLocal((::MiSDParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MiSDParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MiSDParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MiSDParticle::Class_Name()
{
   return "MiSDParticle";
}

//______________________________________________________________________________
const char *MiSDParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiSDParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MiSDParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiSDParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MiSDParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiSDParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MiSDParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiSDParticle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MiSDParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class MiSDParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MiSDParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(MiSDParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MiSDParticle(void *p) {
      return  p ? new(p) ::MiSDParticle : new ::MiSDParticle;
   }
   static void *newArray_MiSDParticle(Long_t nElements, void *p) {
      return p ? new(p) ::MiSDParticle[nElements] : new ::MiSDParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_MiSDParticle(void *p) {
      delete ((::MiSDParticle*)p);
   }
   static void deleteArray_MiSDParticle(void *p) {
      delete [] ((::MiSDParticle*)p);
   }
   static void destruct_MiSDParticle(void *p) {
      typedef ::MiSDParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MiSDParticle

namespace {
  void TriggerDictionaryInitialization_MiSDParticledict_Impl() {
    static const char* headers[] = {
"MiSDParticle.h",
0
    };
    static const char* includePaths[] = {
"/opt/supernemo/Cellar/root6/6.18.04/include/root6",
"/home/mireq-utef/SNEMO/MiModule_v1.1.0/include/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MiSDParticledict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MiSDParticle.h")))  MiSDParticle;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MiSDParticledict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MiSDParticle.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MiSDParticle", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MiSDParticledict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MiSDParticledict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MiSDParticledict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MiSDParticledict() {
  TriggerDictionaryInitialization_MiSDParticledict_Impl();
}
