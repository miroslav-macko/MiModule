// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIlibdIMiBin2Ddict
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
#include "MiBin2D.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *MiBin2D_Dictionary();
   static void MiBin2D_TClassManip(TClass*);
   static void *new_MiBin2D(void *p = 0);
   static void *newArray_MiBin2D(Long_t size, void *p);
   static void delete_MiBin2D(void *p);
   static void deleteArray_MiBin2D(void *p);
   static void destruct_MiBin2D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MiBin2D*)
   {
      ::MiBin2D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MiBin2D));
      static ::ROOT::TGenericClassInfo 
         instance("MiBin2D", "MiBin2D.h", 8,
                  typeid(::MiBin2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MiBin2D_Dictionary, isa_proxy, 4,
                  sizeof(::MiBin2D) );
      instance.SetNew(&new_MiBin2D);
      instance.SetNewArray(&newArray_MiBin2D);
      instance.SetDelete(&delete_MiBin2D);
      instance.SetDeleteArray(&deleteArray_MiBin2D);
      instance.SetDestructor(&destruct_MiBin2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MiBin2D*)
   {
      return GenerateInitInstanceLocal((::MiBin2D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MiBin2D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MiBin2D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MiBin2D*)0x0)->GetClass();
      MiBin2D_TClassManip(theClass);
   return theClass;
   }

   static void MiBin2D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_MiBin2D(void *p) {
      return  p ? new(p) ::MiBin2D : new ::MiBin2D;
   }
   static void *newArray_MiBin2D(Long_t nElements, void *p) {
      return p ? new(p) ::MiBin2D[nElements] : new ::MiBin2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_MiBin2D(void *p) {
      delete ((::MiBin2D*)p);
   }
   static void deleteArray_MiBin2D(void *p) {
      delete [] ((::MiBin2D*)p);
   }
   static void destruct_MiBin2D(void *p) {
      typedef ::MiBin2D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MiBin2D

namespace ROOT {
   static TClass *vectorlEMiChosenEvent2DgR_Dictionary();
   static void vectorlEMiChosenEvent2DgR_TClassManip(TClass*);
   static void *new_vectorlEMiChosenEvent2DgR(void *p = 0);
   static void *newArray_vectorlEMiChosenEvent2DgR(Long_t size, void *p);
   static void delete_vectorlEMiChosenEvent2DgR(void *p);
   static void deleteArray_vectorlEMiChosenEvent2DgR(void *p);
   static void destruct_vectorlEMiChosenEvent2DgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<MiChosenEvent2D>*)
   {
      vector<MiChosenEvent2D> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<MiChosenEvent2D>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<MiChosenEvent2D>", -2, "vector", 216,
                  typeid(vector<MiChosenEvent2D>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMiChosenEvent2DgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<MiChosenEvent2D>) );
      instance.SetNew(&new_vectorlEMiChosenEvent2DgR);
      instance.SetNewArray(&newArray_vectorlEMiChosenEvent2DgR);
      instance.SetDelete(&delete_vectorlEMiChosenEvent2DgR);
      instance.SetDeleteArray(&deleteArray_vectorlEMiChosenEvent2DgR);
      instance.SetDestructor(&destruct_vectorlEMiChosenEvent2DgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<MiChosenEvent2D> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<MiChosenEvent2D>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMiChosenEvent2DgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<MiChosenEvent2D>*)0x0)->GetClass();
      vectorlEMiChosenEvent2DgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMiChosenEvent2DgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMiChosenEvent2DgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MiChosenEvent2D> : new vector<MiChosenEvent2D>;
   }
   static void *newArray_vectorlEMiChosenEvent2DgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MiChosenEvent2D>[nElements] : new vector<MiChosenEvent2D>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMiChosenEvent2DgR(void *p) {
      delete ((vector<MiChosenEvent2D>*)p);
   }
   static void deleteArray_vectorlEMiChosenEvent2DgR(void *p) {
      delete [] ((vector<MiChosenEvent2D>*)p);
   }
   static void destruct_vectorlEMiChosenEvent2DgR(void *p) {
      typedef vector<MiChosenEvent2D> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<MiChosenEvent2D>

namespace {
  void TriggerDictionaryInitialization_MiBin2Ddict_Impl() {
    static const char* headers[] = {
"MiBin2D.h",
0
    };
    static const char* includePaths[] = {
"/opt/supernemo/Cellar/root6/6.18.04/include/root6",
"/home/mireq-utef/SNEMO/MiModule_v1.1.0/include/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MiBin2Ddict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MiBin2D.h")))  MiBin2D;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MiBin2Ddict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MiBin2D.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MiBin2D", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MiBin2Ddict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MiBin2Ddict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MiBin2Ddict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MiBin2Ddict() {
  TriggerDictionaryInitialization_MiBin2Ddict_Impl();
}
