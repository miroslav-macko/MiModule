// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIlibdIMiChosenEvent2Ddict
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
#include "MiChosenEvent2D.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *MiChosenEvent2D_Dictionary();
   static void MiChosenEvent2D_TClassManip(TClass*);
   static void *new_MiChosenEvent2D(void *p = 0);
   static void *newArray_MiChosenEvent2D(Long_t size, void *p);
   static void delete_MiChosenEvent2D(void *p);
   static void deleteArray_MiChosenEvent2D(void *p);
   static void destruct_MiChosenEvent2D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MiChosenEvent2D*)
   {
      ::MiChosenEvent2D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MiChosenEvent2D));
      static ::ROOT::TGenericClassInfo 
         instance("MiChosenEvent2D", "MiChosenEvent2D.h", 6,
                  typeid(::MiChosenEvent2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MiChosenEvent2D_Dictionary, isa_proxy, 4,
                  sizeof(::MiChosenEvent2D) );
      instance.SetNew(&new_MiChosenEvent2D);
      instance.SetNewArray(&newArray_MiChosenEvent2D);
      instance.SetDelete(&delete_MiChosenEvent2D);
      instance.SetDeleteArray(&deleteArray_MiChosenEvent2D);
      instance.SetDestructor(&destruct_MiChosenEvent2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MiChosenEvent2D*)
   {
      return GenerateInitInstanceLocal((::MiChosenEvent2D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MiChosenEvent2D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MiChosenEvent2D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MiChosenEvent2D*)0x0)->GetClass();
      MiChosenEvent2D_TClassManip(theClass);
   return theClass;
   }

   static void MiChosenEvent2D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_MiChosenEvent2D(void *p) {
      return  p ? new(p) ::MiChosenEvent2D : new ::MiChosenEvent2D;
   }
   static void *newArray_MiChosenEvent2D(Long_t nElements, void *p) {
      return p ? new(p) ::MiChosenEvent2D[nElements] : new ::MiChosenEvent2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_MiChosenEvent2D(void *p) {
      delete ((::MiChosenEvent2D*)p);
   }
   static void deleteArray_MiChosenEvent2D(void *p) {
      delete [] ((::MiChosenEvent2D*)p);
   }
   static void destruct_MiChosenEvent2D(void *p) {
      typedef ::MiChosenEvent2D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MiChosenEvent2D

namespace {
  void TriggerDictionaryInitialization_MiChosenEvent2Ddict_Impl() {
    static const char* headers[] = {
"MiChosenEvent2D.h",
0
    };
    static const char* includePaths[] = {
"/opt/supernemo/Cellar/root6/6.18.04/include/root6",
"/home/mireq-utef/SNEMO/MiModule_v1.1.0/include/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MiChosenEvent2Ddict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MiChosenEvent2D.h")))  MiChosenEvent2D;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MiChosenEvent2Ddict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MiChosenEvent2D.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MiChosenEvent2D", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MiChosenEvent2Ddict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MiChosenEvent2Ddict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MiChosenEvent2Ddict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MiChosenEvent2Ddict() {
  TriggerDictionaryInitialization_MiChosenEvent2Ddict_Impl();
}
