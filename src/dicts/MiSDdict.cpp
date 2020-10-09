// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIlibdIMiSDdict
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
#include "MiSD.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_MiSD(void *p = 0);
   static void *newArray_MiSD(Long_t size, void *p);
   static void delete_MiSD(void *p);
   static void deleteArray_MiSD(void *p);
   static void destruct_MiSD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MiSD*)
   {
      ::MiSD *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MiSD >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MiSD", ::MiSD::Class_Version(), "MiSD.h", 18,
                  typeid(::MiSD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MiSD::Dictionary, isa_proxy, 4,
                  sizeof(::MiSD) );
      instance.SetNew(&new_MiSD);
      instance.SetNewArray(&newArray_MiSD);
      instance.SetDelete(&delete_MiSD);
      instance.SetDeleteArray(&deleteArray_MiSD);
      instance.SetDestructor(&destruct_MiSD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MiSD*)
   {
      return GenerateInitInstanceLocal((::MiSD*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MiSD*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MiSD::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MiSD::Class_Name()
{
   return "MiSD";
}

//______________________________________________________________________________
const char *MiSD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiSD*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MiSD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiSD*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MiSD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiSD*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MiSD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiSD*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MiSD::Streamer(TBuffer &R__b)
{
   // Stream an object of class MiSD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MiSD::Class(),this);
   } else {
      R__b.WriteClassBuffer(MiSD::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MiSD(void *p) {
      return  p ? new(p) ::MiSD : new ::MiSD;
   }
   static void *newArray_MiSD(Long_t nElements, void *p) {
      return p ? new(p) ::MiSD[nElements] : new ::MiSD[nElements];
   }
   // Wrapper around operator delete
   static void delete_MiSD(void *p) {
      delete ((::MiSD*)p);
   }
   static void deleteArray_MiSD(void *p) {
      delete [] ((::MiSD*)p);
   }
   static void destruct_MiSD(void *p) {
      typedef ::MiSD current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MiSD

namespace ROOT {
   static TClass *vectorlEMiSDVisuHitgR_Dictionary();
   static void vectorlEMiSDVisuHitgR_TClassManip(TClass*);
   static void *new_vectorlEMiSDVisuHitgR(void *p = 0);
   static void *newArray_vectorlEMiSDVisuHitgR(Long_t size, void *p);
   static void delete_vectorlEMiSDVisuHitgR(void *p);
   static void deleteArray_vectorlEMiSDVisuHitgR(void *p);
   static void destruct_vectorlEMiSDVisuHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<MiSDVisuHit>*)
   {
      vector<MiSDVisuHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<MiSDVisuHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<MiSDVisuHit>", -2, "vector", 216,
                  typeid(vector<MiSDVisuHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMiSDVisuHitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<MiSDVisuHit>) );
      instance.SetNew(&new_vectorlEMiSDVisuHitgR);
      instance.SetNewArray(&newArray_vectorlEMiSDVisuHitgR);
      instance.SetDelete(&delete_vectorlEMiSDVisuHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEMiSDVisuHitgR);
      instance.SetDestructor(&destruct_vectorlEMiSDVisuHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<MiSDVisuHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<MiSDVisuHit>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMiSDVisuHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<MiSDVisuHit>*)0x0)->GetClass();
      vectorlEMiSDVisuHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMiSDVisuHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMiSDVisuHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MiSDVisuHit> : new vector<MiSDVisuHit>;
   }
   static void *newArray_vectorlEMiSDVisuHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MiSDVisuHit>[nElements] : new vector<MiSDVisuHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMiSDVisuHitgR(void *p) {
      delete ((vector<MiSDVisuHit>*)p);
   }
   static void deleteArray_vectorlEMiSDVisuHitgR(void *p) {
      delete [] ((vector<MiSDVisuHit>*)p);
   }
   static void destruct_vectorlEMiSDVisuHitgR(void *p) {
      typedef vector<MiSDVisuHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<MiSDVisuHit>

namespace ROOT {
   static TClass *vectorlEMiSDParticlegR_Dictionary();
   static void vectorlEMiSDParticlegR_TClassManip(TClass*);
   static void *new_vectorlEMiSDParticlegR(void *p = 0);
   static void *newArray_vectorlEMiSDParticlegR(Long_t size, void *p);
   static void delete_vectorlEMiSDParticlegR(void *p);
   static void deleteArray_vectorlEMiSDParticlegR(void *p);
   static void destruct_vectorlEMiSDParticlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<MiSDParticle>*)
   {
      vector<MiSDParticle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<MiSDParticle>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<MiSDParticle>", -2, "vector", 216,
                  typeid(vector<MiSDParticle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMiSDParticlegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<MiSDParticle>) );
      instance.SetNew(&new_vectorlEMiSDParticlegR);
      instance.SetNewArray(&newArray_vectorlEMiSDParticlegR);
      instance.SetDelete(&delete_vectorlEMiSDParticlegR);
      instance.SetDeleteArray(&deleteArray_vectorlEMiSDParticlegR);
      instance.SetDestructor(&destruct_vectorlEMiSDParticlegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<MiSDParticle> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<MiSDParticle>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMiSDParticlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<MiSDParticle>*)0x0)->GetClass();
      vectorlEMiSDParticlegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMiSDParticlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMiSDParticlegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MiSDParticle> : new vector<MiSDParticle>;
   }
   static void *newArray_vectorlEMiSDParticlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MiSDParticle>[nElements] : new vector<MiSDParticle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMiSDParticlegR(void *p) {
      delete ((vector<MiSDParticle>*)p);
   }
   static void deleteArray_vectorlEMiSDParticlegR(void *p) {
      delete [] ((vector<MiSDParticle>*)p);
   }
   static void destruct_vectorlEMiSDParticlegR(void *p) {
      typedef vector<MiSDParticle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<MiSDParticle>

namespace ROOT {
   static TClass *vectorlEMiSDCaloHitgR_Dictionary();
   static void vectorlEMiSDCaloHitgR_TClassManip(TClass*);
   static void *new_vectorlEMiSDCaloHitgR(void *p = 0);
   static void *newArray_vectorlEMiSDCaloHitgR(Long_t size, void *p);
   static void delete_vectorlEMiSDCaloHitgR(void *p);
   static void deleteArray_vectorlEMiSDCaloHitgR(void *p);
   static void destruct_vectorlEMiSDCaloHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<MiSDCaloHit>*)
   {
      vector<MiSDCaloHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<MiSDCaloHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<MiSDCaloHit>", -2, "vector", 216,
                  typeid(vector<MiSDCaloHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMiSDCaloHitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<MiSDCaloHit>) );
      instance.SetNew(&new_vectorlEMiSDCaloHitgR);
      instance.SetNewArray(&newArray_vectorlEMiSDCaloHitgR);
      instance.SetDelete(&delete_vectorlEMiSDCaloHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEMiSDCaloHitgR);
      instance.SetDestructor(&destruct_vectorlEMiSDCaloHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<MiSDCaloHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<MiSDCaloHit>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMiSDCaloHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<MiSDCaloHit>*)0x0)->GetClass();
      vectorlEMiSDCaloHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMiSDCaloHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMiSDCaloHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MiSDCaloHit> : new vector<MiSDCaloHit>;
   }
   static void *newArray_vectorlEMiSDCaloHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MiSDCaloHit>[nElements] : new vector<MiSDCaloHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMiSDCaloHitgR(void *p) {
      delete ((vector<MiSDCaloHit>*)p);
   }
   static void deleteArray_vectorlEMiSDCaloHitgR(void *p) {
      delete [] ((vector<MiSDCaloHit>*)p);
   }
   static void destruct_vectorlEMiSDCaloHitgR(void *p) {
      typedef vector<MiSDCaloHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<MiSDCaloHit>

namespace {
  void TriggerDictionaryInitialization_MiSDdict_Impl() {
    static const char* headers[] = {
"MiSD.h",
0
    };
    static const char* includePaths[] = {
"/opt/supernemo/Cellar/root6/6.18.04/include/root6",
"/home/mireq-utef/SNEMO/MiModule_v1.1.0/include/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MiSDdict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MiSD.h")))  MiSD;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MiSDdict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MiSD.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MiSD", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MiSDdict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MiSDdict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MiSDdict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MiSDdict() {
  TriggerDictionaryInitialization_MiSDdict_Impl();
}
