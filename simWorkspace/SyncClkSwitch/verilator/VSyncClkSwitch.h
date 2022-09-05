// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSYNCCLKSWITCH_H_
#define _VSYNCCLKSWITCH_H_  // guard

#include "verilated.h"

//==========

class VSyncClkSwitch__Syms;
class VSyncClkSwitch_VerilatedVcd;


//----------

VL_MODULE(VSyncClkSwitch) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_in_0,0,0);
    VL_IN8(clk_in_1,0,0);
    VL_IN8(clk_rstn,0,0);
    VL_IN8(select_1,0,0);
    VL_OUT8(clk_out,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ SyncClkSwitch__DOT__negClkArea1_clk_sel_1;
    CData/*0:0*/ SyncClkSwitch__DOT__negClkArea0_clk_sel_0;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vdly__SyncClkSwitch__DOT__negClkArea0_clk_sel_0;
    CData/*0:0*/ __Vclklast__TOP__clk_in_1;
    CData/*0:0*/ __Vclklast__TOP__clk_rstn;
    CData/*0:0*/ __Vclklast__TOP__clk_in_0;
    CData/*0:0*/ __Vm_traceActivity[1];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VSyncClkSwitch__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSyncClkSwitch);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VSyncClkSwitch(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VSyncClkSwitch();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VSyncClkSwitch__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VSyncClkSwitch__Syms* symsp, bool first);
  private:
    static QData _change_request(VSyncClkSwitch__Syms* __restrict vlSymsp);
    static QData _change_request_1(VSyncClkSwitch__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VSyncClkSwitch__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VSyncClkSwitch__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VSyncClkSwitch__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VSyncClkSwitch__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VSyncClkSwitch__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VSyncClkSwitch__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VSyncClkSwitch__Syms* __restrict vlSymsp);
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
