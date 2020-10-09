// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIlibdIMiVector3Ddict
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
#include "MiVector3D.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_MiVector3D(void *p = 0);
   static void *newArray_MiVector3D(Long_t size, void *p);
   static void delete_MiVector3D(void *p);
   static void deleteArray_MiVector3D(void *p);
   static void destruct_MiVector3D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MiVector3D*)
   {
      ::MiVector3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MiVector3D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MiVector3D", ::MiVector3D::Class_Version(), "MiVector3D.h", 12,
                  typeid(::MiVector3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MiVector3D::Dictionary, isa_proxy, 4,
                  sizeof(::MiVector3D) );
      instance.SetNew(&new_MiVector3D);
      instance.SetNewArray(&newArray_MiVector3D);
      instance.SetDelete(&delete_MiVector3D);
      instance.SetDeleteArray(&deleteArray_MiVector3D);
      instance.SetDestructor(&destruct_MiVector3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MiVector3D*)
   {
      return GenerateInitInstanceLocal((::MiVector3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MiVector3D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MiVector3D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MiVector3D::Class_Name()
{
   return "MiVector3D";
}

//______________________________________________________________________________
const char *MiVector3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiVector3D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MiVector3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiVector3D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MiVector3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiVector3D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MiVector3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiVector3D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MiVector3D::Streamer(TBuffer &R__b)
{
   // Stream an object of class MiVector3D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MiVector3D::Class(),this);
   } else {
      R__b.WriteClassBuffer(MiVector3D::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MiVector3D(void *p) {
      return  p ? new(p) ::MiVector3D : new ::MiVector3D;
   }
   static void *newArray_MiVector3D(Long_t nElements, void *p) {
      return p ? new(p) ::MiVector3D[nElements] : new ::MiVector3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_MiVector3D(void *p) {
      delete ((::MiVector3D*)p);
   }
   static void deleteArray_MiVector3D(void *p) {
      delete [] ((::MiVector3D*)p);
   }
   static void destruct_MiVector3D(void *p) {
      typedef ::MiVector3D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MiVector3D

namespace {
  void TriggerDictionaryInitialization_MiVector3Ddict_Impl() {
    static const char* headers[] = {
"MiVector3D.h",
0
    };
    static const char* includePaths[] = {
"/opt/supernemo/Cellar/root6/6.18.04/include/root6",
"/home/mireq-utef/SNEMO/MiModule_v1.1.0/include/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MiVector3Ddict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MiVector3D.h")))  MiVector3D;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MiVector3Ddict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MiVector3D.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MiVector3D", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MiVector3Ddict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MiVector3Ddict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MiVector3Ddict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MiVector3Ddict() {
  TriggerDictionaryInitialization_MiVector3Ddict_Impl();
}
