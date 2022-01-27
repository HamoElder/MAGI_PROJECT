// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VIIR_I_Filter_H_
#define _VIIR_I_Filter_H_

#include "verilated.h"
class VIIR_I_Filter__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VIIR_I_Filter) {
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
    VL_OUT8(filtered_data_valid,0,0);
    VL_IN16(raw_data_payload_0,11,0);
    //char	__VpadToAlign6[2];
    VL_OUT(filtered_data_payload_0,28,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(IIR_I_Filter__DOT__filtered_valid_buf,0,0);
    VL_SIG8(IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_0,6,0);
    VL_SIG8(IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_1,6,0);
    VL_SIG8(IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_2,6,0);
    VL_SIG8(IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_3,6,0);
    VL_SIG8(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_internal_en,3,0);
    VL_SIG8(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__internal_en,2,0);
    VL_SIG8(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__when_DirectFIR_l29,0,0);
    VL_SIG8(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__when_DirectFIR_l35,0,0);
    VL_SIG8(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_internal_en,3,0);
    VL_SIG8(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__internal_en,2,0);
    VL_SIG8(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__when_DirectFIR_l29,0,0);
    VL_SIG8(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__when_DirectFIR_l35,0,0);
    //char	__VpadToAlign29[1];
    VL_SIG16(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_0,11,0);
    VL_SIG16(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_1,11,0);
    VL_SIG16(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_2,11,0);
    VL_SIG16(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_3,11,0);
    VL_SIG16(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_4,11,0);
    VL_SIG16(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_5,11,0);
    VL_SIG16(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_6,11,0);
    VL_SIG16(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_7,11,0);
    VL_SIG16(IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_0,11,0);
    VL_SIG16(IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_1,11,0);
    VL_SIG16(IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_2,11,0);
    VL_SIG16(IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_3,11,0);
    VL_SIG16(IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_4,11,0);
    VL_SIG16(IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_5,11,0);
    VL_SIG16(IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_6,11,0);
    VL_SIG(IIR_I_Filter__DOT__filtered_data_vec_0,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_0,18,0);
    VL_SIG(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_1,18,0);
    VL_SIG(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_2,18,0);
    VL_SIG(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_3,18,0);
    VL_SIG(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_4,18,0);
    VL_SIG(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_5,18,0);
    VL_SIG(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_6,18,0);
    VL_SIG(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_7,18,0);
    VL_SIG(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_sum_result,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_0,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_1,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_2,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_3,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_4,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_5,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_6,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_7,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__sum_result,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_sum_result,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_0,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_1,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_2,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_3,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_4,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_5,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_6,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_0,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_1,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_2,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_3,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_4,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_5,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_6,28,0);
    VL_SIG(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__sum_result,28,0);
    VL_SIG64(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_0,40,0);
    VL_SIG64(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_1,40,0);
    VL_SIG64(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_2,40,0);
    VL_SIG64(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_3,40,0);
    VL_SIG64(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_4,40,0);
    VL_SIG64(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_5,40,0);
    VL_SIG64(IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_6,40,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    VL_SIG16(__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_0,11,0);
    VL_SIG16(__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_1,11,0);
    VL_SIG16(__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_2,11,0);
    VL_SIG16(__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_3,11,0);
    VL_SIG16(__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_4,11,0);
    VL_SIG16(__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_5,11,0);
    VL_SIG16(__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_6,11,0);
    VL_SIG(__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_7,28,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VIIR_I_Filter__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VIIR_I_Filter& operator= (const VIIR_I_Filter&);	///< Copying not allowed
    VIIR_I_Filter(const VIIR_I_Filter&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VIIR_I_Filter(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VIIR_I_Filter();
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
    static void _eval_initial_loop(VIIR_I_Filter__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VIIR_I_Filter__Syms* symsp, bool first);
  private:
    static QData	_change_request(VIIR_I_Filter__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VIIR_I_Filter__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__6(VIIR_I_Filter__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VIIR_I_Filter__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VIIR_I_Filter__Syms* __restrict vlSymsp);
    static void	_eval_initial(VIIR_I_Filter__Syms* __restrict vlSymsp);
    static void	_eval_settle(VIIR_I_Filter__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(VIIR_I_Filter__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(VIIR_I_Filter__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(VIIR_I_Filter__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(VIIR_I_Filter__Syms* __restrict vlSymsp);
    static void	traceChgThis(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
