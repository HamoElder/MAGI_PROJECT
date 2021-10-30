// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCONVCOMBTEST_H_
#define _VCONVCOMBTEST_H_  // guard

#include "verilated_heavy.h"

//==========

class VConvCombTest__Syms;
class VConvCombTest_VerilatedVcd;


//----------

VL_MODULE(VConvCombTest) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(tail_bits_valid,0,0);
    VL_IN8(tail_bits_payload,2,0);
    VL_IN8(raw_data_valid,0,0);
    VL_IN8(raw_data_payload_last,0,0);
    VL_IN8(raw_data_payload_fragment,0,0);
    VL_OUT8(decoded_data_valid,0,0);
    VL_OUT8(decoded_data_payload_last,0,0);
    VL_OUT8(decoded_data_payload_fragment,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ConvCombTest__DOT__encoded_fifo_io_pop_valid;
        CData/*0:0*/ ConvCombTest__DOT__decoder_raw_data_ready;
        CData/*3:0*/ ConvCombTest__DOT__encoder__DOT___zz_r_enc_0;
        CData/*0:0*/ ConvCombTest__DOT__encoder__DOT__raw_data_payload;
        CData/*0:0*/ ConvCombTest__DOT__encoder__DOT__raw_data_valid_1;
        CData/*0:0*/ ConvCombTest__DOT__encoder__DOT__raw_data_last;
        CData/*1:0*/ ConvCombTest__DOT__encoder__DOT__coded_data;
        CData/*0:0*/ ConvCombTest__DOT__encoder__DOT__coded_data_valid_1;
        CData/*2:0*/ ConvCombTest__DOT__encoder__DOT__r_enc_buf;
        CData/*0:0*/ ConvCombTest__DOT__encoder__DOT__raw_data_last_regNext;
        CData/*2:0*/ ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0;
        CData/*0:0*/ ConvCombTest__DOT__encoded_fifo__DOT___zz_1;
        CData/*0:0*/ ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*0:0*/ ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement;
        CData/*0:0*/ ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing;
        CData/*0:0*/ ConvCombTest__DOT__encoded_fifo__DOT__logic_popping;
        CData/*0:0*/ ConvCombTest__DOT__encoded_fifo__DOT__logic_full;
        CData/*0:0*/ ConvCombTest__DOT__encoded_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__raw_data_fire;
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_0;
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_1;
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_2;
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_3;
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_4;
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_5;
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_6;
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_7;
        CData/*3:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_last_next;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_last;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_ready_1;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17;
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx;
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_1;
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2;
        CData/*3:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1;
        CData/*3:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1;
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_ram_select;
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select;
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_1;
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_2;
        CData/*4:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_ram_addr_read_2;
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select;
        CData/*4:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l48;
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select;
        CData/*4:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt;
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor;
        CData/*2:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail;
    };
    struct {
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt;
        CData/*2:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l104;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l153;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid;
        CData/*5:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_ready;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_valid_1;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_last;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__when_ReorderLifo_l54;
        CData/*2:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_1;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*5:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_valueNext;
        CData/*5:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement;
        CData/*5:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext;
        CData/*5:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full;
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_io_pop_valid;
        SData/*9:0*/ ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_valueNext;
        SData/*9:0*/ ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value;
        SData/*9:0*/ ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_valueNext;
        SData/*9:0*/ ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value;
        SData/*15:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0;
        SData/*15:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1;
        SData/*15:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2;
        SData/*15:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3;
        SData/*15:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0;
        SData/*15:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1;
        SData/*15:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0;
        SData/*15:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1;
        SData/*15:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0;
        SData/*15:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1;
        SData/*15:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0;
        SData/*15:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1;
        SData/*15:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val;
        SData/*15:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1;
        SData/*15:0*/ ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2;
        WData/*87:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string[3];
        QData/*63:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo;
        QData/*63:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_last_lifo;
        CData/*2:0*/ ConvCombTest__DOT__encoded_fifo__DOT__logic_ram[1024];
        CData/*1:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom[8];
        CData/*0:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom[8];
        CData/*3:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[32];
        CData/*3:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[32];
        CData/*3:0*/ ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[32];
        CData/*2:0*/ ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[64];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*2:0*/ __Vtableidx2;
    CData/*2:0*/ __Vdlyvval__ConvCombTest__DOT__encoded_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__ConvCombTest__DOT__encoded_fifo__DOT__logic_ram__v0;
    CData/*4:0*/ __Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0;
    CData/*3:0*/ __Vdlyvval__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0;
    CData/*0:0*/ __Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0;
    CData/*4:0*/ __Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0;
    CData/*3:0*/ __Vdlyvval__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0;
    CData/*0:0*/ __Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0;
    CData/*4:0*/ __Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0;
    CData/*3:0*/ __Vdlyvval__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0;
    CData/*0:0*/ __Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0;
    CData/*1:0*/ __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select;
    CData/*1:0*/ __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt;
    CData/*5:0*/ __Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0;
    CData/*2:0*/ __Vdlyvval__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0;
    CData/*4:0*/ __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read;
    CData/*0:0*/ __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat;
    CData/*2:0*/ __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state;
    CData/*5:0*/ __Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor;
    CData/*0:0*/ __Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    SData/*9:0*/ __Vdlyvdim0__ConvCombTest__DOT__encoded_fifo__DOT__logic_ram__v0;
    IData/*31:0*/ __Vm_traceActivity;
    CData/*4:0*/ __Vtablechg1[128];
    static CData/*0:0*/ __Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next[128];
    static CData/*0:0*/ __Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_last_next[128];
    static CData/*0:0*/ __Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid[128];
    static CData/*0:0*/ __Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_last[128];
    static CData/*0:0*/ __Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_ready_1[128];
    static WData/*87:0*/ __Vtable2_ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string[8][3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VConvCombTest__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VConvCombTest);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VConvCombTest(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VConvCombTest();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VConvCombTest__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VConvCombTest__Syms* symsp, bool first);
  private:
    static QData _change_request(VConvCombTest__Syms* __restrict vlSymsp);
    static QData _change_request_1(VConvCombTest__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VConvCombTest__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VConvCombTest__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VConvCombTest__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__8(VConvCombTest__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(VConvCombTest__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(VConvCombTest__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VConvCombTest__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VConvCombTest__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VConvCombTest__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VConvCombTest__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VConvCombTest__Syms* __restrict vlSymsp);
    static void _settle__TOP__9(VConvCombTest__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__14(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__15(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__13(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
