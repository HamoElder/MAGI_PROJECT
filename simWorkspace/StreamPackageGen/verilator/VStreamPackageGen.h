// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSTREAMPACKAGEGEN_H_
#define _VSTREAMPACKAGEGEN_H_  // guard

#include "verilated.h"

//==========

class VStreamPackageGen__Syms;
class VStreamPackageGen_VerilatedVcd;


//----------

VL_MODULE(VStreamPackageGen) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_ready,0,0);
    VL_IN8(raw_data_payload_strb,3,0);
    VL_OUT8(pkg_data_valid,0,0);
    VL_IN8(pkg_data_ready,0,0);
    VL_OUT8(pkg_data_payload,7,0);
    VL_IN(raw_data_payload_data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*3:0*/ StreamPackageGen__DOT__strb_buf;
    CData/*2:0*/ StreamPackageGen__DOT__split_core__DOT__cnt;
    CData/*0:0*/ StreamPackageGen__DOT__split_core__DOT__raw_data_fire;
    CData/*0:0*/ StreamPackageGen__DOT__split_core__DOT__split_data_fire;
    IData/*31:0*/ StreamPackageGen__DOT__split_core__DOT__data_buf;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VStreamPackageGen__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VStreamPackageGen);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VStreamPackageGen(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VStreamPackageGen();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VStreamPackageGen__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VStreamPackageGen__Syms* symsp, bool first);
  private:
    static QData _change_request(VStreamPackageGen__Syms* __restrict vlSymsp);
    static QData _change_request_1(VStreamPackageGen__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(VStreamPackageGen__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VStreamPackageGen__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VStreamPackageGen__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VStreamPackageGen__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VStreamPackageGen__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VStreamPackageGen__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VStreamPackageGen__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VStreamPackageGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VStreamPackageGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VStreamPackageGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VStreamPackageGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VStreamPackageGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VStreamPackageGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VStreamPackageGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VStreamPackageGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VStreamPackageGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
