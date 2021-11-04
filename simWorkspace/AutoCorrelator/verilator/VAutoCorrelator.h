// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAUTOCORRELATOR_H_
#define _VAUTOCORRELATOR_H_  // guard

#include "verilated.h"

//==========

class VAutoCorrelator__Syms;
class VAutoCorrelator_VerilatedVcd;


//----------

VL_MODULE(VAutoCorrelator) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(corr_result_valid,0,0);
    VL_IN16(raw_data_payload_cha_i,15,0);
    VL_IN16(raw_data_payload_cha_q,15,0);
    VL_OUT(corr_result_payload_cha_i,31,0);
    VL_OUT(corr_result_payload_cha_q,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_0_valid;
        CData/*0:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_1_valid;
        CData/*0:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_2_valid;
        CData/*0:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_3_valid;
        CData/*0:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_4_valid;
        CData/*0:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_5_valid;
        CData/*0:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_6_valid;
        CData/*0:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_7_valid;
        CData/*0:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_8_valid;
        CData/*0:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_9_valid;
        CData/*0:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_10_valid;
        CData/*0:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_11_valid;
        CData/*0:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_12_valid;
        CData/*0:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_13_valid;
        CData/*0:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_14_valid;
        CData/*0:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_valid;
        CData/*0:0*/ AutoCorrelator__DOT__corr_core__DOT__mul_data_valid;
        CData/*0:0*/ AutoCorrelator__DOT__corr_core__DOT__corr_result_valid_1;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_i;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_q;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_i;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_q;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_i;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_q;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_i;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_q;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_i;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_q;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_i;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_q;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_i;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_q;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_i;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_q;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_i;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_q;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_i;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_q;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_i;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_q;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_i;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_q;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_i;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_q;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_i;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_q;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_i;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_q;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i;
        SData/*15:0*/ AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT___zz_corr_val_i;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT___zz_corr_val_q;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__corr_val_i;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__corr_val_q;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__k1;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__mul_i;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__mul_q;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6;
    };
    struct {
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_0;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_1;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_2;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_3;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_4;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_5;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_6;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_7;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_8;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_9;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_10;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_11;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_12;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_13;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_14;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_15;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_16;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_17;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_18;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_19;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_20;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_21;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_22;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_23;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_24;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_25;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_26;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_27;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_28;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_29;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_30;
        IData/*31:0*/ AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_31;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAutoCorrelator__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAutoCorrelator);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAutoCorrelator(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAutoCorrelator();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAutoCorrelator__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAutoCorrelator__Syms* symsp, bool first);
  private:
    static QData _change_request(VAutoCorrelator__Syms* __restrict vlSymsp);
    static QData _change_request_1(VAutoCorrelator__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__8(VAutoCorrelator__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VAutoCorrelator__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VAutoCorrelator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAutoCorrelator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(VAutoCorrelator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VAutoCorrelator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VAutoCorrelator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VAutoCorrelator__Syms* __restrict vlSymsp);
    static void _settle__TOP__7(VAutoCorrelator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VAutoCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAutoCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAutoCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VAutoCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAutoCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VAutoCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VAutoCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VAutoCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
