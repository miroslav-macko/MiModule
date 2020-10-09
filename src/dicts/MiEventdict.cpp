// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIlibdIMiEventdict
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
#include "MiEvent.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_MiEvent(void *p = 0);
   static void *newArray_MiEvent(Long_t size, void *p);
   static void delete_MiEvent(void *p);
   static void deleteArray_MiEvent(void *p);
   static void destruct_MiEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MiEvent*)
   {
      ::MiEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MiEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MiEvent", ::MiEvent::Class_Version(), "MiEvent.h", 17,
                  typeid(::MiEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MiEvent::Dictionary, isa_proxy, 4,
                  sizeof(::MiEvent) );
      instance.SetNew(&new_MiEvent);
      instance.SetNewArray(&newArray_MiEvent);
      instance.SetDelete(&delete_MiEvent);
      instance.SetDeleteArray(&deleteArray_MiEvent);
      instance.SetDestructor(&destruct_MiEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MiEvent*)
   {
      return GenerateInitInstanceLocal((::MiEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MiEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MiEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MiEvent::Class_Name()
{
   return "MiEvent";
}

//______________________________________________________________________________
const char *MiEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MiEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MiEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MiEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MiEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class MiEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MiEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(MiEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MiEvent(void *p) {
      return  p ? new(p) ::MiEvent : new ::MiEvent;
   }
   static void *newArray_MiEvent(Long_t nElements, void *p) {
      return p ? new(p) ::MiEvent[nElements] : new ::MiEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_MiEvent(void *p) {
      delete ((::MiEvent*)p);
   }
   static void deleteArray_MiEvent(void *p) {
      delete [] ((::MiEvent*)p);
   }
   static void destruct_MiEvent(void *p) {
      typedef ::MiEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MiEvent

namespace {
  void TriggerDictionaryInitialization_MiEventdict_Impl() {
    static const char* headers[] = {
"MiEvent.h",
0
    };
    static const char* includePaths[] = {
"/opt/supernemo/Cellar/root6/6.18.04/include/root6",
"/home/mireq-utef/SNEMO/MiModule_v1.1.0/include/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MiEventdict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MiEvent.h")))  MiEvent;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MiEventdict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MiEvent.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MiEvent", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MiEventdict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MiEventdict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MiEventdict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MiEventdict() {
  TriggerDictionaryInitialization_MiEventdict_Impl();
}
