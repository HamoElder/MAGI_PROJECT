// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAXILITE4DDS_H_
#define _VAXILITE4DDS_H_  // guard

#include "verilated_heavy.h"

//==========

class VAxiLite4DDS__Syms;
class VAxiLite4DDS_VerilatedVcd;


//----------

VL_MODULE(VAxiLite4DDS) {
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
    VL_OUT8(data_0_valid,0,0);
    VL_OUT8(data_1_valid,0,0);
    VL_OUT8(phase_0_valid,0,0);
    VL_OUT8(phase_1_valid,0,0);
    VL_IN8(rf_resetn,0,0);
    VL_OUT16(phase_0_payload,9,0);
    VL_OUT16(phase_1_payload,9,0);
    VL_IN(axil4Ctrl_wdata,31,0);
    VL_OUT(axil4Ctrl_rdata,31,0);
    VL_OUT(data_0_payload,23,0);
    VL_OUT(data_1_payload,23,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ AxiLite4DDS__DOT__writeJoinEvent_valid;
        CData/*0:0*/ AxiLite4DDS__DOT__writeJoinEvent_fire;
        CData/*0:0*/ AxiLite4DDS__DOT___zz_writeJoinEvent_translated_ready;
        CData/*0:0*/ AxiLite4DDS__DOT___zz_axil4Ctrl_bvalid_2;
        CData/*1:0*/ AxiLite4DDS__DOT___zz_axil4Ctrl_bresp;
        CData/*0:0*/ AxiLite4DDS__DOT__axil4Ctrl_ar_rValid;
        CData/*7:0*/ AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr;
        CData/*2:0*/ AxiLite4DDS__DOT__axil4Ctrl_ar_rData_prot;
        CData/*0:0*/ AxiLite4DDS__DOT__global_en_driver;
        CData/*0:0*/ AxiLite4DDS__DOT___zz_readRsp_data;
        CData/*0:0*/ AxiLite4DDS__DOT___zz_dataIn;
        CData/*0:0*/ AxiLite4DDS__DOT___zz_readRsp_data_4;
        CData/*0:0*/ AxiLite4DDS__DOT___zz_dataIn_3;
        CData/*0:0*/ AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkI_reg;
        CData/*0:0*/ AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkO_buf0;
        CData/*0:0*/ AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkO_buf1;
        CData/*0:0*/ AxiLite4DDS__DOT__dDS_2__DOT__module_en;
        CData/*0:0*/ AxiLite4DDS__DOT__dDS_2__DOT__when_DDS_l53;
        CData/*0:0*/ AxiLite4DDS__DOT__dDS_2__DOT__valid_o_buf;
        CData/*0:0*/ AxiLite4DDS__DOT__clkCrossing_16__DOT__area_clkI_reg;
        CData/*0:0*/ AxiLite4DDS__DOT__clkCrossing_16__DOT__area_clkO_buf0;
        CData/*0:0*/ AxiLite4DDS__DOT__clkCrossing_16__DOT__area_clkO_buf1;
        CData/*0:0*/ AxiLite4DDS__DOT__clkCrossing_21__DOT__area_clkI_reg;
        CData/*0:0*/ AxiLite4DDS__DOT__clkCrossing_21__DOT__area_clkO_buf0;
        CData/*0:0*/ AxiLite4DDS__DOT__clkCrossing_21__DOT__area_clkO_buf1;
        CData/*0:0*/ AxiLite4DDS__DOT__dDS_3__DOT__module_en;
        CData/*0:0*/ AxiLite4DDS__DOT__dDS_3__DOT__when_DDS_l53;
        CData/*0:0*/ AxiLite4DDS__DOT__dDS_3__DOT__valid_o_buf;
        CData/*0:0*/ AxiLite4DDS__DOT__clkCrossing_23__DOT__area_clkI_reg;
        CData/*0:0*/ AxiLite4DDS__DOT__clkCrossing_23__DOT__area_clkO_buf0;
        CData/*0:0*/ AxiLite4DDS__DOT__clkCrossing_23__DOT__area_clkO_buf1;
        CData/*0:0*/ AxiLite4DDS__DOT__clkCrossing_28__DOT__area_clkI_reg;
        CData/*0:0*/ AxiLite4DDS__DOT__clkCrossing_28__DOT__area_clkO_buf0;
        CData/*0:0*/ AxiLite4DDS__DOT__clkCrossing_28__DOT__area_clkO_buf1;
        SData/*9:0*/ AxiLite4DDS__DOT___zz_dataIn_1;
        SData/*9:0*/ AxiLite4DDS__DOT___zz_readRsp_data_1;
        SData/*9:0*/ AxiLite4DDS__DOT___zz_readRsp_data_2;
        SData/*9:0*/ AxiLite4DDS__DOT___zz_readRsp_data_3;
        SData/*9:0*/ AxiLite4DDS__DOT___zz_dataIn_4;
        SData/*9:0*/ AxiLite4DDS__DOT___zz_readRsp_data_5;
        SData/*9:0*/ AxiLite4DDS__DOT___zz_readRsp_data_6;
        SData/*9:0*/ AxiLite4DDS__DOT___zz_readRsp_data_7;
        SData/*9:0*/ AxiLite4DDS__DOT__dDS_2__DOT___zz_phase_cursor;
        SData/*9:0*/ AxiLite4DDS__DOT__dDS_2__DOT__phase_cursor;
        SData/*9:0*/ AxiLite4DDS__DOT__dDS_2__DOT___zz_phase_payload;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_17__DOT__area_clkI_reg;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_17__DOT__area_clkO_buf0;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_17__DOT__area_clkO_buf1;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_19__DOT__area_clkI_reg;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_19__DOT__area_clkO_buf0;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_19__DOT__area_clkO_buf1;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_20__DOT__area_clkI_reg;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_20__DOT__area_clkO_buf0;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_20__DOT__area_clkO_buf1;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkI_reg;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkO_buf0;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkO_buf1;
        SData/*9:0*/ AxiLite4DDS__DOT__dDS_3__DOT___zz_phase_cursor;
        SData/*9:0*/ AxiLite4DDS__DOT__dDS_3__DOT__phase_cursor;
        SData/*9:0*/ AxiLite4DDS__DOT__dDS_3__DOT___zz_phase_payload;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_24__DOT__area_clkI_reg;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_24__DOT__area_clkO_buf0;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_24__DOT__area_clkO_buf1;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_26__DOT__area_clkI_reg;
    };
    struct {
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_26__DOT__area_clkO_buf0;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_26__DOT__area_clkO_buf1;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_27__DOT__area_clkI_reg;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_27__DOT__area_clkO_buf0;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_27__DOT__area_clkO_buf1;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkI_reg;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkO_buf0;
        SData/*9:0*/ AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkO_buf1;
        IData/*31:0*/ AxiLite4DDS__DOT__readRsp_data;
        IData/*23:0*/ AxiLite4DDS__DOT___zz_dataIn_2;
        IData/*23:0*/ AxiLite4DDS__DOT___zz_dataIn_5;
        IData/*23:0*/ AxiLite4DDS__DOT__dDS_2__DOT___zz_mem_port1;
        IData/*23:0*/ AxiLite4DDS__DOT__clkCrossing_18__DOT__area_clkI_reg;
        IData/*23:0*/ AxiLite4DDS__DOT__clkCrossing_18__DOT__area_clkO_buf0;
        IData/*23:0*/ AxiLite4DDS__DOT__clkCrossing_18__DOT__area_clkO_buf1;
        IData/*23:0*/ AxiLite4DDS__DOT__dDS_3__DOT___zz_mem_port1;
        IData/*23:0*/ AxiLite4DDS__DOT__clkCrossing_25__DOT__area_clkI_reg;
        IData/*23:0*/ AxiLite4DDS__DOT__clkCrossing_25__DOT__area_clkO_buf0;
        IData/*23:0*/ AxiLite4DDS__DOT__clkCrossing_25__DOT__area_clkO_buf1;
        IData/*23:0*/ AxiLite4DDS__DOT__dDS_2__DOT__mem[1024];
        IData/*23:0*/ AxiLite4DDS__DOT__dDS_3__DOT__mem[1024];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rf_clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAxiLite4DDS__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAxiLite4DDS);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAxiLite4DDS(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAxiLite4DDS();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAxiLite4DDS__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAxiLite4DDS__Syms* symsp, bool first);
  private:
    static QData _change_request(VAxiLite4DDS__Syms* __restrict vlSymsp);
    static QData _change_request_1(VAxiLite4DDS__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__10(VAxiLite4DDS__Syms* __restrict vlSymsp);
    static void _combo__TOP__14(VAxiLite4DDS__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VAxiLite4DDS__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VAxiLite4DDS__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAxiLite4DDS__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VAxiLite4DDS__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__11(VAxiLite4DDS__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VAxiLite4DDS__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VAxiLite4DDS__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VAxiLite4DDS__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VAxiLite4DDS__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VAxiLite4DDS__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VAxiLite4DDS__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VAxiLite4DDS__Syms* __restrict vlSymsp);
    static void _settle__TOP__8(VAxiLite4DDS__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
