// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAXILITE4GPIOS_H_
#define _VAXILITE4GPIOS_H_  // guard

#include "verilated.h"

//==========

class VAxiLite4Gpios__Syms;
class VAxiLite4Gpios_VerilatedVcd;


//----------

VL_MODULE(VAxiLite4Gpios) {
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
    VL_OUT8(interrupt_0,0,0);
    VL_OUT8(interrupt_1,0,0);
    VL_INOUT16(gpio_0,15,0);
    VL_INOUT16(gpio_1,15,0);
    VL_IN(axil4Ctrl_wdata,31,0);
    VL_OUT(axil4Ctrl_rdata,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_1;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_1_1;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_1_2;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_1_3;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_1_4;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_1_5;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_1_6;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_1_7;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_1_8;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_1_9;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_1_10;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_1_11;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_1_12;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_1_13;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_1_14;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_1_15;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_0;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_0_1;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_0_2;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_0_3;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_0_4;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_0_5;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_0_6;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_0_7;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_0_8;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_0_9;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_0_10;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_0_11;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_0_12;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_0_13;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_0_14;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_gpio_0_15;
        CData/*0:0*/ AxiLite4Gpios__DOT__writeJoinEvent_valid;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready;
        CData/*0:0*/ AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2;
        CData/*1:0*/ AxiLite4Gpios__DOT___zz_axil4Ctrl_bresp;
        CData/*0:0*/ AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid;
        CData/*7:0*/ AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr;
        CData/*2:0*/ AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_prot;
        CData/*0:0*/ AxiLite4Gpios__DOT__writeOccur;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_2_gpios_read;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_3_gpios_read;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_2_gpios_write;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_2_gpios_read_1;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_2_interrupt;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_3_gpios_write;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_3_gpios_read_1;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_2_ir_high_driver;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_2_ir_low_driver;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_2_ir_rise_driver;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_2_ir_fall_driver;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_3_ir_high_driver;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_3_ir_low_driver;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_3_ir_rise_driver;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_3_ir_fall_driver;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_2__DOT__last;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_0;
    };
    struct {
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_3__DOT__last;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_3__DOT___zz_1;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_0;
        SData/*15:0*/ AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1;
        IData/*31:0*/ AxiLite4Gpios__DOT__readRsp_data;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    SData/*15:0*/ gpio_0__out2;
    SData/*15:0*/ gpio_1__out3;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_0__out__out0;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_0__out__out1;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_0__out__out2;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_0__out__out3;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_0__out__out4;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_0__out__out5;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_0__out__out6;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_0__out__out7;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_0__out__out8;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_0__out__out9;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_0__out__out10;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_0__out__out11;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_0__out__out12;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_0__out__out13;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_0__out__out14;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_0__out__out15;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_1__out__out16;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_1__out__out17;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_1__out__out18;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_1__out__out19;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_1__out__out20;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_1__out__out21;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_1__out__out22;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_1__out__out23;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_1__out__out24;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_1__out__out25;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_1__out__out26;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_1__out__out27;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_1__out__out28;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_1__out__out29;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_1__out__out30;
    SData/*15:0*/ AxiLite4Gpios__DOT__gpio_1__out__out31;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAxiLite4Gpios__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAxiLite4Gpios);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAxiLite4Gpios(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAxiLite4Gpios();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAxiLite4Gpios__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAxiLite4Gpios__Syms* symsp, bool first);
  private:
    static QData _change_request(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static QData _change_request_1(VAxiLite4Gpios__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__16(VAxiLite4Gpios__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VAxiLite4Gpios__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VAxiLite4Gpios__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAxiLite4Gpios__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VAxiLite4Gpios__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void _sequent__TOP__15(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VAxiLite4Gpios__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__3(VAxiLite4Gpios__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__4(VAxiLite4Gpios__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__5(VAxiLite4Gpios__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__6(VAxiLite4Gpios__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__7(VAxiLite4Gpios__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
