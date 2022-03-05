// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VBDMAM2S_H_
#define _VBDMAM2S_H_  // guard

#include "verilated.h"

//==========

class VBDMAm2s__Syms;
class VBDMAm2s_VerilatedVcd;


//----------

VL_MODULE(VBDMAm2s) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(dma_ar_valid,0,0);
    VL_IN8(dma_ar_ready,0,0);
    VL_OUT8(dma_ar_payload_id,3,0);
    VL_OUT8(dma_ar_payload_len,7,0);
    VL_OUT8(dma_ar_payload_size,2,0);
    VL_OUT8(dma_ar_payload_burst,1,0);
    VL_IN8(dma_r_valid,0,0);
    VL_OUT8(dma_r_ready,0,0);
    VL_IN8(dma_r_payload_id,3,0);
    VL_IN8(dma_r_payload_resp,1,0);
    VL_IN8(dma_r_payload_last,0,0);
    VL_OUT8(m2s_data_stream_valid,0,0);
    VL_IN8(m2s_data_stream_ready,0,0);
    VL_OUT8(m2s_data_stream_payload_id,3,0);
    VL_OUT8(m2s_data_stream_payload_strb,3,0);
    VL_OUT8(m2s_data_stream_payload_keep_,3,0);
    VL_OUT8(m2s_data_stream_payload_last,0,0);
    VL_OUT8(m2s_state,1,0);
    VL_IN8(m2s_cch_valid,0,0);
    VL_OUT8(m2s_cch_ready,0,0);
    VL_IN8(m2s_cch_payload_desc_burst,1,0);
    VL_IN8(m2s_cch_payload_desc_id,3,0);
    VL_IN8(m2s_cch_payload_desc_reset,0,0);
    VL_OUT8(m2s_intr,0,0);
    VL_OUT(dma_ar_payload_addr,31,0);
    VL_IN(dma_r_payload_data,31,0);
    VL_OUT(m2s_data_stream_payload_data,31,0);
    VL_IN(m2s_cch_payload_desc_start_addr,31,0);
    VL_IN(m2s_cch_payload_desc_total_bytes,29,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid;
        CData/*0:0*/ BDMAm2s__DOT__m2s_data_fifo_io_pop_valid;
        CData/*0:0*/ BDMAm2s__DOT__len_pending_fifo_io_pop_valid;
        CData/*3:0*/ BDMAm2s__DOT__len_pending_fifo_io_occupancy;
        CData/*1:0*/ BDMAm2s__DOT__m2s_cch_state;
        CData/*1:0*/ BDMAm2s__DOT__m2s_r_state;
        CData/*0:0*/ BDMAm2s__DOT__cch_ready;
        CData/*1:0*/ BDMAm2s__DOT__cch_burst_type;
        CData/*3:0*/ BDMAm2s__DOT__cch_id;
        CData/*7:0*/ BDMAm2s__DOT__m2s_ar_len;
        CData/*0:0*/ BDMAm2s__DOT__m2s_ar_valid;
        CData/*0:0*/ BDMAm2s__DOT__m2s_ar_halt_exec;
        CData/*0:0*/ BDMAm2s__DOT__cycle_finished;
        CData/*1:0*/ BDMAm2s__DOT__m2s_bytes_shift;
        CData/*0:0*/ BDMAm2s__DOT__m2s_cch_fire;
        CData/*0:0*/ BDMAm2s__DOT__when_BDMAm2s_l81;
        CData/*0:0*/ BDMAm2s__DOT__m2s_ar_fifo_io_push_fire;
        CData/*0:0*/ BDMAm2s__DOT__pending_valid;
        CData/*7:0*/ BDMAm2s__DOT__len_pending;
        CData/*3:0*/ BDMAm2s__DOT__id_pending;
        CData/*0:0*/ BDMAm2s__DOT__dma_ar_fire_1;
        CData/*0:0*/ BDMAm2s__DOT__ar_finish;
        CData/*0:0*/ BDMAm2s__DOT__pending_fifo_pop_ready;
        CData/*0:0*/ BDMAm2s__DOT__m2s_r_valve;
        CData/*0:0*/ BDMAm2s__DOT__m2s_r_req;
        CData/*0:0*/ BDMAm2s__DOT__m2s_r_first;
        CData/*7:0*/ BDMAm2s__DOT__m2s_r_len;
        CData/*0:0*/ BDMAm2s__DOT__m2s_r_last_cycle;
        CData/*3:0*/ BDMAm2s__DOT__m2s_axis_strb_keep;
        CData/*0:0*/ BDMAm2s__DOT__m2s_axis_valid;
        CData/*0:0*/ BDMAm2s__DOT__m2s_axis_last;
        CData/*1:0*/ BDMAm2s__DOT__m2s_axis_low_bytes;
        CData/*3:0*/ BDMAm2s__DOT__m2s_axis_id;
        CData/*0:0*/ BDMAm2s__DOT__len_pending_fifo_io_pop_fire;
        CData/*0:0*/ BDMAm2s__DOT__when_BDMAm2s_l264;
        CData/*0:0*/ BDMAm2s__DOT__dma_r_fire;
        CData/*0:0*/ BDMAm2s__DOT__when_BDMAm2s_l307;
        CData/*0:0*/ BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_1;
        CData/*0:0*/ BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*2:0*/ BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext;
        CData/*2:0*/ BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement;
        CData/*2:0*/ BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext;
        CData/*2:0*/ BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping;
        CData/*0:0*/ BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full;
        CData/*0:0*/ BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT___zz_1;
        CData/*0:0*/ BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*2:0*/ BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_valueNext;
        CData/*2:0*/ BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_willIncrement;
        CData/*2:0*/ BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_valueNext;
        CData/*2:0*/ BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushing;
        CData/*0:0*/ BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popping;
        CData/*0:0*/ BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_full;
        CData/*0:0*/ BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ BDMAm2s__DOT__m2s_data_fifo__DOT___zz_1;
        CData/*0:0*/ BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement;
    };
    struct {
        CData/*2:0*/ BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext;
        CData/*2:0*/ BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement;
        CData/*2:0*/ BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext;
        CData/*2:0*/ BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing;
        CData/*0:0*/ BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping;
        CData/*0:0*/ BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full;
        CData/*0:0*/ BDMAm2s__DOT__m2s_data_fifo__DOT___zz_io_pop_valid;
        CData/*7:0*/ BDMAm2s__DOT__len_pending_fifo__DOT___zz_logic_ram_port0;
        CData/*0:0*/ BDMAm2s__DOT__len_pending_fifo__DOT___zz_1;
        CData/*0:0*/ BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*3:0*/ BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_valueNext;
        CData/*3:0*/ BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement;
        CData/*3:0*/ BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_valueNext;
        CData/*3:0*/ BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ BDMAm2s__DOT__len_pending_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushing;
        CData/*0:0*/ BDMAm2s__DOT__len_pending_fifo__DOT__logic_full;
        CData/*0:0*/ BDMAm2s__DOT__len_pending_fifo__DOT___zz_io_pop_valid;
        CData/*3:0*/ BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrDif;
        CData/*3:0*/ BDMAm2s__DOT__id_pending_fifo__DOT___zz_logic_ram_port0;
        CData/*0:0*/ BDMAm2s__DOT__id_pending_fifo__DOT___zz_1;
        CData/*0:0*/ BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*3:0*/ BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_valueNext;
        CData/*3:0*/ BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_willIncrement;
        CData/*3:0*/ BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_valueNext;
        CData/*3:0*/ BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ BDMAm2s__DOT__id_pending_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushing;
        CData/*0:0*/ BDMAm2s__DOT__id_pending_fifo__DOT__logic_popping;
        CData/*0:0*/ BDMAm2s__DOT__id_pending_fifo__DOT__logic_full;
        CData/*0:0*/ BDMAm2s__DOT__id_pending_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ BDMAm2s__DOT__trans_pending_fifo__DOT___zz_1;
        CData/*0:0*/ BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*3:0*/ BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_valueNext;
        CData/*3:0*/ BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_willIncrement;
        CData/*3:0*/ BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_valueNext;
        CData/*3:0*/ BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ BDMAm2s__DOT__trans_pending_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushing;
        CData/*0:0*/ BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popping;
        CData/*0:0*/ BDMAm2s__DOT__trans_pending_fifo__DOT__logic_full;
        CData/*0:0*/ BDMAm2s__DOT__trans_pending_fifo__DOT___zz_io_pop_valid;
        IData/*31:0*/ BDMAm2s__DOT___zz_when_BDMAm2s_l97;
        IData/*31:0*/ BDMAm2s__DOT___zz_when_BDMAm2s_l132_1;
        IData/*29:0*/ BDMAm2s__DOT__cch_total_bytes;
        IData/*31:0*/ BDMAm2s__DOT__cch_address;
        IData/*29:0*/ BDMAm2s__DOT__trans_bytes_cnt;
        IData/*29:0*/ BDMAm2s__DOT__trans_pending;
        IData/*31:0*/ BDMAm2s__DOT__m2s_r_payload;
        IData/*31:0*/ BDMAm2s__DOT__m2s_r_residual_payload;
        IData/*31:0*/ BDMAm2s__DOT__m2s_axis_payload;
        IData/*29:0*/ BDMAm2s__DOT__m2s_axis_trans_bytes;
        WData/*71:0*/ BDMAm2s__DOT__m2s_cch_state_string[3];
        IData/*29:0*/ BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT___zz_logic_ram_port0;
    };
    struct {
        IData/*29:0*/ BDMAm2s__DOT__trans_pending_fifo__DOT___zz_logic_ram_port0;
        QData/*48:0*/ BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0;
        QData/*44:0*/ BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0;
        QData/*48:0*/ BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[8];
        IData/*29:0*/ BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ram[8];
        QData/*44:0*/ BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[8];
        CData/*7:0*/ BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[12];
        CData/*3:0*/ BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[12];
        IData/*29:0*/ BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram[12];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*7:0*/ BDMAm2s__DOT__len_pending_fifo__DOT____Vxrand1;
    CData/*7:0*/ BDMAm2s__DOT__len_pending_fifo__DOT____Vlvbound2;
    CData/*3:0*/ BDMAm2s__DOT__id_pending_fifo__DOT____Vxrand1;
    CData/*3:0*/ BDMAm2s__DOT__id_pending_fifo__DOT____Vlvbound2;
    CData/*1:0*/ __Vtableidx1;
    CData/*1:0*/ __Vdly__BDMAm2s__DOT__m2s_r_state;
    CData/*0:0*/ __Vdly__BDMAm2s__DOT__m2s_r_req;
    CData/*0:0*/ __Vdly__BDMAm2s__DOT__m2s_r_first;
    CData/*0:0*/ __Vdly__BDMAm2s__DOT__m2s_r_last_cycle;
    CData/*1:0*/ __Vdly__BDMAm2s__DOT__m2s_cch_state;
    CData/*0:0*/ __Vdly__BDMAm2s__DOT__m2s_ar_halt_exec;
    CData/*7:0*/ __Vdly__BDMAm2s__DOT__m2s_r_len;
    CData/*2:0*/ __Vdlyvdim0__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0;
    CData/*2:0*/ __Vdlyvdim0__BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ram__v0;
    CData/*2:0*/ __Vdlyvdim0__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0;
    CData/*3:0*/ __Vdlyvdim0__BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram__v0;
    CData/*7:0*/ __Vdlyvval__BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram__v0;
    CData/*3:0*/ __Vdlyvdim0__BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram__v0;
    CData/*3:0*/ __Vdlyvval__BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram__v0;
    CData/*3:0*/ __Vdlyvdim0__BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*29:0*/ BDMAm2s__DOT__trans_pending_fifo__DOT____Vxrand1;
    IData/*29:0*/ BDMAm2s__DOT__trans_pending_fifo__DOT____Vlvbound2;
    IData/*29:0*/ __Vdly__BDMAm2s__DOT__m2s_axis_trans_bytes;
    IData/*31:0*/ __Vdly__BDMAm2s__DOT__cch_address;
    IData/*29:0*/ __Vdly__BDMAm2s__DOT__cch_total_bytes;
    IData/*29:0*/ __Vdly__BDMAm2s__DOT__trans_bytes_cnt;
    IData/*29:0*/ __Vdlyvval__BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ram__v0;
    IData/*29:0*/ __Vdlyvval__BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram__v0;
    IData/*31:0*/ __Vm_traceActivity;
    QData/*48:0*/ __Vdlyvval__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0;
    QData/*44:0*/ __Vdlyvval__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0;
    static WData/*71:0*/ __Vtable1_BDMAm2s__DOT__m2s_cch_state_string[4][3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VBDMAm2s__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VBDMAm2s);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VBDMAm2s(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VBDMAm2s();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VBDMAm2s__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VBDMAm2s__Syms* symsp, bool first);
  private:
    static QData _change_request(VBDMAm2s__Syms* __restrict vlSymsp);
    static QData _change_request_1(VBDMAm2s__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__12(VBDMAm2s__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VBDMAm2s__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VBDMAm2s__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VBDMAm2s__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__8(VBDMAm2s__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__11(VBDMAm2s__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VBDMAm2s__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VBDMAm2s__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VBDMAm2s__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VBDMAm2s__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VBDMAm2s__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VBDMAm2s__Syms* __restrict vlSymsp);
    static void _settle__TOP__10(VBDMAm2s__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__9(VBDMAm2s__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__7(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
