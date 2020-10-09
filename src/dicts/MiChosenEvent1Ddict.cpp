// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIlibdIMiChosenEvent1Ddict
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
#include "MiChosenEvent1D.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *MiChosenEvent1D_Dictionary();
   static void MiChosenEvent1D_TClassManip(TClass*);
   static void *new_MiChosenEvent1D(void *p = 0);
   static void *newArray_MiChosenEvent1D(Long_t size, void *p);
   static void delete_MiChosenEvent1D(void *p);
   static void deleteArray_MiChosenEvent1D(void *p);
   static void destruct_MiChosenEvent1D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MiChosenEvent1D*)
   {
      ::MiChosenEvent1D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MiChosenEvent1D));
      static ::ROOT::TGenericClassInfo 
         instance("MiChosenEvent1D", "MiChosenEvent1D.h", 6,
                  typeid(::MiChosenEvent1D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MiChosenEvent1D_Dictionary, isa_proxy, 4,
                  sizeof(::MiChosenEvent1D) );
      instance.SetNew(&new_MiChosenEvent1D);
      instance.SetNewArray(&newArray_MiChosenEvent1D);
      instance.SetDelete(&delete_MiChosenEvent1D);
      instance.SetDeleteArray(&deleteArray_MiChosenEvent1D);
      instance.SetDestructor(&destruct_MiChosenEvent1D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MiChosenEvent1D*)
   {
      return GenerateInitInstanceLocal((::MiChosenEvent1D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MiChosenEvent1D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MiChosenEvent1D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MiChosenEvent1D*)0x0)->GetClass();
      MiChosenEvent1D_TClassManip(theClass);
   return theClass;
   }

   static void MiChosenEvent1D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_MiChosenEvent1D(void *p) {
      return  p ? new(p) ::MiChosenEvent1D : new ::MiChosenEvent1D;
   }
   static void *newArray_MiChosenEvent1D(Long_t nElements, void *p) {
      return p ? new(p) ::MiChosenEvent1D[nElements] : new ::MiChosenEvent1D[nElements];
   }
   // Wrapper around operator delete
   static void delete_MiChosenEvent1D(void *p) {
      delete ((::MiChosenEvent1D*)p);
   }
   static void deleteArray_MiChosenEvent1D(void *p) {
      delete [] ((::MiChosenEvent1D*)p);
   }
   static void destruct_MiChosenEvent1D(void *p) {
      typedef ::MiChosenEvent1D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MiChosenEvent1D

namespace {
  void TriggerDictionaryInitialization_MiChosenEvent1Ddict_Impl() {
    static const char* headers[] = {
"MiChosenEvent1D.h",
0
    };
    static const char* includePaths[] = {
"/opt/supernemo/Cellar/root6/6.18.04/include/root6",
"/home/mireq-utef/SNEMO/MiModule_v1.1.0/include/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MiChosenEvent1Ddict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MiChosenEvent1D.h")))  MiChosenEvent1D;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MiChosenEvent1Ddict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MiChosenEvent1D.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MiChosenEvent1D", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MiChosenEvent1Ddict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MiChosenEvent1Ddict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MiChosenEvent1Ddict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MiChosenEvent1Ddict() {
  TriggerDictionaryInitialization_MiChosenEvent1Ddict_Impl();
}
