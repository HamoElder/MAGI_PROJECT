// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VAXILITE4SGDMA__SYMS_H_
#define _VAXILITE4SGDMA__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VAxiLite4SGDMA.h"

// SYMS CLASS
class VAxiLite4SGDMA__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VAxiLite4SGDMA*                TOPp;
    
    // CREATORS
    VAxiLite4SGDMA__Syms(VAxiLite4SGDMA* topp, const char* namep);
    ~VAxiLite4SGDMA__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
