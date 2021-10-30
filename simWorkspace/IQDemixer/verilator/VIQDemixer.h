// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VIQDEMIXER_H_
#define _VIQDEMIXER_H_  // guard

#include "verilated.h"

//==========

class VIQDemixer__Syms;
class VIQDemixer_VerilatedVcd;


//----------

VL_MODULE(VIQDemixer) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(if_iq_0_valid,0,0);
    VL_IN8(carries_iq_valid,0,0);
    VL_OUT8(base_iq_0_valid,0,0);
    VL_IN16(if_iq_0_payload,15,0);
    VL_IN16(carries_iq_payload_cha_i,15,0);
    VL_IN16(carries_iq_payload_cha_q,15,0);
    VL_OUT16(base_iq_0_payload_cha_i,15,0);
    VL_OUT16(base_iq_0_payload_cha_q,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ IQDemixer__DOT__iQDemixerCore_1__DOT__base_iq_valid_1;
    CData/*0:0*/ IQDemixer__DOT__iQDemixerCore_1__DOT__iq_en;
    SData/*15:0*/ IQDemixer__DOT__iQDemixerCore_1__DOT__if_iq_data;
    SData/*15:0*/ IQDemixer__DOT__iQDemixerCore_1__DOT__carries_i_data;
    SData/*15:0*/ IQDemixer__DOT__iQDemixerCore_1__DOT__carries_q_data;
    SData/*15:0*/ IQDemixer__DOT__iQDemixerCore_1__DOT__base_i_data;
    SData/*15:0*/ IQDemixer__DOT__iQDemixerCore_1__DOT__base_q_data;
    SData/*15:0*/ IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_2;
    SData/*15:0*/ IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_2;
    IData/*31:0*/ IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data;
    IData/*16:0*/ IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1;
    IData/*31:0*/ IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data;
    IData/*16:0*/ IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VIQDemixer__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VIQDemixer);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VIQDemixer(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VIQDemixer();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VIQDemixer__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VIQDemixer__Syms* symsp, bool first);
  private:
    static QData _change_request(VIQDemixer__Syms* __restrict vlSymsp);
    static QData _change_request_1(VIQDemixer__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VIQDemixer__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VIQDemixer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VIQDemixer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VIQDemixer__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VIQDemixer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VIQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VIQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VIQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VIQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VIQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VIQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VIQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VIQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
