// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIlibdIMiCDdict
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
#include "MiCD.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_MiCD(void *p = 0);
   static void *newArray_MiCD(Long_t size, void *p);
   static void delete_MiCD(void *p);
   static void deleteArray_MiCD(void *p);
   static void destruct_MiCD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MiCD*)
   {
      ::MiCD *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MiCD >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MiCD", ::MiCD::Class_Version(), "MiCD.h", 15,
                  typeid(::MiCD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MiCD::Dictionary, isa_proxy, 4,
                  sizeof(::MiCD) );
      instance.SetNew(&new_MiCD);
      instance.SetNewArray(&newArray_MiCD);
      instance.SetDelete(&delete_MiCD);
      instance.SetDeleteArray(&deleteArray_MiCD);
      instance.SetDestructor(&destruct_MiCD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MiCD*)
   {
      return GenerateInitInstanceLocal((::MiCD*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MiCD*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MiCD::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MiCD::Class_Name()
{
   return "MiCD";
}

//______________________________________________________________________________
const char *MiCD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiCD*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MiCD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiCD*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MiCD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiCD*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MiCD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiCD*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MiCD::Streamer(TBuffer &R__b)
{
   // Stream an object of class MiCD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MiCD::Class(),this);
   } else {
      R__b.WriteClassBuffer(MiCD::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MiCD(void *p) {
      return  p ? new(p) ::MiCD : new ::MiCD;
   }
   static void *newArray_MiCD(Long_t nElements, void *p) {
      return p ? new(p) ::MiCD[nElements] : new ::MiCD[nElements];
   }
   // Wrapper around operator delete
   static void delete_MiCD(void *p) {
      delete ((::MiCD*)p);
   }
   static void deleteArray_MiCD(void *p) {
      delete [] ((::MiCD*)p);
   }
   static void destruct_MiCD(void *p) {
      typedef ::MiCD current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MiCD

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
  void TriggerDictionaryInitialization_MiCDdict_Impl() {
    static const char* headers[] = {
"MiCD.h",
0
    };
    static const char* includePaths[] = {
"/opt/supernemo/Cellar/root6/6.18.04/include/root6",
"/home/mireq-utef/SNEMO/MiModule_v1.1.0/include/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MiCDdict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MiCD.h")))  MiCD;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MiCDdict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MiCD.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MiCD", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MiCDdict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MiCDdict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MiCDdict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MiCDdict() {
  TriggerDictionaryInitialization_MiCDdict_Impl();
}
