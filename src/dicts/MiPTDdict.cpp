// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIlibdIMiPTDdict
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
#include "MiPTD.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_MiPTD(void *p = 0);
   static void *newArray_MiPTD(Long_t size, void *p);
   static void delete_MiPTD(void *p);
   static void deleteArray_MiPTD(void *p);
   static void destruct_MiPTD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MiPTD*)
   {
      ::MiPTD *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MiPTD >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MiPTD", ::MiPTD::Class_Version(), "MiPTD.h", 16,
                  typeid(::MiPTD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MiPTD::Dictionary, isa_proxy, 4,
                  sizeof(::MiPTD) );
      instance.SetNew(&new_MiPTD);
      instance.SetNewArray(&newArray_MiPTD);
      instance.SetDelete(&delete_MiPTD);
      instance.SetDeleteArray(&deleteArray_MiPTD);
      instance.SetDestructor(&destruct_MiPTD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MiPTD*)
   {
      return GenerateInitInstanceLocal((::MiPTD*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MiPTD*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MiPTD::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MiPTD::Class_Name()
{
   return "MiPTD";
}

//______________________________________________________________________________
const char *MiPTD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiPTD*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MiPTD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiPTD*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MiPTD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiPTD*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MiPTD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiPTD*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MiPTD::Streamer(TBuffer &R__b)
{
   // Stream an object of class MiPTD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MiPTD::Class(),this);
   } else {
      R__b.WriteClassBuffer(MiPTD::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MiPTD(void *p) {
      return  p ? new(p) ::MiPTD : new ::MiPTD;
   }
   static void *newArray_MiPTD(Long_t nElements, void *p) {
      return p ? new(p) ::MiPTD[nElements] : new ::MiPTD[nElements];
   }
   // Wrapper around operator delete
   static void delete_MiPTD(void *p) {
      delete ((::MiPTD*)p);
   }
   static void deleteArray_MiPTD(void *p) {
      delete [] ((::MiPTD*)p);
   }
   static void destruct_MiPTD(void *p) {
      typedef ::MiPTD current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MiPTD

namespace ROOT {
   static TClass *vectorlEMiCDParticlegR_Dictionary();
   static void vectorlEMiCDParticlegR_TClassManip(TClass*);
   static void *new_vectorlEMiCDParticlegR(void *p = 0);
   static void *newArray_vectorlEMiCDParticlegR(Long_t size, void *p);
   static void delete_vectorlEMiCDParticlegR(void *p);
   static void deleteArray_vectorlEMiCDParticlegR(void *p);
   static void destruct_vectorlEMiCDParticlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<MiCDParticle>*)
   {
      vector<MiCDParticle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<MiCDParticle>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<MiCDParticle>", -2, "vector", 216,
                  typeid(vector<MiCDParticle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMiCDParticlegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<MiCDParticle>) );
      instance.SetNew(&new_vectorlEMiCDParticlegR);
      instance.SetNewArray(&newArray_vectorlEMiCDParticlegR);
      instance.SetDelete(&delete_vectorlEMiCDParticlegR);
      instance.SetDeleteArray(&deleteArray_vectorlEMiCDParticlegR);
      instance.SetDestructor(&destruct_vectorlEMiCDParticlegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<MiCDParticle> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<MiCDParticle>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMiCDParticlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<MiCDParticle>*)0x0)->GetClass();
      vectorlEMiCDParticlegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMiCDParticlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMiCDParticlegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MiCDParticle> : new vector<MiCDParticle>;
   }
   static void *newArray_vectorlEMiCDParticlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MiCDParticle>[nElements] : new vector<MiCDParticle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMiCDParticlegR(void *p) {
      delete ((vector<MiCDParticle>*)p);
   }
   static void deleteArray_vectorlEMiCDParticlegR(void *p) {
      delete [] ((vector<MiCDParticle>*)p);
   }
   static void destruct_vectorlEMiCDParticlegR(void *p) {
      typedef vector<MiCDParticle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<MiCDParticle>

namespace {
  void TriggerDictionaryInitialization_MiPTDdict_Impl() {
    static const char* headers[] = {
"MiPTD.h",
0
    };
    static const char* includePaths[] = {
"/opt/supernemo/Cellar/root6/6.18.04/include/root6",
"/home/mireq-utef/SNEMO/MiModule_v1.1.0/include/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MiPTDdict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MiPTD.h")))  MiPTD;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MiPTDdict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MiPTD.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MiPTD", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MiPTDdict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MiPTDdict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MiPTDdict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MiPTDdict() {
  TriggerDictionaryInitialization_MiPTDdict_Impl();
}
