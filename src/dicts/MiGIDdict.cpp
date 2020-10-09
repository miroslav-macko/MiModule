// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIlibdIMiGIDdict
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
#include "MiGID.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_MiGID(void *p = 0);
   static void *newArray_MiGID(Long_t size, void *p);
   static void delete_MiGID(void *p);
   static void deleteArray_MiGID(void *p);
   static void destruct_MiGID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MiGID*)
   {
      ::MiGID *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MiGID >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MiGID", ::MiGID::Class_Version(), "MiGID.h", 13,
                  typeid(::MiGID), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MiGID::Dictionary, isa_proxy, 4,
                  sizeof(::MiGID) );
      instance.SetNew(&new_MiGID);
      instance.SetNewArray(&newArray_MiGID);
      instance.SetDelete(&delete_MiGID);
      instance.SetDeleteArray(&deleteArray_MiGID);
      instance.SetDestructor(&destruct_MiGID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MiGID*)
   {
      return GenerateInitInstanceLocal((::MiGID*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MiGID*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MiGID::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MiGID::Class_Name()
{
   return "MiGID";
}

//______________________________________________________________________________
const char *MiGID::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiGID*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MiGID::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiGID*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MiGID::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiGID*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MiGID::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiGID*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MiGID::Streamer(TBuffer &R__b)
{
   // Stream an object of class MiGID.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MiGID::Class(),this);
   } else {
      R__b.WriteClassBuffer(MiGID::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MiGID(void *p) {
      return  p ? new(p) ::MiGID : new ::MiGID;
   }
   static void *newArray_MiGID(Long_t nElements, void *p) {
      return p ? new(p) ::MiGID[nElements] : new ::MiGID[nElements];
   }
   // Wrapper around operator delete
   static void delete_MiGID(void *p) {
      delete ((::MiGID*)p);
   }
   static void deleteArray_MiGID(void *p) {
      delete [] ((::MiGID*)p);
   }
   static void destruct_MiGID(void *p) {
      typedef ::MiGID current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MiGID

namespace {
  void TriggerDictionaryInitialization_MiGIDdict_Impl() {
    static const char* headers[] = {
"MiGID.h",
0
    };
    static const char* includePaths[] = {
"/opt/supernemo/Cellar/root6/6.18.04/include/root6",
"/home/mireq-utef/SNEMO/MiModule_v1.1.0/include/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MiGIDdict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MiGID.h")))  MiGID;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MiGIDdict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MiGID.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MiGID", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MiGIDdict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MiGIDdict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MiGIDdict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MiGIDdict() {
  TriggerDictionaryInitialization_MiGIDdict_Impl();
}
