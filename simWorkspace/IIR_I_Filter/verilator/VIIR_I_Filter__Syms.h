// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VIIR_I_Filter__Syms_H_
#define _VIIR_I_Filter__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VIIR_I_Filter.h"

// SYMS CLASS
class VIIR_I_Filter__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    VIIR_I_Filter*                 TOPp;
    
    // COVERAGE
    
    // SCOPE NAMES
    
    // CREATORS
    VIIR_I_Filter__Syms(VIIR_I_Filter* topp, const char* namep);
    ~VIIR_I_Filter__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
