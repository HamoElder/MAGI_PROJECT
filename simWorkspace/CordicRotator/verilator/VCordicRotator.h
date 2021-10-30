// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCORDICROTATOR_H_
#define _VCORDICROTATOR_H_  // guard

#include "verilated_heavy.h"

//==========

class VCordicRotator__Syms;
class VCordicRotator_VerilatedVcd;


//----------

VL_MODULE(VCordicRotator) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(iter_limit,4,0);
    VL_IN8(rot_mode,0,0);
    VL_IN8(x_u,1,0);
    VL_IN8(w_en,0,0);
    VL_IN8(w_addr,7,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_ready,0,0);
    VL_OUT8(result_valid,0,0);
    VL_IN8(result_ready,0,0);
    VL_IN(w_data,31,0);
    VL_IN(raw_data_payload_x,31,0);
    VL_IN(raw_data_payload_y,31,0);
    VL_IN(raw_data_payload_z,31,0);
    VL_OUT(result_payload_x,31,0);
    VL_OUT(result_payload_y,31,0);
    VL_OUT(result_payload_z,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*4:0*/ CordicRotator__DOT___zz_result_payload_x;
    CData/*4:0*/ CordicRotator__DOT___zz_result_payload_x_regNext;
    CData/*0:0*/ CordicRotator__DOT___zz_result_valid;
    CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_9;
    CData/*0:0*/ CordicRotator__DOT___zz_raw_data_ready;
    CData/*0:0*/ CordicRotator__DOT___zz_2;
    CData/*1:0*/ CordicRotator__DOT___zz_3;
    CData/*1:0*/ CordicRotator__DOT___zz_4;
    CData/*0:0*/ CordicRotator__DOT__raw_data_fire;
    CData/*0:0*/ CordicRotator__DOT__result_fire;
    IData/*31:0*/ CordicRotator__DOT___zz___05Fzz_1_port1;
    IData/*31:0*/ CordicRotator__DOT___zz___05Fzz_result_payload_x_1;
    IData/*31:0*/ CordicRotator__DOT___zz___05Fzz_result_payload_x_1_1;
    IData/*31:0*/ CordicRotator__DOT___zz___05Fzz_result_payload_x_2;
    IData/*31:0*/ CordicRotator__DOT___zz___05Fzz_result_payload_x_2_1;
    IData/*31:0*/ CordicRotator__DOT___zz___05Fzz_result_payload_x_3;
    IData/*31:0*/ CordicRotator__DOT___zz___05Fzz_result_payload_x_3_1;
    IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_1;
    IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_2;
    IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_3;
    IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_4;
    IData/*31:0*/ CordicRotator__DOT___zz_result_payload_y;
    IData/*31:0*/ CordicRotator__DOT___zz_result_payload_z;
    IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_5;
    IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_6;
    IData/*31:0*/ CordicRotator__DOT___zz_1[16];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*5:0*/ __Vtableidx1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    static CData/*1:0*/ __Vtable1_CordicRotator__DOT___zz_4[64];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCordicRotator__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCordicRotator);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VCordicRotator(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCordicRotator();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VCordicRotator__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCordicRotator__Syms* symsp, bool first);
  private:
    static QData _change_request(VCordicRotator__Syms* __restrict vlSymsp);
    static QData _change_request_1(VCordicRotator__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__5(VCordicRotator__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VCordicRotator__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VCordicRotator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VCordicRotator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__3(VCordicRotator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VCordicRotator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VCordicRotator__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(VCordicRotator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
