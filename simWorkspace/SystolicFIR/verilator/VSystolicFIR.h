// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSystolicFIR_H_
#define _VSystolicFIR_H_

#include "verilated.h"
class VSystolicFIR__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VSystolicFIR) {
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
    VL_OUT8(filtered_data_valid,0,0);
    //char	__VpadToAlign5[1];
    VL_IN16(raw_data_payload_0,11,0);
    VL_OUT(filtered_data_payload_0,28,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(SystolicFIR__DOT__systolicCore_16__DOT__valid_regNext,0,0);
    VL_SIG8(SystolicFIR__DOT__systolicCore_17__DOT__valid_regNext,0,0);
    VL_SIG8(SystolicFIR__DOT__systolicCore_18__DOT__valid_regNext,0,0);
    VL_SIG8(SystolicFIR__DOT__systolicCore_19__DOT__valid_regNext,0,0);
    VL_SIG8(SystolicFIR__DOT__systolicCore_20__DOT__valid_regNext,0,0);
    VL_SIG8(SystolicFIR__DOT__systolicCore_21__DOT__valid_regNext,0,0);
    VL_SIG8(SystolicFIR__DOT__systolicCore_22__DOT__valid_regNext,0,0);
    VL_SIG8(SystolicFIR__DOT__systolicCore_23__DOT__valid_regNext,0,0);
    VL_SIG8(SystolicFIR__DOT__systolicCore_24__DOT__valid_regNext,0,0);
    VL_SIG8(SystolicFIR__DOT__systolicCore_25__DOT__valid_regNext,0,0);
    VL_SIG8(SystolicFIR__DOT__systolicCore_26__DOT__valid_regNext,0,0);
    VL_SIG8(SystolicFIR__DOT__systolicCore_27__DOT__valid_regNext,0,0);
    VL_SIG8(SystolicFIR__DOT__systolicCore_28__DOT__valid_regNext,0,0);
    VL_SIG8(SystolicFIR__DOT__systolicCore_29__DOT__valid_regNext,0,0);
    VL_SIG8(SystolicFIR__DOT__systolicCore_30__DOT__valid_regNext,0,0);
    VL_SIG8(SystolicFIR__DOT__systolicCore_31__DOT__valid_regNext,0,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_1,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_1,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_1,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_1,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_1,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_1,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_1,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_1,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_1,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_1,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_1,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_1,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_1,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_1,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_1,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_16__DOT__shift_reg_1,28,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_16__DOT__mult,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_16__DOT__next_adder,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_17__DOT__mult,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_17__DOT__next_adder,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_18__DOT__mult,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_18__DOT__next_adder,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_19__DOT__mult,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_19__DOT__next_adder,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_20__DOT__mult,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_20__DOT__next_adder,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_21__DOT__mult,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_21__DOT__next_adder,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_22__DOT__mult,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_22__DOT__next_adder,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_23__DOT__mult,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_23__DOT__next_adder,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_24__DOT__mult,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_24__DOT__next_adder,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_25__DOT__mult,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_25__DOT__next_adder,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_26__DOT__mult,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_26__DOT__next_adder,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_27__DOT__mult,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_27__DOT__next_adder,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_28__DOT__mult,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_28__DOT__next_adder,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_29__DOT__mult,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_29__DOT__next_adder,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_30__DOT__mult,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_30__DOT__next_adder,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_31__DOT__mult,37,0);
    VL_SIG64(SystolicFIR__DOT__systolicCore_31__DOT__next_adder,37,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    //char	__VpadToAlign422[2];
    VL_SIG(__Vdly__SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(__Vdly__SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(__Vdly__SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(__Vdly__SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(__Vdly__SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(__Vdly__SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(__Vdly__SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(__Vdly__SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(__Vdly__SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(__Vdly__SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(__Vdly__SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(__Vdly__SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(__Vm_traceActivity,31,0);
    //char	__VpadToAlign476[4];
    VL_SIG64(__Vdly__SystolicFIR__DOT__systolicCore_16__DOT__mult,37,0);
    VL_SIG64(__Vdly__SystolicFIR__DOT__systolicCore_17__DOT__mult,37,0);
    VL_SIG64(__Vdly__SystolicFIR__DOT__systolicCore_18__DOT__mult,37,0);
    VL_SIG64(__Vdly__SystolicFIR__DOT__systolicCore_19__DOT__mult,37,0);
    VL_SIG64(__Vdly__SystolicFIR__DOT__systolicCore_20__DOT__mult,37,0);
    VL_SIG64(__Vdly__SystolicFIR__DOT__systolicCore_21__DOT__mult,37,0);
    VL_SIG64(__Vdly__SystolicFIR__DOT__systolicCore_22__DOT__mult,37,0);
    VL_SIG64(__Vdly__SystolicFIR__DOT__systolicCore_23__DOT__mult,37,0);
    VL_SIG64(__Vdly__SystolicFIR__DOT__systolicCore_24__DOT__mult,37,0);
    VL_SIG64(__Vdly__SystolicFIR__DOT__systolicCore_25__DOT__mult,37,0);
    VL_SIG64(__Vdly__SystolicFIR__DOT__systolicCore_26__DOT__mult,37,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign572[4];
    VSystolicFIR__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VSystolicFIR& operator= (const VSystolicFIR&);	///< Copying not allowed
    VSystolicFIR(const VSystolicFIR&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VSystolicFIR(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VSystolicFIR();
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
    static void _eval_initial_loop(VSystolicFIR__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VSystolicFIR__Syms* symsp, bool first);
  private:
    static QData	_change_request(VSystolicFIR__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VSystolicFIR__Syms* __restrict vlSymsp);
    void	_configure_coverage(VSystolicFIR__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VSystolicFIR__Syms* __restrict vlSymsp);
    static void	_eval_initial(VSystolicFIR__Syms* __restrict vlSymsp);
    static void	_eval_settle(VSystolicFIR__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(VSystolicFIR__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(VSystolicFIR__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(VSystolicFIR__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(VSystolicFIR__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(VSystolicFIR__Syms* __restrict vlSymsp);
    static void	traceChgThis(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
