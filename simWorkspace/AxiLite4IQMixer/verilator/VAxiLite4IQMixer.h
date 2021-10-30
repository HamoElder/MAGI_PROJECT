// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAXILITE4IQMIXER_H_
#define _VAXILITE4IQMIXER_H_  // guard

#include "verilated.h"

//==========

class VAxiLite4IQMixer__Syms;
class VAxiLite4IQMixer_VerilatedVcd;


//----------

VL_MODULE(VAxiLite4IQMixer) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(rf_clk,0,0);
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
    VL_IN8(base_iq_0_valid,0,0);
    VL_IN8(carries_iq_valid,0,0);
    VL_OUT8(if_iq_0_valid,0,0);
    VL_IN8(rf_resetn,0,0);
    VL_IN16(base_iq_0_payload_cha_i,15,0);
    VL_IN16(base_iq_0_payload_cha_q,15,0);
    VL_IN16(carries_iq_payload_cha_i,15,0);
    VL_IN16(carries_iq_payload_cha_q,15,0);
    VL_IN(axil4Ctrl_wdata,31,0);
    VL_OUT(axil4Ctrl_rdata,31,0);
    VL_OUT(if_iq_0_payload,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ AxiLite4IQMixer__DOT__writeJoinEvent_valid;
    CData/*0:0*/ AxiLite4IQMixer__DOT__writeJoinEvent_fire;
    CData/*0:0*/ AxiLite4IQMixer__DOT___zz_writeJoinEvent_translated_ready;
    CData/*0:0*/ AxiLite4IQMixer__DOT___zz_axil4Ctrl_bvalid_2;
    CData/*1:0*/ AxiLite4IQMixer__DOT___zz_axil4Ctrl_bresp;
    CData/*0:0*/ AxiLite4IQMixer__DOT__axil4Ctrl_ar_rValid;
    CData/*7:0*/ AxiLite4IQMixer__DOT__axil4Ctrl_ar_rData_addr;
    CData/*2:0*/ AxiLite4IQMixer__DOT__axil4Ctrl_ar_rData_prot;
    CData/*2:0*/ AxiLite4IQMixer__DOT_____05Fshift_bias_driver;
    CData/*0:0*/ AxiLite4IQMixer__DOT_____05Fshift_dir_driver;
    CData/*1:0*/ AxiLite4IQMixer__DOT___zz_readRsp_data;
    CData/*0:0*/ AxiLite4IQMixer__DOT___zz_readRsp_data_1;
    CData/*0:0*/ AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_iq_valid_1;
    CData/*0:0*/ AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__iq_en;
    CData/*2:0*/ AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkI_reg;
    CData/*2:0*/ AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkO_buf0;
    CData/*2:0*/ AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkO_buf1;
    CData/*0:0*/ AxiLite4IQMixer__DOT__clkCrossing_5__DOT__area_clkI_reg;
    CData/*0:0*/ AxiLite4IQMixer__DOT__clkCrossing_5__DOT__area_clkO_buf0;
    CData/*0:0*/ AxiLite4IQMixer__DOT__clkCrossing_5__DOT__area_clkO_buf1;
    CData/*1:0*/ AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkI_reg;
    CData/*1:0*/ AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkO_buf0;
    CData/*1:0*/ AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkO_buf1;
    CData/*0:0*/ AxiLite4IQMixer__DOT__clkCrossing_7__DOT__area_clkI_reg;
    CData/*0:0*/ AxiLite4IQMixer__DOT__clkCrossing_7__DOT__area_clkO_buf0;
    CData/*0:0*/ AxiLite4IQMixer__DOT__clkCrossing_7__DOT__area_clkO_buf1;
    SData/*15:0*/ AxiLite4IQMixer__DOT__rfClockArea_carrier_power_adjustor__DOT__shifted_data_cha_i;
    SData/*15:0*/ AxiLite4IQMixer__DOT__rfClockArea_carrier_power_adjustor__DOT__shifted_data_cha_q;
    SData/*15:0*/ AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__base_i_data;
    SData/*15:0*/ AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__base_q_data;
    SData/*15:0*/ AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__carrier_i_data;
    SData/*15:0*/ AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__carrier_q_data;
    SData/*15:0*/ AxiLite4IQMixer__DOT__powerAdjustor_2__DOT__shifted_data_cha_i;
    SData/*15:0*/ AxiLite4IQMixer__DOT__powerAdjustor_2__DOT__shifted_data_cha_q;
    IData/*31:0*/ AxiLite4IQMixer__DOT__readRsp_data;
    IData/*31:0*/ AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_i_data;
    IData/*31:0*/ AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_q_data;
    IData/*31:0*/ AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_iq_data;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rf_clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAxiLite4IQMixer__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAxiLite4IQMixer);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAxiLite4IQMixer(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAxiLite4IQMixer();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAxiLite4IQMixer__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAxiLite4IQMixer__Syms* symsp, bool first);
  private:
    static QData _change_request(VAxiLite4IQMixer__Syms* __restrict vlSymsp);
    static QData _change_request_1(VAxiLite4IQMixer__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__10(VAxiLite4IQMixer__Syms* __restrict vlSymsp);
    static void _combo__TOP__8(VAxiLite4IQMixer__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VAxiLite4IQMixer__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VAxiLite4IQMixer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAxiLite4IQMixer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VAxiLite4IQMixer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VAxiLite4IQMixer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VAxiLite4IQMixer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VAxiLite4IQMixer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VAxiLite4IQMixer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VAxiLite4IQMixer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VAxiLite4IQMixer__Syms* __restrict vlSymsp);
    static void _settle__TOP__6(VAxiLite4IQMixer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
