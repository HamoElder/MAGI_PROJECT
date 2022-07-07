// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAIS_TX_H_
#define _VAIS_TX_H_  // guard

#include "verilated.h"

//==========

class VAIS_TX__Syms;
class VAIS_TX_VerilatedVcd;


//----------

VL_MODULE(VAIS_TX) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_ready,0,0);
    VL_IN8(raw_data_payload_last,0,0);
    VL_IN8(raw_data_payload_fragment,7,0);
    VL_OUT8(result_data_valid,0,0);
    VL_IN8(result_data_ready,0,0);
    VL_OUT8(result_data_payload_last,0,0);
    VL_OUT8(result_data_payload_fragment,7,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ AIS_TX__DOT__preamble_adder_raw_data_ready;
    CData/*1:0*/ AIS_TX__DOT__preamble_adder__DOT__cnt;
    CData/*1:0*/ AIS_TX__DOT__preamble_adder__DOT__preamble_status;
    CData/*0:0*/ AIS_TX__DOT__preamble_adder__DOT__when_PhyTx_l34;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAIS_TX__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAIS_TX);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAIS_TX(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAIS_TX();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAIS_TX__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAIS_TX__Syms* symsp, bool first);
  private:
    static QData _change_request(VAIS_TX__Syms* __restrict vlSymsp);
    static QData _change_request_1(VAIS_TX__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VAIS_TX__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VAIS_TX__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VAIS_TX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAIS_TX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VAIS_TX__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VAIS_TX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
