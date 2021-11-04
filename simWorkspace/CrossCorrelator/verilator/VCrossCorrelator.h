// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCROSSCORRELATOR_H_
#define _VCROSSCORRELATOR_H_  // guard

#include "verilated_heavy.h"

//==========

class VCrossCorrelator__Syms;
class VCrossCorrelator_VerilatedVcd;


//----------

VL_MODULE(VCrossCorrelator) {
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
        CData/*6:0*/ CrossCorrelator__DOT___zz_cnt;
        CData/*6:0*/ CrossCorrelator__DOT__cnt;
        CData/*0:0*/ CrossCorrelator__DOT__corr_core__DOT__mul_data_valid;
        CData/*0:0*/ CrossCorrelator__DOT__corr_core__DOT__corr_result_valid_1;
        SData/*15:0*/ CrossCorrelator__DOT___zz_I_mem_port0;
        SData/*15:0*/ CrossCorrelator__DOT___zz_Q_mem_port0;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT___zz_corr_val_i;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT___zz_corr_val_q;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__corr_val_i;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__corr_val_q;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__k1;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__mul_i;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__mul_q;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_0;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_1;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_2;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_3;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_4;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_5;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_6;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_7;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_8;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_9;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_10;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_11;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_12;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_13;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_14;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_15;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_16;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_17;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_18;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_19;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_20;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_21;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_22;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_23;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_24;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_25;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_26;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_27;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_28;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_29;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_30;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_31;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_32;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_33;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_34;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_35;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_36;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_37;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_38;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_39;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_40;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_41;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_42;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_43;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_44;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_45;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_46;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_47;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_48;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_49;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_50;
    };
    struct {
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_51;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_52;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_53;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_54;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_55;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_56;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_57;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_58;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_59;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_60;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_61;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_62;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_63;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_64;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_32;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_33;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_34;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_35;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_36;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_37;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_38;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_39;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_40;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_41;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_42;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_43;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_44;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_45;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_46;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_47;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_48;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_49;
    };
    struct {
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_50;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_51;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_52;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_53;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_54;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_55;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_56;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_57;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_58;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_59;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_60;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_61;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_62;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63;
        IData/*31:0*/ CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_64;
        SData/*15:0*/ CrossCorrelator__DOT__I_mem[64];
        SData/*15:0*/ CrossCorrelator__DOT__Q_mem[64];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*6:0*/ __Vdly__CrossCorrelator__DOT__cnt;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCrossCorrelator__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCrossCorrelator);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VCrossCorrelator(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCrossCorrelator();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VCrossCorrelator__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCrossCorrelator__Syms* symsp, bool first);
  private:
    static QData _change_request(VCrossCorrelator__Syms* __restrict vlSymsp);
    static QData _change_request_1(VCrossCorrelator__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__13(VCrossCorrelator__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VCrossCorrelator__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VCrossCorrelator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VCrossCorrelator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__10(VCrossCorrelator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__11(VCrossCorrelator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VCrossCorrelator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VCrossCorrelator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VCrossCorrelator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VCrossCorrelator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VCrossCorrelator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VCrossCorrelator__Syms* __restrict vlSymsp);
    static void _settle__TOP__9(VCrossCorrelator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
