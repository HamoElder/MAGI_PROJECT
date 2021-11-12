// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSYSTOLICFIR_H_
#define _VSYSTOLICFIR_H_  // guard

#include "verilated.h"

//==========

class VSystolicFIR__Syms;
class VSystolicFIR_VerilatedVcd;


//----------

VL_MODULE(VSystolicFIR) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(filtered_data_valid,0,0);
    VL_IN8(reset,0,0);
    VL_IN16(raw_data_payload_cha_i,15,0);
    VL_IN16(raw_data_payload_cha_q,15,0);
    VL_OUT(filtered_data_payload_cha_i,23,0);
    VL_OUT(filtered_data_payload_cha_q,23,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_34__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_34__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_35__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_35__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_36__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_36__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_37__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_37__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_38__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_38__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_39__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_39__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_40__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_40__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_41__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_41__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_42__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_42__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_43__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_43__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_44__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_44__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_45__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_45__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_46__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_46__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_47__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_47__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_48__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_48__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_49__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_49__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_50__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_50__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_51__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_51__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_52__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_52__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_53__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_53__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_54__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_54__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_55__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_55__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_56__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_56__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_57__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_57__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_58__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_58__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_59__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_59__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_60__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_60__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_61__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_61__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_62__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_62__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_63__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_63__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_64__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_64__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_65__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_65__DOT__shift_reg_1;
    };
    struct {
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_66__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_66__DOT__shift_reg_1;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_67__DOT__shift_reg_0;
        SData/*15:0*/ SystolicFIR__DOT__shiftRegister_67__DOT__shift_reg_1;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_1;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_2;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_3;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_4;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_5;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_6;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_7;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_8;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_9;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_10;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_11;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_12;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_13;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_14;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_15;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_16;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_17;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_18;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_19;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_20;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_21;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_22;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_23;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_24;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_25;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_26;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_27;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_28;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_29;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_30;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_i_31;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_1;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_2;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_3;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_4;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_5;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_6;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_7;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_8;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_9;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_10;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_11;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_12;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_13;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_14;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_15;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_16;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_17;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_18;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_19;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_20;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_21;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_22;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_23;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_24;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_25;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_26;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_27;
    };
    struct {
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_28;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_29;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_30;
        IData/*23:0*/ SystolicFIR__DOT___zz_filtered_data_payload_cha_q_31;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VSystolicFIR__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSystolicFIR);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VSystolicFIR(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VSystolicFIR();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VSystolicFIR__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VSystolicFIR__Syms* symsp, bool first);
  private:
    static QData _change_request(VSystolicFIR__Syms* __restrict vlSymsp);
    static QData _change_request_1(VSystolicFIR__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VSystolicFIR__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VSystolicFIR__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VSystolicFIR__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VSystolicFIR__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__5(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VSystolicFIR__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
