// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VAxiLite4CDMASpreading__Syms_H_
#define _VAxiLite4CDMASpreading__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VAxiLite4CDMASpreading.h"

// SYMS CLASS
class VAxiLite4CDMASpreading__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    VAxiLite4CDMASpreading*        TOPp;
    
    // COVERAGE
    
    // SCOPE NAMES
    
    // CREATORS
    VAxiLite4CDMASpreading__Syms(VAxiLite4CDMASpreading* topp, const char* namep);
    ~VAxiLite4CDMASpreading__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
