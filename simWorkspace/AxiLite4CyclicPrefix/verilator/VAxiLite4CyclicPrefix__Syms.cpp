// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VAxiLite4CyclicPrefix__Syms.h"
#include "VAxiLite4CyclicPrefix.h"



// FUNCTIONS
VAxiLite4CyclicPrefix__Syms::VAxiLite4CyclicPrefix__Syms(VAxiLite4CyclicPrefix* topp, const char* namep)
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
