// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VBDMAS2M_H_
#define _VBDMAS2M_H_  // guard

#include "verilated.h"

//==========

class VBDMAs2m__Syms;
class VBDMAs2m_VerilatedVcd;


//----------

VL_MODULE(VBDMAs2m) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(dma_aw_valid,0,0);
    VL_IN8(dma_aw_ready,0,0);
    VL_OUT8(dma_aw_payload_id,3,0);
    VL_OUT8(dma_aw_payload_len,7,0);
    VL_OUT8(dma_aw_payload_size,2,0);
    VL_OUT8(dma_aw_payload_burst,1,0);
    VL_OUT8(dma_w_valid,0,0);
    VL_IN8(dma_w_ready,0,0);
    VL_OUT8(dma_w_payload_strb,3,0);
    VL_OUT8(dma_w_payload_last,0,0);
    VL_IN8(dma_b_valid,0,0);
    VL_OUT8(dma_b_ready,0,0);
    VL_IN8(dma_b_payload_id,3,0);
    VL_IN8(dma_b_payload_resp,1,0);
    VL_IN8(s2m_data_stream_valid,0,0);
    VL_OUT8(s2m_data_stream_ready,0,0);
    VL_IN8(s2m_data_stream_payload_id,3,0);
    VL_IN8(s2m_data_stream_payload_strb,3,0);
    VL_IN8(s2m_data_stream_payload_keep_,3,0);
    VL_IN8(s2m_data_stream_payload_last,0,0);
    VL_OUT8(s2m_state,1,0);
    VL_IN8(s2m_cch_valid,0,0);
    VL_OUT8(s2m_cch_ready,0,0);
    VL_IN8(s2m_cch_payload_desc_burst,1,0);
    VL_IN8(s2m_cch_payload_desc_id,3,0);
    VL_IN8(s2m_cch_payload_desc_reset,0,0);
    VL_OUT8(s2m_intr,0,0);
    VL_OUT(dma_aw_payload_addr,31,0);
    VL_OUT(dma_w_payload_data,31,0);
    VL_IN(s2m_data_stream_payload_data,31,0);
    VL_IN(s2m_cch_payload_desc_start_addr,31,0);
    VL_IN(s2m_cch_payload_desc_total_bytes,29,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid;
        CData/*0:0*/ BDMAs2m__DOT__s2m_w_fifo_io_pop_valid;
        CData/*0:0*/ BDMAs2m__DOT__len_pending_fifo_io_pop_valid;
        CData/*3:0*/ BDMAs2m__DOT__len_pending_fifo_io_occupancy;
        CData/*1:0*/ BDMAs2m__DOT__s2m_cch_state;
        CData/*1:0*/ BDMAs2m__DOT__s2m_w_state;
        CData/*0:0*/ BDMAs2m__DOT__cch_ready;
        CData/*1:0*/ BDMAs2m__DOT__cch_burst_type;
        CData/*3:0*/ BDMAs2m__DOT__cch_id;
        CData/*7:0*/ BDMAs2m__DOT__s2m_aw_len;
        CData/*0:0*/ BDMAs2m__DOT__s2m_aw_valid;
        CData/*0:0*/ BDMAs2m__DOT__s2m_aw_halt_exec;
        CData/*0:0*/ BDMAs2m__DOT__cycle_finished;
        CData/*0:0*/ BDMAs2m__DOT__s2m_cch_fire;
        CData/*0:0*/ BDMAs2m__DOT__when_BDMAs2m_l83;
        CData/*0:0*/ BDMAs2m__DOT__s2m_aw_fifo_io_push_fire;
        CData/*0:0*/ BDMAs2m__DOT__pending_valid;
        CData/*1:0*/ BDMAs2m__DOT__bytes_shift_pending;
        CData/*3:0*/ BDMAs2m__DOT__strb_mask_pending;
        CData/*7:0*/ BDMAs2m__DOT__len_pending;
        CData/*0:0*/ BDMAs2m__DOT__dma_aw_fire_2;
        CData/*0:0*/ BDMAs2m__DOT__s2m_aw_finish;
        CData/*7:0*/ BDMAs2m__DOT__s2m_axis_len;
        CData/*3:0*/ BDMAs2m__DOT__s2m_strb_mask;
        CData/*1:0*/ BDMAs2m__DOT__s2m_bytes_shift;
        CData/*0:0*/ BDMAs2m__DOT__s2m_axis_last;
        CData/*0:0*/ BDMAs2m__DOT__s2m_axis_leak;
        CData/*3:0*/ BDMAs2m__DOT__w_residual_strb;
        CData/*3:0*/ BDMAs2m__DOT__s2m_w_strb;
        CData/*0:0*/ BDMAs2m__DOT__s2m_w_valid;
        CData/*0:0*/ BDMAs2m__DOT__s2m_w_last;
        CData/*0:0*/ BDMAs2m__DOT__s2m_w_final;
        CData/*0:0*/ BDMAs2m__DOT__pending_fifo_pop_ready;
        CData/*0:0*/ BDMAs2m__DOT__stream_data_valve;
        CData/*0:0*/ BDMAs2m__DOT__len_pending_fifo_io_pop_fire;
        CData/*0:0*/ BDMAs2m__DOT__when_BDMAs2m_l263;
        CData/*0:0*/ BDMAs2m__DOT__s2m_data_stream_fire;
        CData/*0:0*/ BDMAs2m__DOT__when_BDMAs2m_l345;
        CData/*0:0*/ BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_1;
        CData/*0:0*/ BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*2:0*/ BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext;
        CData/*2:0*/ BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement;
        CData/*2:0*/ BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext;
        CData/*2:0*/ BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping;
        CData/*0:0*/ BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full;
        CData/*0:0*/ BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_io_pop_valid;
        CData/*1:0*/ BDMAs2m__DOT__low_addr_fifo__DOT___zz_logic_ram_port0;
        CData/*0:0*/ BDMAs2m__DOT__low_addr_fifo__DOT___zz_1;
        CData/*0:0*/ BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*2:0*/ BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext;
        CData/*2:0*/ BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement;
        CData/*2:0*/ BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext;
        CData/*2:0*/ BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing;
        CData/*0:0*/ BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping;
        CData/*0:0*/ BDMAs2m__DOT__low_addr_fifo__DOT__logic_full;
        CData/*0:0*/ BDMAs2m__DOT__low_addr_fifo__DOT___zz_io_pop_valid;
    };
    struct {
        CData/*1:0*/ BDMAs2m__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0;
        CData/*0:0*/ BDMAs2m__DOT__low_bytes_fifo__DOT___zz_1;
        CData/*0:0*/ BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*2:0*/ BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext;
        CData/*2:0*/ BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement;
        CData/*2:0*/ BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext;
        CData/*2:0*/ BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing;
        CData/*0:0*/ BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping;
        CData/*0:0*/ BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full;
        CData/*0:0*/ BDMAs2m__DOT__low_bytes_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ BDMAs2m__DOT__s2m_w_fifo__DOT___zz_1;
        CData/*0:0*/ BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*4:0*/ BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_valueNext;
        CData/*4:0*/ BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_willIncrement;
        CData/*4:0*/ BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_valueNext;
        CData/*4:0*/ BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ BDMAs2m__DOT__s2m_w_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushing;
        CData/*0:0*/ BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popping;
        CData/*0:0*/ BDMAs2m__DOT__s2m_w_fifo__DOT__logic_full;
        CData/*0:0*/ BDMAs2m__DOT__s2m_w_fifo__DOT___zz_io_pop_valid;
        CData/*1:0*/ BDMAs2m__DOT__bytes_shift_pending_fifo__DOT___zz_logic_ram_port0;
        CData/*0:0*/ BDMAs2m__DOT__bytes_shift_pending_fifo__DOT___zz_1;
        CData/*0:0*/ BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*3:0*/ BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_valueNext;
        CData/*3:0*/ BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_willIncrement;
        CData/*3:0*/ BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_valueNext;
        CData/*3:0*/ BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushing;
        CData/*0:0*/ BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popping;
        CData/*0:0*/ BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_full;
        CData/*0:0*/ BDMAs2m__DOT__bytes_shift_pending_fifo__DOT___zz_io_pop_valid;
        CData/*3:0*/ BDMAs2m__DOT__strb_mask_pending_fifo__DOT___zz_logic_ram_port0;
        CData/*0:0*/ BDMAs2m__DOT__strb_mask_pending_fifo__DOT___zz_1;
        CData/*0:0*/ BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*3:0*/ BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_valueNext;
        CData/*3:0*/ BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_willIncrement;
        CData/*3:0*/ BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_valueNext;
        CData/*3:0*/ BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushing;
        CData/*0:0*/ BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popping;
        CData/*0:0*/ BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_full;
        CData/*0:0*/ BDMAs2m__DOT__strb_mask_pending_fifo__DOT___zz_io_pop_valid;
        CData/*7:0*/ BDMAs2m__DOT__len_pending_fifo__DOT___zz_logic_ram_port0;
        CData/*0:0*/ BDMAs2m__DOT__len_pending_fifo__DOT___zz_1;
        CData/*0:0*/ BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*3:0*/ BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_valueNext;
        CData/*3:0*/ BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement;
        CData/*3:0*/ BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_valueNext;
        CData/*3:0*/ BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ BDMAs2m__DOT__len_pending_fifo__DOT__logic_ptrMatch;
    };
    struct {
        CData/*0:0*/ BDMAs2m__DOT__len_pending_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushing;
        CData/*0:0*/ BDMAs2m__DOT__len_pending_fifo__DOT__logic_full;
        CData/*0:0*/ BDMAs2m__DOT__len_pending_fifo__DOT___zz_io_pop_valid;
        CData/*3:0*/ BDMAs2m__DOT__len_pending_fifo__DOT__logic_ptrDif;
        IData/*31:0*/ BDMAs2m__DOT___zz_when_BDMAs2m_l99;
        IData/*31:0*/ BDMAs2m__DOT___zz_when_BDMAs2m_l134_1;
        IData/*29:0*/ BDMAs2m__DOT__cch_total_bytes;
        IData/*31:0*/ BDMAs2m__DOT__cch_address;
        IData/*29:0*/ BDMAs2m__DOT__trans_bytes_cnt;
        IData/*31:0*/ BDMAs2m__DOT__w_residual_data;
        IData/*31:0*/ BDMAs2m__DOT__s2m_w_data;
        WData/*71:0*/ BDMAs2m__DOT__s2m_cch_state_string[3];
        QData/*48:0*/ BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0;
        QData/*36:0*/ BDMAs2m__DOT__s2m_w_fifo__DOT___zz_logic_ram_port0;
        QData/*48:0*/ BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[8];
        CData/*1:0*/ BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[8];
        CData/*1:0*/ BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[8];
        QData/*36:0*/ BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[32];
        CData/*1:0*/ BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram[12];
        CData/*3:0*/ BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram[12];
        CData/*7:0*/ BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[12];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*1:0*/ BDMAs2m__DOT__bytes_shift_pending_fifo__DOT____Vxrand1;
    CData/*1:0*/ BDMAs2m__DOT__bytes_shift_pending_fifo__DOT____Vlvbound2;
    CData/*3:0*/ BDMAs2m__DOT__strb_mask_pending_fifo__DOT____Vxrand1;
    CData/*3:0*/ BDMAs2m__DOT__strb_mask_pending_fifo__DOT____Vlvbound2;
    CData/*7:0*/ BDMAs2m__DOT__len_pending_fifo__DOT____Vxrand1;
    CData/*7:0*/ BDMAs2m__DOT__len_pending_fifo__DOT____Vlvbound2;
    CData/*1:0*/ __Vtableidx1;
    CData/*1:0*/ __Vdly__BDMAs2m__DOT__s2m_cch_state;
    CData/*0:0*/ __Vdly__BDMAs2m__DOT__s2m_aw_halt_exec;
    CData/*1:0*/ __Vdly__BDMAs2m__DOT__s2m_w_state;
    CData/*7:0*/ __Vdly__BDMAs2m__DOT__s2m_axis_len;
    CData/*2:0*/ __Vdlyvdim0__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0;
    CData/*1:0*/ __Vdlyvval__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0;
    CData/*2:0*/ __Vdlyvdim0__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0;
    CData/*1:0*/ __Vdlyvval__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0;
    CData/*3:0*/ __Vdlyvdim0__BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram__v0;
    CData/*1:0*/ __Vdlyvval__BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram__v0;
    CData/*3:0*/ __Vdlyvdim0__BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram__v0;
    CData/*3:0*/ __Vdlyvval__BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram__v0;
    CData/*3:0*/ __Vdlyvdim0__BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram__v0;
    CData/*7:0*/ __Vdlyvval__BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vdly__BDMAs2m__DOT__cch_address;
    IData/*29:0*/ __Vdly__BDMAs2m__DOT__cch_total_bytes;
    IData/*29:0*/ __Vdly__BDMAs2m__DOT__trans_bytes_cnt;
    IData/*31:0*/ __Vm_traceActivity;
    static WData/*71:0*/ __Vtable1_BDMAs2m__DOT__s2m_cch_state_string[4][3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VBDMAs2m__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VBDMAs2m);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VBDMAs2m(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VBDMAs2m();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VBDMAs2m__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VBDMAs2m__Syms* symsp, bool first);
  private:
    static QData _change_request(VBDMAs2m__Syms* __restrict vlSymsp);
    static QData _change_request_1(VBDMAs2m__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__12(VBDMAs2m__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VBDMAs2m__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VBDMAs2m__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VBDMAs2m__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VBDMAs2m__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__11(VBDMAs2m__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VBDMAs2m__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VBDMAs2m__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VBDMAs2m__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VBDMAs2m__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VBDMAs2m__Syms* __restrict vlSymsp);
    static void _settle__TOP__10(VBDMAs2m__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__9(VBDMAs2m__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__5(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
