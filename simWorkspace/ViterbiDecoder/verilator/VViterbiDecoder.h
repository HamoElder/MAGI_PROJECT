// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VVITERBIDECODER_H_
#define _VVITERBIDECODER_H_  // guard

#include "verilated.h"

//==========

class VViterbiDecoder__Syms;
class VViterbiDecoder_VerilatedVcd;


//----------

VL_MODULE(VViterbiDecoder) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_ready,0,0);
    VL_IN8(_zz_in_b,1,0);
    VL_IN8(clc,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_0;
    CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_1;
    CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_2;
    CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_3;
    CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_4;
    CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_5;
    CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_6;
    CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_7;
    CData/*3:0*/ ViterbiDecoder__DOT__pmu_core__DOT__survival_path;
    CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next;
    CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid;
    CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17;
    CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17;
    CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17;
    CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17;
    CData/*7:0*/ ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in;
    CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__ram_sel;
    CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l32;
    CData/*7:0*/ ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_out;
    CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__fsm_wantStart;
    CData/*2:0*/ ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg;
    CData/*2:0*/ ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext;
    SData/*15:0*/ ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0;
    SData/*15:0*/ ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1;
    SData/*15:0*/ ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2;
    SData/*15:0*/ ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3;
    SData/*15:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0;
    SData/*15:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1;
    SData/*15:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0;
    SData/*15:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1;
    SData/*15:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0;
    SData/*15:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1;
    SData/*15:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0;
    SData/*15:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1;
    WData/*167:0*/ ViterbiDecoder__DOT__tbu_core__DOT__decoded_lifo_0[6];
    WData/*167:0*/ ViterbiDecoder__DOT__tbu_core__DOT__decoded_lifo_1[6];
    WData/*95:0*/ ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string[3];
    WData/*95:0*/ ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string[3];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*2:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx2;
    CData/*2:0*/ __Vtableidx3;
    CData/*5:0*/ __Vtableidx4;
    CData/*7:0*/ __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in;
    CData/*0:0*/ __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_sel;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    static WData/*95:0*/ __Vtable1_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string[8][3];
    static WData/*95:0*/ __Vtable2_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string[8][3];
    static CData/*0:0*/ __Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__fsm_wantStart[8];
    static CData/*2:0*/ __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[64];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VViterbiDecoder__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VViterbiDecoder);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VViterbiDecoder(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VViterbiDecoder();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VViterbiDecoder__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VViterbiDecoder__Syms* symsp, bool first);
  private:
    static QData _change_request(VViterbiDecoder__Syms* __restrict vlSymsp);
    static QData _change_request_1(VViterbiDecoder__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VViterbiDecoder__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VViterbiDecoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VViterbiDecoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VViterbiDecoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _settle__TOP__5(VViterbiDecoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
