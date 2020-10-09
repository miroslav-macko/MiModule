// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIlibdIMiFiltersdict
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
#include "MiFilters.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_MiFilters(void *p);
   static void deleteArray_MiFilters(void *p);
   static void destruct_MiFilters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MiFilters*)
   {
      ::MiFilters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MiFilters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MiFilters", ::MiFilters::Class_Version(), "MiFilters.h", 15,
                  typeid(::MiFilters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MiFilters::Dictionary, isa_proxy, 4,
                  sizeof(::MiFilters) );
      instance.SetDelete(&delete_MiFilters);
      instance.SetDeleteArray(&deleteArray_MiFilters);
      instance.SetDestructor(&destruct_MiFilters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MiFilters*)
   {
      return GenerateInitInstanceLocal((::MiFilters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MiFilters*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MiFilters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MiFilters::Class_Name()
{
   return "MiFilters";
}

//______________________________________________________________________________
const char *MiFilters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiFilters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MiFilters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiFilters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MiFilters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiFilters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MiFilters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiFilters*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MiFilters::Streamer(TBuffer &R__b)
{
   // Stream an object of class MiFilters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MiFilters::Class(),this);
   } else {
      R__b.WriteClassBuffer(MiFilters::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MiFilters(void *p) {
      delete ((::MiFilters*)p);
   }
   static void deleteArray_MiFilters(void *p) {
      delete [] ((::MiFilters*)p);
   }
   static void destruct_MiFilters(void *p) {
      typedef ::MiFilters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MiFilters

namespace {
  void TriggerDictionaryInitialization_MiFiltersdict_Impl() {
    static const char* headers[] = {
"MiFilters.h",
0
    };
    static const char* includePaths[] = {
"/opt/supernemo/Cellar/root6/6.18.04/include/root6",
"/home/mireq-utef/SNEMO/MiModule_v1.1.0/include/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MiFiltersdict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MiFilters.h")))  MiFilters;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MiFiltersdict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MiFilters.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MiFilters", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MiFiltersdict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MiFiltersdict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MiFiltersdict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MiFiltersdict() {
  TriggerDictionaryInitialization_MiFiltersdict_Impl();
}
