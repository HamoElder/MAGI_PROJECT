// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAxiLite4CDMASpreading_H_
#define _VAxiLite4CDMASpreading_H_

#include "verilated.h"
class VAxiLite4CDMASpreading__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VAxiLite4CDMASpreading) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
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
    VL_IN8(base_iq_valid,0,0);
    VL_OUT8(base_iq_ready,0,0);
    VL_OUT8(mod_iq_valid,0,0);
    VL_IN8(rf_resetn,0,0);
    VL_IN16(base_iq_payload_cha_i,15,0);
    VL_IN16(base_iq_payload_cha_q,15,0);
    VL_OUT16(mod_iq_payload_cha_i,15,0);
    VL_OUT16(mod_iq_payload_cha_q,15,0);
    VL_IN(axil4Ctrl_wdata,31,0);
    VL_OUT(axil4Ctrl_rdata,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(AxiLite4CDMASpreading__DOT__writeJoinEvent_valid,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT___zz_writeJoinEvent_translated_ready,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT___zz_axil4Ctrl_bvalid_2,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT___zz_axil4Ctrl_bresp,1,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__axil4Ctrl_ar_rValid,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__axil4Ctrl_ar_rData_addr,7,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__axil4Ctrl_ar_rData_prot,2,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__writeOccur,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__cdma_spread_bridge_clc_driver,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT___zz_dataIn,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT___zz_dataIn_1,2,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT___zz_dataIn_2,7,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT___zz_dataIn_3,2,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port0,7,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port1,7,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port2,7,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port3,7,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port4,7,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port5,7,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port6,7,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_map_port7,7,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_cnt,2,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_1,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt,2,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_1,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_2,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_3,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_4,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_5,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_6,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_7,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__when_CDMASpreading_l52,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__when_CDMASpreading_l65,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_valid,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_valid,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_valid,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_valid,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_valid,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_valid,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_valid,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_valid,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid_1,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__clkCrossing_5__DOT__area_clkI_reg,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__clkCrossing_5__DOT__area_clkO_buf0,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__clkCrossing_5__DOT__area_clkO_buf1,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__clkCrossing_6__DOT__area_clkI_reg,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__clkCrossing_6__DOT__area_clkO_buf0,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__clkCrossing_6__DOT__area_clkO_buf1,0,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__clkCrossing_7__DOT__area_clkI_reg,2,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__clkCrossing_7__DOT__area_clkO_buf0,2,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__clkCrossing_7__DOT__area_clkO_buf1,2,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__clkCrossing_8__DOT__area_clkI_reg,7,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__clkCrossing_8__DOT__area_clkO_buf0,7,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__clkCrossing_8__DOT__area_clkO_buf1,7,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__clkCrossing_9__DOT__area_clkI_reg,2,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__clkCrossing_9__DOT__area_clkO_buf0,2,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__clkCrossing_9__DOT__area_clkO_buf1,2,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_i,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_q,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_i,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_q,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_i,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_q,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_i,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_q,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_i,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_q,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_i,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_q,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_i,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_q,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_i,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_q,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_i,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_q,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_3,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_5,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_10,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_12,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_1_4,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_1_6,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_1_11,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_i_1_13,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_3,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_5,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_10,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_12,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_1_4,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_1_6,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_1_11,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz___05Fzz_mod_iq_payload_cha_q_1_13,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i_1,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q,15,0);
    VL_SIG16(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q_1,15,0);
    VL_SIG(AxiLite4CDMASpreading__DOT__readRsp_data,31,0);
    VL_SIG8(AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map[8],7,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vdly__AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt,2,0);
    VL_SIG8(__Vclklast__TOP__rf_clk,0,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAxiLite4CDMASpreading__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VAxiLite4CDMASpreading& operator= (const VAxiLite4CDMASpreading&);	///< Copying not allowed
    VAxiLite4CDMASpreading(const VAxiLite4CDMASpreading&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VAxiLite4CDMASpreading(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAxiLite4CDMASpreading();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAxiLite4CDMASpreading__Syms* symsp, bool first);
  private:
    static QData	_change_request(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__12(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp);
    static void	_combo__TOP__9(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp);
    static void	_eval_initial(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp);
    static void	_eval_settle(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__10(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp);
    static void	_settle__TOP__11(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp);
    static void	_settle__TOP__8(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp);
    static void	traceChgThis(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__6(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__7(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
