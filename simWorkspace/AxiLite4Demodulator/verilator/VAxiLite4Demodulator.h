// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAXILITE4DEMODULATOR_H_
#define _VAXILITE4DEMODULATOR_H_  // guard

#include "verilated.h"

//==========

class VAxiLite4Demodulator__Syms;
class VAxiLite4Demodulator_VerilatedVcd;


//----------

VL_MODULE(VAxiLite4Demodulator) {
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
    VL_IN8(mod_iq_valid,0,0);
    VL_OUT8(base_data_valid,0,0);
    VL_IN8(rf_resetn,0,0);
    VL_IN16(mod_iq_payload_cha_i,11,0);
    VL_IN16(mod_iq_payload_cha_q,11,0);
    VL_IN(axil4Ctrl_wdata,31,0);
    VL_OUT(axil4Ctrl_rdata,31,0);
    VL_OUT(base_data_payload,23,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ AxiLite4Demodulator__DOT__writeJoinEvent_valid;
    CData/*0:0*/ AxiLite4Demodulator__DOT__writeJoinEvent_fire;
    CData/*0:0*/ AxiLite4Demodulator__DOT___zz_writeJoinEvent_translated_ready;
    CData/*0:0*/ AxiLite4Demodulator__DOT___zz_axil4Ctrl_bvalid_2;
    CData/*1:0*/ AxiLite4Demodulator__DOT___zz_axil4Ctrl_bresp;
    CData/*0:0*/ AxiLite4Demodulator__DOT__axil4Ctrl_ar_rValid;
    CData/*7:0*/ AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_addr;
    CData/*2:0*/ AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_prot;
    CData/*1:0*/ AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_select;
    CData/*0:0*/ AxiLite4Demodulator__DOT__data_comb_bridge_enable_driver;
    CData/*4:0*/ AxiLite4Demodulator__DOT__data_comb_bridge_cnt_step_driver;
    CData/*4:0*/ AxiLite4Demodulator__DOT__data_comb_bridge_cnt_limit_driver;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_1_valid;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_2_valid;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_valid_i;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__compTable_i;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_valid;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__unit_data_i;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__unit_valid;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid_i;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid_q;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__compTable_i;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__codeTable_q;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_i;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_q;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_valid;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_valid_i;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_valid_q;
    CData/*2:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_i;
    CData/*2:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_q;
    CData/*2:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__compTable_i;
    CData/*2:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__codeTable_q;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_valid;
    CData/*1:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i;
    CData/*1:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_valid;
    CData/*4:0*/ AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_cnt;
    CData/*4:0*/ AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_valid_1;
    CData/*0:0*/ AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_valid_1;
    CData/*1:0*/ AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkI_reg;
    CData/*1:0*/ AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf0;
    CData/*1:0*/ AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1;
    CData/*0:0*/ AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkI_reg;
    CData/*0:0*/ AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkO_buf0;
    CData/*0:0*/ AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkO_buf1;
    CData/*4:0*/ AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkI_reg;
    CData/*4:0*/ AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkO_buf0;
    CData/*4:0*/ AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkO_buf1;
    CData/*4:0*/ AxiLite4Demodulator__DOT__clkCrossing_7__DOT__area_clkI_reg;
    CData/*4:0*/ AxiLite4Demodulator__DOT__clkCrossing_7__DOT__area_clkO_buf0;
    CData/*4:0*/ AxiLite4Demodulator__DOT__clkCrossing_7__DOT__area_clkO_buf1;
    SData/*11:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_data_i;
    SData/*11:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_data_i;
    SData/*11:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_data_q;
    SData/*11:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_i;
    SData/*11:0*/ AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_q;
    IData/*31:0*/ AxiLite4Demodulator__DOT__readRsp_data;
    IData/*23:0*/ AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_buffer;
    IData/*23:0*/ AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_buffer;
    QData/*54:0*/ AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_data_buffer;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rf_clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    CData/*1:0*/ __Vtablechg1[128];
    static CData/*1:0*/ __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i[128];
    static CData/*1:0*/ __Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q[128];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAxiLite4Demodulator__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAxiLite4Demodulator);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAxiLite4Demodulator(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAxiLite4Demodulator();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAxiLite4Demodulator__Syms* symsp, bool first);
  private:
    static QData _change_request(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static QData _change_request_1(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__11(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _combo__TOP__9(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VAxiLite4Demodulator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAxiLite4Demodulator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VAxiLite4Demodulator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VAxiLite4Demodulator__Syms* __restrict vlSymsp);
    static void _settle__TOP__7(VAxiLite4Demodulator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
