// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VBDMAs2m__Syms_H_
#define _VBDMAs2m__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VBDMAs2m.h"

// SYMS CLASS
class VBDMAs2m__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    VBDMAs2m*                      TOPp;
    
    // COVERAGE
    
    // SCOPE NAMES
    
    // CREATORS
    VBDMAs2m__Syms(VBDMAs2m* topp, const char* namep);
    ~VBDMAs2m__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
