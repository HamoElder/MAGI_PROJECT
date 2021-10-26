// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAXILITE4CYCLICPREFIX_H_
#define _VAXILITE4CYCLICPREFIX_H_  // guard

#include "verilated.h"

//==========

class VAxiLite4CyclicPrefix__Syms;
class VAxiLite4CyclicPrefix_VerilatedVcd;


//----------

VL_MODULE(VAxiLite4CyclicPrefix) {
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
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_ready,0,0);
    VL_IN8(raw_data_payload_last,0,0);
    VL_OUT8(result_valid,0,0);
    VL_OUT8(result_payload_last,0,0);
    VL_IN8(rf_resetn,0,0);
    VL_IN16(raw_data_payload_fragment_cha_i,15,0);
    VL_IN16(raw_data_payload_fragment_cha_q,15,0);
    VL_OUT16(result_payload_fragment_cha_i,15,0);
    VL_OUT16(result_payload_fragment_cha_q,15,0);
    VL_IN(axil4Ctrl_wdata,31,0);
    VL_OUT(axil4Ctrl_rdata,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core_result_valid;
    CData/*0:0*/ AxiLite4CyclicPrefix__DOT__writeJoinEvent_valid;
    CData/*0:0*/ AxiLite4CyclicPrefix__DOT__writeJoinEvent_fire;
    CData/*0:0*/ AxiLite4CyclicPrefix__DOT___zz_writeJoinEvent_translated_ready;
    CData/*0:0*/ AxiLite4CyclicPrefix__DOT___zz_axil4Ctrl_bvalid_2;
    CData/*1:0*/ AxiLite4CyclicPrefix__DOT___zz_axil4Ctrl_bresp;
    CData/*0:0*/ AxiLite4CyclicPrefix__DOT__axil4Ctrl_ar_rValid;
    CData/*7:0*/ AxiLite4CyclicPrefix__DOT__axil4Ctrl_ar_rData_addr;
    CData/*2:0*/ AxiLite4CyclicPrefix__DOT__axil4Ctrl_ar_rData_prot;
    CData/*4:0*/ AxiLite4CyclicPrefix__DOT_____05Fcp_len_driver;
    CData/*6:0*/ AxiLite4CyclicPrefix__DOT_____05Fdata_len_driver;
    CData/*0:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo_io_pop_valid;
    CData/*6:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo_io_occupancy;
    CData/*0:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_en;
    CData/*0:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__fifo_pop_en;
    CData/*1:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_state;
    CData/*0:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_1;
    CData/*0:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_willIncrement;
    CData/*5:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_valueNext;
    CData/*5:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_value;
    CData/*0:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_willIncrement;
    CData/*5:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_valueNext;
    CData/*5:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_value;
    CData/*0:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ptrMatch;
    CData/*0:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_risingOccupancy;
    CData/*0:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushing;
    CData/*0:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popping;
    CData/*0:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_full;
    CData/*0:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_io_pop_valid;
    CData/*4:0*/ AxiLite4CyclicPrefix__DOT__clkCrossing_2__DOT__area_clkI_reg;
    CData/*4:0*/ AxiLite4CyclicPrefix__DOT__clkCrossing_2__DOT__area_clkO_buf0;
    CData/*4:0*/ AxiLite4CyclicPrefix__DOT__clkCrossing_2__DOT__area_clkO_buf1;
    CData/*6:0*/ AxiLite4CyclicPrefix__DOT__clkCrossing_3__DOT__area_clkI_reg;
    CData/*6:0*/ AxiLite4CyclicPrefix__DOT__clkCrossing_3__DOT__area_clkO_buf0;
    CData/*6:0*/ AxiLite4CyclicPrefix__DOT__clkCrossing_3__DOT__area_clkO_buf1;
    IData/*31:0*/ AxiLite4CyclicPrefix__DOT__readRsp_data;
    QData/*32:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_logic_ram_port0;
    QData/*32:0*/ AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ram[64];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    CData/*0:0*/ __Vclklast__TOP__rf_clk;
    IData/*31:0*/ __Vm_traceActivity;
    CData/*2:0*/ __Vtablechg1[128];
    static CData/*1:0*/ __Vtable1_AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_state[128];
    static CData/*0:0*/ __Vtable1_AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__fifo_pop_en[128];
    static CData/*0:0*/ __Vtable1_AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_en[128];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAxiLite4CyclicPrefix__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAxiLite4CyclicPrefix);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAxiLite4CyclicPrefix(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAxiLite4CyclicPrefix();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAxiLite4CyclicPrefix__Syms* symsp, bool first);
  private:
    static QData _change_request(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp);
    static QData _change_request_1(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__6(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp);
    static void _combo__TOP__9(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp);
    static void _settle__TOP__5(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
