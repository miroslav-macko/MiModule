// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIlibdIMiCDParticledict
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
#include "MiCDParticle.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_MiCDParticle(void *p = 0);
   static void *newArray_MiCDParticle(Long_t size, void *p);
   static void delete_MiCDParticle(void *p);
   static void deleteArray_MiCDParticle(void *p);
   static void destruct_MiCDParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MiCDParticle*)
   {
      ::MiCDParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MiCDParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MiCDParticle", ::MiCDParticle::Class_Version(), "MiCDParticle.h", 16,
                  typeid(::MiCDParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MiCDParticle::Dictionary, isa_proxy, 4,
                  sizeof(::MiCDParticle) );
      instance.SetNew(&new_MiCDParticle);
      instance.SetNewArray(&newArray_MiCDParticle);
      instance.SetDelete(&delete_MiCDParticle);
      instance.SetDeleteArray(&deleteArray_MiCDParticle);
      instance.SetDestructor(&destruct_MiCDParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MiCDParticle*)
   {
      return GenerateInitInstanceLocal((::MiCDParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MiCDParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MiCDParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MiCDParticle::Class_Name()
{
   return "MiCDParticle";
}

//______________________________________________________________________________
const char *MiCDParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiCDParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MiCDParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiCDParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MiCDParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiCDParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MiCDParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiCDParticle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MiCDParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class MiCDParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MiCDParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(MiCDParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MiCDParticle(void *p) {
      return  p ? new(p) ::MiCDParticle : new ::MiCDParticle;
   }
   static void *newArray_MiCDParticle(Long_t nElements, void *p) {
      return p ? new(p) ::MiCDParticle[nElements] : new ::MiCDParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_MiCDParticle(void *p) {
      delete ((::MiCDParticle*)p);
   }
   static void deleteArray_MiCDParticle(void *p) {
      delete [] ((::MiCDParticle*)p);
   }
   static void destruct_MiCDParticle(void *p) {
      typedef ::MiCDParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MiCDParticle

namespace ROOT {
   static TClass *vectorlEMiVertexgR_Dictionary();
   static void vectorlEMiVertexgR_TClassManip(TClass*);
   static void *new_vectorlEMiVertexgR(void *p = 0);
   static void *newArray_vectorlEMiVertexgR(Long_t size, void *p);
   static void delete_vectorlEMiVertexgR(void *p);
   static void deleteArray_vectorlEMiVertexgR(void *p);
   static void destruct_vectorlEMiVertexgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<MiVertex>*)
   {
      vector<MiVertex> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<MiVertex>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<MiVertex>", -2, "vector", 216,
                  typeid(vector<MiVertex>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMiVertexgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<MiVertex>) );
      instance.SetNew(&new_vectorlEMiVertexgR);
      instance.SetNewArray(&newArray_vectorlEMiVertexgR);
      instance.SetDelete(&delete_vectorlEMiVertexgR);
      instance.SetDeleteArray(&deleteArray_vectorlEMiVertexgR);
      instance.SetDestructor(&destruct_vectorlEMiVertexgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<MiVertex> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<MiVertex>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMiVertexgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<MiVertex>*)0x0)->GetClass();
      vectorlEMiVertexgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMiVertexgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMiVertexgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MiVertex> : new vector<MiVertex>;
   }
   static void *newArray_vectorlEMiVertexgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MiVertex>[nElements] : new vector<MiVertex>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMiVertexgR(void *p) {
      delete ((vector<MiVertex>*)p);
   }
   static void deleteArray_vectorlEMiVertexgR(void *p) {
      delete [] ((vector<MiVertex>*)p);
   }
   static void destruct_vectorlEMiVertexgR(void *p) {
      typedef vector<MiVertex> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<MiVertex>

namespace ROOT {
   static TClass *vectorlEMiCDCaloHitgR_Dictionary();
   static void vectorlEMiCDCaloHitgR_TClassManip(TClass*);
   static void *new_vectorlEMiCDCaloHitgR(void *p = 0);
   static void *newArray_vectorlEMiCDCaloHitgR(Long_t size, void *p);
   static void delete_vectorlEMiCDCaloHitgR(void *p);
   static void deleteArray_vectorlEMiCDCaloHitgR(void *p);
   static void destruct_vectorlEMiCDCaloHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<MiCDCaloHit>*)
   {
      vector<MiCDCaloHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<MiCDCaloHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<MiCDCaloHit>", -2, "vector", 216,
                  typeid(vector<MiCDCaloHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMiCDCaloHitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<MiCDCaloHit>) );
      instance.SetNew(&new_vectorlEMiCDCaloHitgR);
      instance.SetNewArray(&newArray_vectorlEMiCDCaloHitgR);
      instance.SetDelete(&delete_vectorlEMiCDCaloHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEMiCDCaloHitgR);
      instance.SetDestructor(&destruct_vectorlEMiCDCaloHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<MiCDCaloHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<MiCDCaloHit>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMiCDCaloHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<MiCDCaloHit>*)0x0)->GetClass();
      vectorlEMiCDCaloHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMiCDCaloHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMiCDCaloHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MiCDCaloHit> : new vector<MiCDCaloHit>;
   }
   static void *newArray_vectorlEMiCDCaloHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MiCDCaloHit>[nElements] : new vector<MiCDCaloHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMiCDCaloHitgR(void *p) {
      delete ((vector<MiCDCaloHit>*)p);
   }
   static void deleteArray_vectorlEMiCDCaloHitgR(void *p) {
      delete [] ((vector<MiCDCaloHit>*)p);
   }
   static void destruct_vectorlEMiCDCaloHitgR(void *p) {
      typedef vector<MiCDCaloHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<MiCDCaloHit>

namespace {
  void TriggerDictionaryInitialization_MiCDParticledict_Impl() {
    static const char* headers[] = {
"MiCDParticle.h",
0
    };
    static const char* includePaths[] = {
"/opt/supernemo/Cellar/root6/6.18.04/include/root6",
"/home/mireq-utef/SNEMO/MiModule_v1.1.0/include/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MiCDParticledict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MiCDParticle.h")))  MiCDParticle;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MiCDParticledict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MiCDParticle.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MiCDParticle", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MiCDParticledict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MiCDParticledict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MiCDParticledict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MiCDParticledict() {
  TriggerDictionaryInitialization_MiCDParticledict_Impl();
}
