// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSCRAMBLER_H_
#define _VSCRAMBLER_H_  // guard

#include "verilated.h"

//==========

class VScrambler__Syms;
class VScrambler_VerilatedVcd;


//----------

VL_MODULE(VScrambler) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(init_state_valid,0,0);
    VL_IN8(init_state_payload,6,0);
    VL_OUT8(scram_data_valid,0,0);
    VL_IN8(scram_data_ready,0,0);
    VL_OUT8(scram_data_payload,7,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*7:0*/ Scrambler__DOT___zz_r_scr_0;
    CData/*7:0*/ Scrambler__DOT___zz_r_scr_1;
    CData/*7:0*/ Scrambler__DOT___zz_r_scr_2;
    CData/*7:0*/ Scrambler__DOT___zz_r_scr_3;
    CData/*7:0*/ Scrambler__DOT___zz_r_scr_4;
    CData/*7:0*/ Scrambler__DOT___zz_r_scr_5;
    CData/*7:0*/ Scrambler__DOT___zz_r_scr_6;
    CData/*6:0*/ Scrambler__DOT__scram_state;
    CData/*0:0*/ Scrambler__DOT__feed_back_0;
    CData/*0:0*/ Scrambler__DOT__feed_back_1;
    CData/*0:0*/ Scrambler__DOT__feed_back_2;
    CData/*0:0*/ Scrambler__DOT__feed_back_3;
    CData/*0:0*/ Scrambler__DOT__feed_back_4;
    CData/*0:0*/ Scrambler__DOT__feed_back_5;
    CData/*0:0*/ Scrambler__DOT__feed_back_6;
    CData/*0:0*/ Scrambler__DOT__feed_back_7;
    CData/*0:0*/ Scrambler__DOT__scram_valid;
    CData/*7:0*/ Scrambler__DOT__scram_data;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VScrambler__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VScrambler);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VScrambler(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VScrambler();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VScrambler__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VScrambler__Syms* symsp, bool first);
  private:
    static QData _change_request(VScrambler__Syms* __restrict vlSymsp);
    static QData _change_request_1(VScrambler__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VScrambler__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VScrambler__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VScrambler__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VScrambler__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VScrambler__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VScrambler__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VScrambler__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VScrambler__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VScrambler__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VScrambler__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VScrambler__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VScrambler__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VScrambler__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VScrambler__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VScrambler__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
