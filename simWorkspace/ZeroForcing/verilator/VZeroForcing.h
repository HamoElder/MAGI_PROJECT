// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VZeroForcing_H_
#define _VZeroForcing_H_

#include "verilated.h"
class VZeroForcing__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VZeroForcing) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_ready,0,0);
    VL_IN8(train_en,0,0);
    VL_OUT8(result_data_valid,0,0);
    VL_IN16(raw_data_payload,15,0);
    VL_IN16(scale,15,0);
    VL_IN16(ref_data,15,0);
    VL_OUT16(result_data_payload,15,0);
    //char	__VpadToAlign14[2];
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(ZeroForcing__DOT___zz_x_sign,0,0);
    VL_SIG8(ZeroForcing__DOT___zz_x_sign_1,0,0);
    VL_SIG8(ZeroForcing__DOT___zz_x_sign_2,0,0);
    VL_SIG8(ZeroForcing__DOT___zz_x_sign_3,0,0);
    VL_SIG8(ZeroForcing__DOT___zz_x_sign_4,0,0);
    VL_SIG8(ZeroForcing__DOT___zz_x_sign_5,0,0);
    VL_SIG8(ZeroForcing__DOT___zz_x_sign_6,0,0);
    VL_SIG8(ZeroForcing__DOT___zz_x_sign_7,0,0);
    VL_SIG8(ZeroForcing__DOT___zz_x_sign_8,0,0);
    VL_SIG8(ZeroForcing__DOT___zz_x_sign_9,0,0);
    VL_SIG8(ZeroForcing__DOT___zz_x_sign_10,0,0);
    VL_SIG8(ZeroForcing__DOT___zz_x_sign_11,0,0);
    VL_SIG8(ZeroForcing__DOT___zz_x_sign_12,0,0);
    VL_SIG8(ZeroForcing__DOT___zz_x_sign_13,0,0);
    VL_SIG8(ZeroForcing__DOT___zz_x_sign_14,0,0);
    VL_SIG8(ZeroForcing__DOT__x_sign,0,0);
    VL_SIG8(ZeroForcing__DOT__train_en_delay_1,0,0);
    VL_SIG8(ZeroForcing__DOT__train_en_delay_2,0,0);
    VL_SIG8(ZeroForcing__DOT__train_en_delay_3,0,0);
    VL_SIG8(ZeroForcing__DOT__train_en_delay_4,0,0);
    VL_SIG8(ZeroForcing__DOT__train_en_delay_5,0,0);
    VL_SIG8(ZeroForcing__DOT__train_en_delay_6,0,0);
    VL_SIG8(ZeroForcing__DOT__train_en_delay_7,0,0);
    VL_SIG8(ZeroForcing__DOT__train_en_delay_8,0,0);
    VL_SIG8(ZeroForcing__DOT__train_en_delay_9,0,0);
    VL_SIG8(ZeroForcing__DOT__train_en_delay_10,0,0);
    VL_SIG8(ZeroForcing__DOT__train_en_delay_11,0,0);
    VL_SIG8(ZeroForcing__DOT__train_en_delay_12,0,0);
    VL_SIG8(ZeroForcing__DOT__train_en_delay_13,0,0);
    VL_SIG8(ZeroForcing__DOT__train_en_delay_14,0,0);
    VL_SIG8(ZeroForcing__DOT__train_en_delay_15,0,0);
    VL_SIG8(ZeroForcing__DOT__train_en_delay_16,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_valid,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_valid_1,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_valid_2,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_valid_3,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_valid_4,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_valid_5,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_valid_6,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_valid_7,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_valid_8,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_valid_9,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_valid_10,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_valid_11,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_valid_12,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_valid_13,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_valid_14,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_valid_15,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_46,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_47,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_48,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_49,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_50,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_51,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_52,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_53,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_54,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_55,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_56,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_57,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_58,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_59,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_60,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_75,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_78,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_81,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_84,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_87,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_90,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_93,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_96,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_99,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_102,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_105,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_108,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_111,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_114,0,0);
    VL_SIG8(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_117,0,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_1,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_2,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_3,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_4,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_5,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_6,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_7,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_8,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_9,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_10,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_11,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_12,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_13,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_14,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_15,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_16,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_17,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_18,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_19,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_20,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_21,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_22,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_23,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_24,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_25,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_26,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_27,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_28,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_29,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_30,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_y,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_31,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_32,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_33,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_34,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_35,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_36,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_37,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_38,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_39,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_40,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_41,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_42,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_43,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_44,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_45,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_z,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_61,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_62,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_63,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_64,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_65,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_66,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_67,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_68,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_69,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_70,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_71,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_72,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_73,15,0);
    VL_SIG16(ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_74,15,0);
    //char	__VpadToAlign222[2];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    //char	__VpadToAlign230[2];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VZeroForcing__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VZeroForcing& operator= (const VZeroForcing&);	///< Copying not allowed
    VZeroForcing(const VZeroForcing&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VZeroForcing(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VZeroForcing();
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
    static void _eval_initial_loop(VZeroForcing__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VZeroForcing__Syms* symsp, bool first);
  private:
    static QData	_change_request(VZeroForcing__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VZeroForcing__Syms* __restrict vlSymsp);
    void	_configure_coverage(VZeroForcing__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VZeroForcing__Syms* __restrict vlSymsp);
    static void	_eval_initial(VZeroForcing__Syms* __restrict vlSymsp);
    static void	_eval_settle(VZeroForcing__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(VZeroForcing__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(VZeroForcing__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(VZeroForcing__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(VZeroForcing__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(VZeroForcing__Syms* __restrict vlSymsp);
    static void	_settle__TOP__1(VZeroForcing__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(VZeroForcing__Syms* __restrict vlSymsp);
    static void	traceChgThis(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
