// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSTREAMPKGGEN_H_
#define _VSTREAMPKGGEN_H_  // guard

#include "verilated.h"

//==========

class VStreamPkgGen__Syms;
class VStreamPkgGen_VerilatedVcd;


//----------

VL_MODULE(VStreamPkgGen) {
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
    VL_OUT8(pkg_data_payload_last,0,0);
    VL_OUT8(pkg_data_payload_fragment,7,0);
    VL_IN16(slices_limit,11,0);
    VL_IN(raw_data_payload_data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*3:0*/ StreamPkgGen__DOT__strb_buf;
    CData/*0:0*/ StreamPkgGen__DOT__raw_data_fire;
    CData/*2:0*/ StreamPkgGen__DOT__split_core__DOT__cnt;
    CData/*0:0*/ StreamPkgGen__DOT__split_core__DOT__raw_data_fire;
    CData/*0:0*/ StreamPkgGen__DOT__split_core__DOT__split_data_fire;
    SData/*11:0*/ StreamPkgGen__DOT___zz_pkg_slices_cnt_1;
    SData/*11:0*/ StreamPkgGen__DOT__pkg_slices_cnt;
    IData/*31:0*/ StreamPkgGen__DOT__split_core__DOT__data_buf;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VStreamPkgGen__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VStreamPkgGen);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VStreamPkgGen(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VStreamPkgGen();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VStreamPkgGen__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VStreamPkgGen__Syms* symsp, bool first);
  private:
    static QData _change_request(VStreamPkgGen__Syms* __restrict vlSymsp);
    static QData _change_request_1(VStreamPkgGen__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(VStreamPkgGen__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VStreamPkgGen__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VStreamPkgGen__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VStreamPkgGen__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VStreamPkgGen__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VStreamPkgGen__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VStreamPkgGen__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
