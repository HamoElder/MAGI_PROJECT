// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMQAMMOD_H_
#define _VMQAMMOD_H_  // guard

#include "verilated.h"

//==========

class VmQAMMod__Syms;
class VmQAMMod_VerilatedVcd;


//----------

VL_MODULE(VmQAMMod) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(unit_data_valid,0,0);
    VL_IN8(unit_data_payload,3,0);
    VL_OUT8(mod_iq_valid,0,0);
    VL_OUT16(mod_iq_payload_cha_i,15,0);
    VL_OUT16(mod_iq_payload_cha_q,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*3:0*/ mQAMMod__DOT__unit_data;
    CData/*0:0*/ mQAMMod__DOT__unit_valid;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VmQAMMod__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VmQAMMod);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VmQAMMod(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VmQAMMod();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VmQAMMod__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VmQAMMod__Syms* symsp, bool first);
  private:
    static QData _change_request(VmQAMMod__Syms* __restrict vlSymsp);
    static QData _change_request_1(VmQAMMod__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VmQAMMod__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VmQAMMod__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VmQAMMod__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VmQAMMod__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VmQAMMod__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VmQAMMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VmQAMMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VmQAMMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VmQAMMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VmQAMMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VmQAMMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VmQAMMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
