// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIlibdIMiVertexdict
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
#include "MiVertex.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_MiVertex(void *p = 0);
   static void *newArray_MiVertex(Long_t size, void *p);
   static void delete_MiVertex(void *p);
   static void deleteArray_MiVertex(void *p);
   static void destruct_MiVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MiVertex*)
   {
      ::MiVertex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MiVertex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MiVertex", ::MiVertex::Class_Version(), "MiVertex.h", 12,
                  typeid(::MiVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MiVertex::Dictionary, isa_proxy, 4,
                  sizeof(::MiVertex) );
      instance.SetNew(&new_MiVertex);
      instance.SetNewArray(&newArray_MiVertex);
      instance.SetDelete(&delete_MiVertex);
      instance.SetDeleteArray(&deleteArray_MiVertex);
      instance.SetDestructor(&destruct_MiVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MiVertex*)
   {
      return GenerateInitInstanceLocal((::MiVertex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MiVertex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MiVertex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MiVertex::Class_Name()
{
   return "MiVertex";
}

//______________________________________________________________________________
const char *MiVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiVertex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MiVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MiVertex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MiVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiVertex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MiVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MiVertex*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MiVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class MiVertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MiVertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(MiVertex::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MiVertex(void *p) {
      return  p ? new(p) ::MiVertex : new ::MiVertex;
   }
   static void *newArray_MiVertex(Long_t nElements, void *p) {
      return p ? new(p) ::MiVertex[nElements] : new ::MiVertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_MiVertex(void *p) {
      delete ((::MiVertex*)p);
   }
   static void deleteArray_MiVertex(void *p) {
      delete [] ((::MiVertex*)p);
   }
   static void destruct_MiVertex(void *p) {
      typedef ::MiVertex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MiVertex

namespace {
  void TriggerDictionaryInitialization_MiVertexdict_Impl() {
    static const char* headers[] = {
"MiVertex.h",
0
    };
    static const char* includePaths[] = {
"/opt/supernemo/Cellar/root6/6.18.04/include/root6",
"/home/mireq-utef/SNEMO/MiModule_v1.1.0/include/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MiVertexdict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MiVertex.h")))  MiVertex;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MiVertexdict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MiVertex.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MiVertex", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MiVertexdict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MiVertexdict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MiVertexdict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MiVertexdict() {
  TriggerDictionaryInitialization_MiVertexdict_Impl();
}
