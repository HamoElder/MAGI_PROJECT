// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCONVENCODER_H_
#define _VCONVENCODER_H_  // guard

#include "verilated.h"

//==========

class VConvEncoder__Syms;
class VConvEncoder_VerilatedVcd;


//----------

VL_MODULE(VConvEncoder) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(tail_bits_valid,0,0);
    VL_IN8(tail_bits_payload,2,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_ready,0,0);
    VL_IN8(raw_data_payload_last,0,0);
    VL_IN8(raw_data_payload_fragment,6,0);
    VL_OUT8(coded_data_valid,0,0);
    VL_OUT8(coded_data_payload_last,0,0);
    VL_OUT16(coded_data_payload_fragment,13,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*3:0*/ ConvEncoder__DOT___zz_r_enc_0;
    CData/*3:0*/ ConvEncoder__DOT___zz_r_enc_1;
    CData/*3:0*/ ConvEncoder__DOT___zz_r_enc_2;
    CData/*3:0*/ ConvEncoder__DOT___zz_r_enc_3;
    CData/*3:0*/ ConvEncoder__DOT___zz_r_enc_4;
    CData/*3:0*/ ConvEncoder__DOT___zz_r_enc_5;
    CData/*3:0*/ ConvEncoder__DOT___zz_r_enc_6;
    CData/*0:0*/ ConvEncoder__DOT__coded_data_valid_1;
    CData/*2:0*/ ConvEncoder__DOT__r_enc_buf;
    CData/*6:0*/ ConvEncoder__DOT__code_vec_0;
    CData/*6:0*/ ConvEncoder__DOT__code_vec_1;
    CData/*0:0*/ ConvEncoder__DOT__raw_data_fire;
    CData/*0:0*/ ConvEncoder__DOT__raw_data_payload_last_regNext;
    SData/*13:0*/ ConvEncoder__DOT__coded_data;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VConvEncoder__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VConvEncoder);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VConvEncoder(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VConvEncoder();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VConvEncoder__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VConvEncoder__Syms* symsp, bool first);
  private:
    static QData _change_request(VConvEncoder__Syms* __restrict vlSymsp);
    static QData _change_request_1(VConvEncoder__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VConvEncoder__Syms* __restrict vlSymsp);
    static void _combo__TOP__5(VConvEncoder__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VConvEncoder__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VConvEncoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VConvEncoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(VConvEncoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VConvEncoder__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VConvEncoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VConvEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VConvEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VConvEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VConvEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VConvEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VConvEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VConvEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VConvEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VConvEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
