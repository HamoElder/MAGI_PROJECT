// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAXILITE4TIMER_H_
#define _VAXILITE4TIMER_H_  // guard

#include "verilated.h"

//==========

class VAxiLite4Timer__Syms;
class VAxiLite4Timer_VerilatedVcd;


//----------

VL_MODULE(VAxiLite4Timer) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(axil4Ctrl_awvalid,0,0);
    VL_OUT8(axil4Ctrl_awready,0,0);
    VL_IN8(axil4Ctrl_awaddr,7,0);
    VL_IN8(axil4Ctrl_awprot,2,0);
    VL_IN8(axil4Ctrl_wvalid,0,0);
    VL_OUT8(axil4Ctrl_wready,0,0);
    VL_IN8(axil4Ctrl_wstrb,3,0);
    VL_OUT8(axil4Ctrl_bvalid,0,0);
    VL_IN8(axil4Ctrl_bready,0,0);
    VL_OUT8(axil4Ctrl_bresp,1,0);
    VL_IN8(axil4Ctrl_arvalid,0,0);
    VL_OUT8(axil4Ctrl_arready,0,0);
    VL_IN8(axil4Ctrl_araddr,7,0);
    VL_IN8(axil4Ctrl_arprot,2,0);
    VL_OUT8(axil4Ctrl_rvalid,0,0);
    VL_IN8(axil4Ctrl_rready,0,0);
    VL_OUT8(axil4Ctrl_rresp,1,0);
    VL_OUT8(timer_interrupt,0,0);
    VL_OUT8(oc,0,0);
    VL_OUT8(oc_n,0,0);
    VL_IN(axil4Ctrl_wdata,31,0);
    VL_OUT(axil4Ctrl_rdata,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ AxiLite4Timer__DOT__writeJoinEvent_valid;
    CData/*0:0*/ AxiLite4Timer__DOT__writeJoinEvent_fire;
    CData/*0:0*/ AxiLite4Timer__DOT___zz_writeJoinEvent_translated_ready;
    CData/*0:0*/ AxiLite4Timer__DOT___zz_axil4Ctrl_bvalid_2;
    CData/*1:0*/ AxiLite4Timer__DOT___zz_axil4Ctrl_bresp;
    CData/*0:0*/ AxiLite4Timer__DOT__axil4Ctrl_ar_rValid;
    CData/*7:0*/ AxiLite4Timer__DOT__axil4Ctrl_ar_rData_addr;
    CData/*2:0*/ AxiLite4Timer__DOT__axil4Ctrl_ar_rData_prot;
    CData/*0:0*/ AxiLite4Timer__DOT__timer_module_enable_driver;
    CData/*0:0*/ AxiLite4Timer__DOT__timer_module_interrupt_en_driver;
    CData/*0:0*/ AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver;
    CData/*3:0*/ AxiLite4Timer__DOT___zz_divider_A_limit;
    CData/*0:0*/ AxiLite4Timer__DOT___zz_interrupt_clc;
    CData/*0:0*/ AxiLite4Timer__DOT__timer_module_oc_en_driver;
    CData/*0:0*/ AxiLite4Timer__DOT__timer_module__DOT__clock_divider_A_full;
    CData/*0:0*/ AxiLite4Timer__DOT__timer_module__DOT__clock_divider_B_full;
    CData/*0:0*/ AxiLite4Timer__DOT__timer_module__DOT__outputCompare_1_oc;
    CData/*0:0*/ AxiLite4Timer__DOT__timer_module__DOT__limit;
    CData/*3:0*/ AxiLite4Timer__DOT__timer_module__DOT__clock_divider_A__DOT__divider_counter;
    SData/*15:0*/ AxiLite4Timer__DOT___zz_period;
    SData/*15:0*/ AxiLite4Timer__DOT___zz_reload_val;
    SData/*15:0*/ AxiLite4Timer__DOT___zz_divider_B_limit;
    SData/*15:0*/ AxiLite4Timer__DOT___zz_oc_compare_val;
    SData/*15:0*/ AxiLite4Timer__DOT__timer_module__DOT__timer_counter;
    SData/*15:0*/ AxiLite4Timer__DOT__timer_module__DOT__clock_divider_B__DOT__divider_counter;
    IData/*31:0*/ AxiLite4Timer__DOT__readRsp_data;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAxiLite4Timer__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAxiLite4Timer);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAxiLite4Timer(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAxiLite4Timer();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAxiLite4Timer__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAxiLite4Timer__Syms* symsp, bool first);
  private:
    static QData _change_request(VAxiLite4Timer__Syms* __restrict vlSymsp);
    static QData _change_request_1(VAxiLite4Timer__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__6(VAxiLite4Timer__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VAxiLite4Timer__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VAxiLite4Timer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAxiLite4Timer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VAxiLite4Timer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VAxiLite4Timer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VAxiLite4Timer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VAxiLite4Timer__Syms* __restrict vlSymsp);
    static void _settle__TOP__5(VAxiLite4Timer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
