// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VBITONICSORTMDC_H_
#define _VBITONICSORTMDC_H_  // guard

#include "verilated.h"

//==========

class VBitonicSortMDC__Syms;
class VBitonicSortMDC_VerilatedVcd;


//----------

VL_MODULE(VBitonicSortMDC) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(ascending_order,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_ready,0,0);
    VL_OUT8(sorted_data_valid,0,0);
    VL_IN16(raw_data_payload_data,15,0);
    VL_OUT16(sorted_data_payload_low_data,15,0);
    VL_OUT16(sorted_data_payload_high_data,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*4:0*/ BitonicSortMDC__DOT___zz_cnt;
    CData/*4:0*/ BitonicSortMDC__DOT__cnt;
    CData/*0:0*/ BitonicSortMDC__DOT__when_BitonicSortMDC_l27;
    CData/*0:0*/ BitonicSortMDC__DOT__cmpUnit_4__DOT__cmp_less_result;
    CData/*0:0*/ BitonicSortMDC__DOT__cmpUnit_4__DOT__cmp_sel;
    CData/*0:0*/ BitonicSortMDC__DOT__cmpUnit_5__DOT__cmp_less_result;
    CData/*0:0*/ BitonicSortMDC__DOT__cmpUnit_5__DOT__cmp_sel;
    CData/*0:0*/ BitonicSortMDC__DOT__cmpUnit_6__DOT__cmp_less_result;
    CData/*0:0*/ BitonicSortMDC__DOT__cmpUnit_6__DOT__cmp_sel;
    CData/*0:0*/ BitonicSortMDC__DOT__cmpUnit_7__DOT__cmp_less_result;
    CData/*0:0*/ BitonicSortMDC__DOT__cmpUnit_7__DOT__cmp_sel;
    SData/*15:0*/ BitonicSortMDC__DOT__cmpUnit_4_out1_data;
    SData/*15:0*/ BitonicSortMDC__DOT__cmpSwitch_3_out2_data;
    SData/*15:0*/ BitonicSortMDC__DOT__cmpUnit_5_out1_data;
    SData/*15:0*/ BitonicSortMDC__DOT__cmpSwitch_4_out2_data;
    SData/*15:0*/ BitonicSortMDC__DOT__cmpUnit_6_out1_data;
    SData/*15:0*/ BitonicSortMDC__DOT__cmpSwitch_5_out2_data;
    SData/*15:0*/ BitonicSortMDC__DOT__cmpUnit_7_out1_regNext_data;
    SData/*15:0*/ BitonicSortMDC__DOT__cmpUnit_7_out2_regNext_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_0_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_1_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_2_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_3_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_4_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_5_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_6_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_7_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_0_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_1_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_2_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_3_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_0_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_1_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_2_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_3_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_10__DOT__shift_reg_0_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_10__DOT__shift_reg_1_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_11__DOT__shift_reg_0_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_11__DOT__shift_reg_1_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_12__DOT__shift_reg_0_data;
    SData/*15:0*/ BitonicSortMDC__DOT__shiftRegister_13__DOT__shift_reg_0_data;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VBitonicSortMDC__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VBitonicSortMDC);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VBitonicSortMDC(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VBitonicSortMDC();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VBitonicSortMDC__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VBitonicSortMDC__Syms* symsp, bool first);
  private:
    static QData _change_request(VBitonicSortMDC__Syms* __restrict vlSymsp);
    static QData _change_request_1(VBitonicSortMDC__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__5(VBitonicSortMDC__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VBitonicSortMDC__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VBitonicSortMDC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VBitonicSortMDC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VBitonicSortMDC__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VBitonicSortMDC__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VBitonicSortMDC__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(VBitonicSortMDC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VBitonicSortMDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VBitonicSortMDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VBitonicSortMDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VBitonicSortMDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VBitonicSortMDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VBitonicSortMDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VBitonicSortMDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VBitonicSortMDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VBitonicSortMDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VBitonicSortMDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VBitonicSortMDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
