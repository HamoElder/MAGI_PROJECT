// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VAXILITE4IQMIXER__SYMS_H_
#define _VAXILITE4IQMIXER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VAxiLite4IQMixer.h"

// SYMS CLASS
class VAxiLite4IQMixer__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VAxiLite4IQMixer*              TOPp;
    
    // CREATORS
    VAxiLite4IQMixer__Syms(VAxiLite4IQMixer* topp, const char* namep);
    ~VAxiLite4IQMixer__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
