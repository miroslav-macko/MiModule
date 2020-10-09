// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIlibdIMiBin1Ddict
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
#include "MiBin1D.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *MiBin1D_Dictionary();
   static void MiBin1D_TClassManip(TClass*);
   static void *new_MiBin1D(void *p = 0);
   static void *newArray_MiBin1D(Long_t size, void *p);
   static void delete_MiBin1D(void *p);
   static void deleteArray_MiBin1D(void *p);
   static void destruct_MiBin1D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MiBin1D*)
   {
      ::MiBin1D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MiBin1D));
      static ::ROOT::TGenericClassInfo 
         instance("MiBin1D", "MiBin1D.h", 8,
                  typeid(::MiBin1D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MiBin1D_Dictionary, isa_proxy, 4,
                  sizeof(::MiBin1D) );
      instance.SetNew(&new_MiBin1D);
      instance.SetNewArray(&newArray_MiBin1D);
      instance.SetDelete(&delete_MiBin1D);
      instance.SetDeleteArray(&deleteArray_MiBin1D);
      instance.SetDestructor(&destruct_MiBin1D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MiBin1D*)
   {
      return GenerateInitInstanceLocal((::MiBin1D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MiBin1D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MiBin1D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MiBin1D*)0x0)->GetClass();
      MiBin1D_TClassManip(theClass);
   return theClass;
   }

   static void MiBin1D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_MiBin1D(void *p) {
      return  p ? new(p) ::MiBin1D : new ::MiBin1D;
   }
   static void *newArray_MiBin1D(Long_t nElements, void *p) {
      return p ? new(p) ::MiBin1D[nElements] : new ::MiBin1D[nElements];
   }
   // Wrapper around operator delete
   static void delete_MiBin1D(void *p) {
      delete ((::MiBin1D*)p);
   }
   static void deleteArray_MiBin1D(void *p) {
      delete [] ((::MiBin1D*)p);
   }
   static void destruct_MiBin1D(void *p) {
      typedef ::MiBin1D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MiBin1D

namespace ROOT {
   static TClass *vectorlEMiChosenEvent1DgR_Dictionary();
   static void vectorlEMiChosenEvent1DgR_TClassManip(TClass*);
   static void *new_vectorlEMiChosenEvent1DgR(void *p = 0);
   static void *newArray_vectorlEMiChosenEvent1DgR(Long_t size, void *p);
   static void delete_vectorlEMiChosenEvent1DgR(void *p);
   static void deleteArray_vectorlEMiChosenEvent1DgR(void *p);
   static void destruct_vectorlEMiChosenEvent1DgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<MiChosenEvent1D>*)
   {
      vector<MiChosenEvent1D> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<MiChosenEvent1D>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<MiChosenEvent1D>", -2, "vector", 216,
                  typeid(vector<MiChosenEvent1D>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMiChosenEvent1DgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<MiChosenEvent1D>) );
      instance.SetNew(&new_vectorlEMiChosenEvent1DgR);
      instance.SetNewArray(&newArray_vectorlEMiChosenEvent1DgR);
      instance.SetDelete(&delete_vectorlEMiChosenEvent1DgR);
      instance.SetDeleteArray(&deleteArray_vectorlEMiChosenEvent1DgR);
      instance.SetDestructor(&destruct_vectorlEMiChosenEvent1DgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<MiChosenEvent1D> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<MiChosenEvent1D>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMiChosenEvent1DgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<MiChosenEvent1D>*)0x0)->GetClass();
      vectorlEMiChosenEvent1DgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMiChosenEvent1DgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMiChosenEvent1DgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MiChosenEvent1D> : new vector<MiChosenEvent1D>;
   }
   static void *newArray_vectorlEMiChosenEvent1DgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MiChosenEvent1D>[nElements] : new vector<MiChosenEvent1D>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMiChosenEvent1DgR(void *p) {
      delete ((vector<MiChosenEvent1D>*)p);
   }
   static void deleteArray_vectorlEMiChosenEvent1DgR(void *p) {
      delete [] ((vector<MiChosenEvent1D>*)p);
   }
   static void destruct_vectorlEMiChosenEvent1DgR(void *p) {
      typedef vector<MiChosenEvent1D> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<MiChosenEvent1D>

namespace {
  void TriggerDictionaryInitialization_MiBin1Ddict_Impl() {
    static const char* headers[] = {
"MiBin1D.h",
0
    };
    static const char* includePaths[] = {
"/opt/supernemo/Cellar/root6/6.18.04/include/root6",
"/home/mireq-utef/SNEMO/MiModule_v1.1.0/include/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MiBin1Ddict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MiBin1D.h")))  MiBin1D;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MiBin1Ddict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MiBin1D.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MiBin1D", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MiBin1Ddict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MiBin1Ddict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MiBin1Ddict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MiBin1Ddict() {
  TriggerDictionaryInitialization_MiBin1Ddict_Impl();
}
