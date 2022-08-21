// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSTREAMFIFOCC__SYMS_H_
#define _VSTREAMFIFOCC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VStreamFifoCC.h"

// SYMS CLASS
class VStreamFifoCC__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VStreamFifoCC*                 TOPp;
    
    // CREATORS
    VStreamFifoCC__Syms(VStreamFifoCC* topp, const char* namep);
    ~VStreamFifoCC__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
