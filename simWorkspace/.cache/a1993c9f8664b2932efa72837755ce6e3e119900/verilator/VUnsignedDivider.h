// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VUNSIGNEDDIVIDER_H_
#define _VUNSIGNEDDIVIDER_H_  // guard

#include "verilated.h"

//==========

class VUnsignedDivider__Syms;
class VUnsignedDivider_VerilatedVcd;


//----------

VL_MODULE(VUnsignedDivider) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(flush,0,0);
    VL_IN8(cmd_valid,0,0);
    VL_OUT8(cmd_ready,0,0);
    VL_OUT8(rsp_valid,0,0);
    VL_IN8(rsp_ready,0,0);
    VL_OUT8(rsp_payload_error,0,0);
    VL_IN16(cmd_payload_numerator,15,0);
    VL_IN16(cmd_payload_denominator,15,0);
    VL_OUT16(rsp_payload_quotient,15,0);
    VL_OUT16(rsp_payload_remainder,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*1:0*/ UnsignedDivider__DOT__switch_UnsignedDivider_l92;
    CData/*0:0*/ UnsignedDivider__DOT___zz_cmd_ready;
    CData/*0:0*/ UnsignedDivider__DOT___zz_rsp_valid;
    CData/*0:0*/ UnsignedDivider__DOT___zz_1;
    CData/*0:0*/ UnsignedDivider__DOT___zz_2;
    CData/*3:0*/ UnsignedDivider__DOT___zz_3;
    CData/*3:0*/ UnsignedDivider__DOT___zz_4;
    CData/*0:0*/ UnsignedDivider__DOT__cmd_fire;
    SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient;
    SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_1;
    SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_2;
    IData/*16:0*/ UnsignedDivider__DOT___zz___05Fzz_rsp_payload_quotient;
    IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_3;
    IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_4;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*1:0*/ __Vdly__UnsignedDivider__DOT__switch_UnsignedDivider_l92;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VUnsignedDivider__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VUnsignedDivider);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VUnsignedDivider(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VUnsignedDivider();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VUnsignedDivider__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VUnsignedDivider__Syms* symsp, bool first);
  private:
    static QData _change_request(VUnsignedDivider__Syms* __restrict vlSymsp);
    static QData _change_request_1(VUnsignedDivider__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__5(VUnsignedDivider__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VUnsignedDivider__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VUnsignedDivider__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VUnsignedDivider__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VUnsignedDivider__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VUnsignedDivider__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VUnsignedDivider__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VUnsignedDivider__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
