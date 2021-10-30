// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VVITERBIDECODER_H_
#define _VVITERBIDECODER_H_  // guard

#include "verilated_heavy.h"

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
    VL_IN8(raw_data_payload_last,0,0);
    VL_IN8(_zz_in_b,1,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ViterbiDecoder__DOT__raw_data_fire;
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
        CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next;
        CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid;
        CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last;
        CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1;
        CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17;
        CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17;
        CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17;
        CData/*0:0*/ ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17;
        CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx;
        CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_1;
        CData/*1:0*/ ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2;
        CData/*3:0*/ ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1;
        CData/*3:0*/ ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1;
        CData/*5:0*/ ViterbiDecoder__DOT__tbu_core__DOT___zz_ram_addr_read;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__ram_select;
        CData/*5:0*/ ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__pkg_tail;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__tb_finish;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l46;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel;
        CData/*5:0*/ ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__pipe_halt;
        CData/*1:0*/ ViterbiDecoder__DOT__tbu_core__DOT__min_cursor;
        CData/*2:0*/ ViterbiDecoder__DOT__tbu_core__DOT__cursor;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__tb_node_data;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__tb_node_valid_1;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__goto_tail;
        CData/*1:0*/ ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt;
        CData/*2:0*/ ViterbiDecoder__DOT__tbu_core__DOT__traceback_state;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l95;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l115;
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l142;
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
        SData/*15:0*/ ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val;
        SData/*15:0*/ ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1;
        SData/*15:0*/ ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2;
        WData/*87:0*/ ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string[3];
        CData/*1:0*/ ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[8];
        CData/*0:0*/ ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[8];
        CData/*3:0*/ ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[48];
    };
    struct {
        CData/*3:0*/ ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[48];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*3:0*/ ViterbiDecoder__DOT__tbu_core__DOT____Vxrand4;
    CData/*3:0*/ ViterbiDecoder__DOT__tbu_core__DOT____Vxrand2;
    CData/*3:0*/ ViterbiDecoder__DOT__tbu_core__DOT____Vlvbound1;
    CData/*3:0*/ ViterbiDecoder__DOT__tbu_core__DOT____Vlvbound3;
    CData/*2:0*/ __Vtableidx2;
    CData/*0:0*/ __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_select;
    CData/*5:0*/ __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write;
    CData/*5:0*/ __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read;
    CData/*0:0*/ __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat;
    CData/*0:0*/ __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__goto_tail;
    CData/*2:0*/ __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state;
    CData/*5:0*/ __Vdlyvdim0__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0;
    CData/*3:0*/ __Vdlyvval__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0;
    CData/*0:0*/ __Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0;
    CData/*5:0*/ __Vdlyvdim0__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0;
    CData/*3:0*/ __Vdlyvval__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0;
    CData/*0:0*/ __Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0;
    CData/*0:0*/ __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel;
    CData/*1:0*/ __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    CData/*4:0*/ __Vtablechg1[128];
    static CData/*0:0*/ __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[128];
    static CData/*0:0*/ __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[128];
    static CData/*0:0*/ __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[128];
    static CData/*0:0*/ __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[128];
    static CData/*0:0*/ __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[128];
    static WData/*87:0*/ __Vtable2_ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string[8][3];
    
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
  public:
    static void _combo__TOP__9(VViterbiDecoder__Syms* __restrict vlSymsp);
  private:
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
    static void _initial__TOP__6(VViterbiDecoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VViterbiDecoder__Syms* __restrict vlSymsp);
    static void _settle__TOP__7(VViterbiDecoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
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
