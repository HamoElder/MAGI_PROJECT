// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VDirectFIR_H_
#define _VDirectFIR_H_

#include "verilated.h"
class VDirectFIR__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VDirectFIR) {
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
    VL_SIG8(DirectFIR__DOT__directFIRCore_1__DOT___zz_internal_en,3,0);
    VL_SIG8(DirectFIR__DOT__directFIRCore_1__DOT__internal_en,2,0);
    VL_SIG8(DirectFIR__DOT__directFIRCore_1__DOT__when_DirectFIR_l29,0,0);
    VL_SIG8(DirectFIR__DOT__directFIRCore_1__DOT__when_DirectFIR_l35,0,0);
    VL_SIG16(DirectFIR__DOT__coff_mem_0,8,0);
    VL_SIG16(DirectFIR__DOT__coff_mem_1,8,0);
    VL_SIG16(DirectFIR__DOT__coff_mem_2,8,0);
    VL_SIG16(DirectFIR__DOT__coff_mem_3,8,0);
    VL_SIG16(DirectFIR__DOT__coff_mem_4,8,0);
    VL_SIG16(DirectFIR__DOT__coff_mem_5,8,0);
    VL_SIG16(DirectFIR__DOT__coff_mem_6,8,0);
    VL_SIG16(DirectFIR__DOT__coff_mem_7,8,0);
    VL_SIG16(DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0,11,0);
    VL_SIG16(DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1,11,0);
    VL_SIG16(DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2,11,0);
    VL_SIG16(DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3,11,0);
    VL_SIG16(DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4,11,0);
    VL_SIG16(DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5,11,0);
    VL_SIG16(DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6,11,0);
    VL_SIG16(DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7,11,0);
    VL_SIG16(DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8,11,0);
    VL_SIG16(DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9,11,0);
    VL_SIG16(DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10,11,0);
    VL_SIG16(DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11,11,0);
    VL_SIG16(DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12,11,0);
    VL_SIG16(DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13,11,0);
    VL_SIG16(DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14,11,0);
    VL_SIG16(DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_15,11,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_0,20,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_1,20,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_2,20,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_3,20,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_4,20,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_5,20,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_6,20,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_7,20,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_8,20,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_9,20,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_10,20,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_11,20,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_12,20,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_13,20,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_14,20,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_15,20,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT___zz_sum_result,28,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_0,28,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_1,28,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_2,28,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_3,28,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_4,28,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_5,28,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_6,28,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_7,28,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_8,28,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_9,28,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_10,28,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_11,28,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_12,28,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_13,28,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_14,28,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_15,28,0);
    VL_SIG(DirectFIR__DOT__directFIRCore_1__DOT__sum_result,28,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    VL_SIG16(__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0,11,0);
    VL_SIG16(__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1,11,0);
    VL_SIG16(__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2,11,0);
    VL_SIG16(__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3,11,0);
    VL_SIG16(__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4,11,0);
    VL_SIG16(__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5,11,0);
    VL_SIG16(__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6,11,0);
    VL_SIG16(__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7,11,0);
    VL_SIG16(__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8,11,0);
    VL_SIG16(__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9,11,0);
    VL_SIG16(__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10,11,0);
    VL_SIG16(__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11,11,0);
    VL_SIG16(__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12,11,0);
    VL_SIG16(__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13,11,0);
    VL_SIG16(__Vdly__DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14,11,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VDirectFIR__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VDirectFIR& operator= (const VDirectFIR&);	///< Copying not allowed
    VDirectFIR(const VDirectFIR&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VDirectFIR(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VDirectFIR();
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
    static void _eval_initial_loop(VDirectFIR__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VDirectFIR__Syms* symsp, bool first);
  private:
    static QData	_change_request(VDirectFIR__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VDirectFIR__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__6(VDirectFIR__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VDirectFIR__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VDirectFIR__Syms* __restrict vlSymsp);
    static void	_eval_initial(VDirectFIR__Syms* __restrict vlSymsp);
    static void	_eval_settle(VDirectFIR__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(VDirectFIR__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(VDirectFIR__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(VDirectFIR__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(VDirectFIR__Syms* __restrict vlSymsp);
    static void	traceChgThis(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
