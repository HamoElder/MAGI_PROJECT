// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VAxiLite4IQMixer__Syms.h"
#include "VAxiLite4IQMixer.h"



// FUNCTIONS
VAxiLite4IQMixer__Syms::VAxiLite4IQMixer__Syms(VAxiLite4IQMixer* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
