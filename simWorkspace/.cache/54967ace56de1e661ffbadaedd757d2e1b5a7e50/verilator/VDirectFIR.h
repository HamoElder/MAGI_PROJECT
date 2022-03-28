// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VDIRECTFIR_H_
#define _VDIRECTFIR_H_  // guard

#include "verilated.h"

//==========

class VDirectFIR__Syms;
class VDirectFIR_VerilatedVcd;


//----------

VL_MODULE(VDirectFIR) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(filtered_data_valid,0,0);
    VL_IN16(raw_data_payload_0,11,0);
    VL_OUT(filtered_data_payload_0,28,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*3:0*/ DirectFIR__DOT__directFIRCore_1__DOT___zz_internal_en;
    CData/*2:0*/ DirectFIR__DOT__directFIRCore_1__DOT__internal_en;
    SData/*8:0*/ DirectFIR__DOT__coff_mem_8;
    SData/*8:0*/ DirectFIR__DOT__coff_mem_9;
    SData/*8:0*/ DirectFIR__DOT__coff_mem_10;
    SData/*8:0*/ DirectFIR__DOT__coff_mem_11;
    SData/*8:0*/ DirectFIR__DOT__coff_mem_12;
    SData/*8:0*/ DirectFIR__DOT__coff_mem_13;
    SData/*8:0*/ DirectFIR__DOT__coff_mem_14;
    SData/*8:0*/ DirectFIR__DOT__coff_mem_15;
    SData/*11:0*/ DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0;
    SData/*11:0*/ DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1;
    SData/*11:0*/ DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2;
    SData/*11:0*/ DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3;
    SData/*11:0*/ DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4;
    SData/*11:0*/ DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5;
    SData/*11:0*/ DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6;
    SData/*11:0*/ DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7;
    SData/*11:0*/ DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8;
    SData/*11:0*/ DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9;
    SData/*11:0*/ DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10;
    SData/*11:0*/ DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11;
    SData/*11:0*/ DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12;
    SData/*11:0*/ DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13;
    SData/*11:0*/ DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14;
    SData/*11:0*/ DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_15;
    IData/*20:0*/ DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_0;
    IData/*20:0*/ DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_1;
    IData/*20:0*/ DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_2;
    IData/*20:0*/ DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_3;
    IData/*20:0*/ DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_4;
    IData/*20:0*/ DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_5;
    IData/*20:0*/ DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_6;
    IData/*20:0*/ DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_7;
    IData/*20:0*/ DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_8;
    IData/*20:0*/ DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_9;
    IData/*20:0*/ DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_10;
    IData/*20:0*/ DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_11;
    IData/*20:0*/ DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_12;
    IData/*20:0*/ DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_13;
    IData/*20:0*/ DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_14;
    IData/*20:0*/ DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_15;
    IData/*28:0*/ DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_0;
    IData/*28:0*/ DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_1;
    IData/*28:0*/ DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_2;
    IData/*28:0*/ DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_3;
    IData/*28:0*/ DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_4;
    IData/*28:0*/ DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_5;
    IData/*28:0*/ DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_6;
    IData/*28:0*/ DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_7;
    IData/*28:0*/ DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_8;
    IData/*28:0*/ DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_9;
    IData/*28:0*/ DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_10;
    IData/*28:0*/ DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_11;
    IData/*28:0*/ DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_12;
    IData/*28:0*/ DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_13;
    IData/*28:0*/ DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_14;
    IData/*28:0*/ DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_15;
    IData/*28:0*/ DirectFIR__DOT__directFIRCore_1__DOT__sum_result;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VDirectFIR__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VDirectFIR);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VDirectFIR(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VDirectFIR();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
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
    static QData _change_request(VDirectFIR__Syms* __restrict vlSymsp);
    static QData _change_request_1(VDirectFIR__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__6(VDirectFIR__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VDirectFIR__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VDirectFIR__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VDirectFIR__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VDirectFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VDirectFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VDirectFIR__Syms* __restrict vlSymsp);
    static void _settle__TOP__5(VDirectFIR__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
