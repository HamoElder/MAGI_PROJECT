// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VBlockDMACore__Syms_H_
#define _VBlockDMACore__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VBlockDMACore.h"

// SYMS CLASS
class VBlockDMACore__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    VBlockDMACore*                 TOPp;
    
    // COVERAGE
    
    // SCOPE NAMES
    
    // CREATORS
    VBlockDMACore__Syms(VBlockDMACore* topp, const char* namep);
    ~VBlockDMACore__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
