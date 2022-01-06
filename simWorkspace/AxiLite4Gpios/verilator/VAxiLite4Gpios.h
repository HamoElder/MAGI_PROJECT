// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAxiLite4Gpios_H_
#define _VAxiLite4Gpios_H_

#include "verilated.h"
class VAxiLite4Gpios__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VAxiLite4Gpios) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
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
    //char	__VpadToAlign21[1];
    VL_INOUT16(gpio_0,15,0);
    VL_INOUT16(gpio_1,15,0);
    //char	__VpadToAlign26[2];
    VL_IN(axil4Ctrl_wdata,31,0);
    VL_OUT(axil4Ctrl_rdata,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_1,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_1_1,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_1_2,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_1_3,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_1_4,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_1_5,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_1_6,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_1_7,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_1_8,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_1_9,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_1_10,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_1_11,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_1_12,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_1_13,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_1_14,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_1_15,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_0,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_0_1,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_0_2,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_0_3,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_0_4,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_0_5,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_0_6,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_0_7,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_0_8,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_0_9,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_0_10,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_0_11,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_0_12,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_0_13,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_0_14,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_gpio_0_15,0,0);
    VL_SIG8(AxiLite4Gpios__DOT__writeJoinEvent_valid,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2,0,0);
    VL_SIG8(AxiLite4Gpios__DOT___zz_axil4Ctrl_bresp,1,0);
    VL_SIG8(AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid,0,0);
    VL_SIG8(AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr,7,0);
    VL_SIG8(AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_prot,2,0);
    VL_SIG8(AxiLite4Gpios__DOT__writeOccur,0,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_2_gpios_read,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_3_gpios_read,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_2_gpios_write,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_2_gpios_read_1,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_2_interrupt,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_3_gpios_write,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_3_gpios_read_1,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_2_ir_high_driver,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_2_ir_low_driver,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_2_ir_rise_driver,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_2_ir_fall_driver,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_3_ir_high_driver,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_3_ir_low_driver,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_3_ir_rise_driver,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_3_ir_fall_driver,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_2__DOT__last,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_0,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_3__DOT__last,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_3__DOT___zz_1,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_0,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1,15,0);
    //char	__VpadToAlign138[2];
    VL_SIG(AxiLite4Gpios__DOT__readRsp_data,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_0__out__out0,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_0__out__out1,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_0__out__out2,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_0__out__out3,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_0__out__out4,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_0__out__out5,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_0__out__out6,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_0__out__out7,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_0__out__out8,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_0__out__out9,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_0__out__out10,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_0__out__out11,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_0__out__out12,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_0__out__out13,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_0__out__out14,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_0__out__out15,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_1__out__out16,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_1__out__out17,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_1__out__out18,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_1__out__out19,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_1__out__out20,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_1__out__out21,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_1__out__out22,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_1__out__out23,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_1__out__out24,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_1__out__out25,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_1__out__out26,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_1__out__out27,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_1__out__out28,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_1__out__out29,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_1__out__out30,15,0);
    VL_SIG16(AxiLite4Gpios__DOT__gpio_1__out__out31,15,0);
    //char	__VpadToAlign214[2];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAxiLite4Gpios__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VAxiLite4Gpios& operator= (const VAxiLite4Gpios&);	///< Copying not allowed
    VAxiLite4Gpios(const VAxiLite4Gpios&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VAxiLite4Gpios(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAxiLite4Gpios();
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
    static void _eval_initial_loop(VAxiLite4Gpios__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAxiLite4Gpios__Syms* symsp, bool first);
  private:
    static QData	_change_request(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VAxiLite4Gpios__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__10(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void	_combo__TOP__16(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void	_combo__TOP__18(VAxiLite4Gpios__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VAxiLite4Gpios__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void	_eval_initial(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void	_eval_settle(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__11(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__12(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__13(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__17(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void	_settle__TOP__14(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void	_settle__TOP__15(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void	_settle__TOP__2(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void	_settle__TOP__8(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(VAxiLite4Gpios__Syms* __restrict vlSymsp);
    static void	traceChgThis(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__10(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__6(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__7(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__8(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__9(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
