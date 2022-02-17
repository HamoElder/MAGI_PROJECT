// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VBDMAs2m_H_
#define _VBDMAs2m_H_

#include "verilated.h"
class VBDMAs2m__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VBDMAs2m) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
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
    VL_IN8(s2m_reset,0,0);
    VL_IN8(s2m_cch_valid,0,0);
    VL_OUT8(s2m_cch_ready,0,0);
    VL_IN8(s2m_cch_payload_desc_burst,1,0);
    VL_IN8(s2m_cch_payload_desc_id,3,0);
    VL_OUT8(s2m_intr,0,0);
    VL_OUT(dma_aw_payload_addr,31,0);
    VL_OUT(dma_w_payload_data,31,0);
    VL_IN(s2m_data_stream_payload_data,31,0);
    VL_IN(s2m_cch_payload_desc_start_addr,31,0);
    VL_IN(s2m_cch_payload_desc_total_bytes,29,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid,0,0);
    VL_SIG8(BDMAs2m__DOT___zz_s2m_w_strb,7,0);
    VL_SIG8(BDMAs2m__DOT__s2m_cch_state,1,0);
    VL_SIG8(BDMAs2m__DOT__s2m_w_state,1,0);
    VL_SIG8(BDMAs2m__DOT__s2m_aw_valve,0,0);
    VL_SIG8(BDMAs2m__DOT__s2m_data_valve,0,0);
    VL_SIG8(BDMAs2m__DOT__cch_ready,0,0);
    VL_SIG8(BDMAs2m__DOT__cch_burst_type,1,0);
    VL_SIG8(BDMAs2m__DOT__cch_id,3,0);
    VL_SIG8(BDMAs2m__DOT__s2m_aw_len,7,0);
    VL_SIG8(BDMAs2m__DOT__s2m_aw_valid,0,0);
    VL_SIG8(BDMAs2m__DOT__s2m_aw_halt_exec,0,0);
    VL_SIG8(BDMAs2m__DOT__cycle_finished,0,0);
    VL_SIG8(BDMAs2m__DOT__s2m_cch_fire,0,0);
    VL_SIG8(BDMAs2m__DOT__when_BDMAs2m_l90,0,0);
    VL_SIG8(BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1,0,0);
    VL_SIG8(BDMAs2m__DOT__when_BDMAs2m_l153,0,0);
    VL_SIG8(BDMAs2m__DOT__when_BDMAs2m_l165,0,0);
    VL_SIG8(BDMAs2m__DOT__s2m_w_strb,3,0);
    VL_SIG8(BDMAs2m__DOT__s2m_w_valid,0,0);
    VL_SIG8(BDMAs2m__DOT__s2m_b_ready,0,0);
    VL_SIG8(BDMAs2m__DOT__w_residual_strb,3,0);
    VL_SIG8(BDMAs2m__DOT__s2m_axis_len,7,0);
    VL_SIG8(BDMAs2m__DOT__strb_mask,3,0);
    VL_SIG8(BDMAs2m__DOT__bytes_shift,1,0);
    VL_SIG8(BDMAs2m__DOT__dma_aw_fire_2,0,0);
    VL_SIG8(BDMAs2m__DOT__dma_w_fire,0,0);
    VL_SIG8(BDMAs2m__DOT__s2m_data_stream_fire,0,0);
    VL_SIG8(BDMAs2m__DOT__when_BDMAs2m_l293,0,0);
    VL_SIG8(BDMAs2m__DOT__when_BDMAs2m_l295,0,0);
    VL_SIG8(BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_1,0,0);
    VL_SIG8(BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement,0,0);
    VL_SIG8(BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext,2,0);
    VL_SIG8(BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value,2,0);
    VL_SIG8(BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement,0,0);
    VL_SIG8(BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext,2,0);
    VL_SIG8(BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value,2,0);
    VL_SIG8(BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch,0,0);
    VL_SIG8(BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy,0,0);
    VL_SIG8(BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping,0,0);
    VL_SIG8(BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full,0,0);
    VL_SIG8(BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_io_pop_valid,0,0);
    VL_SIG8(BDMAs2m__DOT__low_addr_fifo__DOT___zz_logic_ram_port0,1,0);
    VL_SIG8(BDMAs2m__DOT__low_addr_fifo__DOT___zz_1,0,0);
    VL_SIG8(BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement,0,0);
    VL_SIG8(BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext,2,0);
    VL_SIG8(BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value,2,0);
    VL_SIG8(BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement,0,0);
    VL_SIG8(BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext,2,0);
    VL_SIG8(BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value,2,0);
    VL_SIG8(BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch,0,0);
    VL_SIG8(BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy,0,0);
    VL_SIG8(BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing,0,0);
    VL_SIG8(BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping,0,0);
    VL_SIG8(BDMAs2m__DOT__low_addr_fifo__DOT__logic_full,0,0);
    VL_SIG8(BDMAs2m__DOT__low_addr_fifo__DOT___zz_io_pop_valid,0,0);
    VL_SIG8(BDMAs2m__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0,1,0);
    VL_SIG8(BDMAs2m__DOT__low_bytes_fifo__DOT___zz_1,0,0);
    VL_SIG8(BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement,0,0);
    VL_SIG8(BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext,2,0);
    VL_SIG8(BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value,2,0);
    VL_SIG8(BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement,0,0);
    VL_SIG8(BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext,2,0);
    VL_SIG8(BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value,2,0);
    VL_SIG8(BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch,0,0);
    VL_SIG8(BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy,0,0);
    VL_SIG8(BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing,0,0);
    VL_SIG8(BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping,0,0);
    VL_SIG8(BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full,0,0);
    VL_SIG8(BDMAs2m__DOT__low_bytes_fifo__DOT___zz_io_pop_valid,0,0);
    //char	__VpadToAlign122[2];
    VL_SIG(BDMAs2m__DOT___zz_when_BDMAs2m_l106,31,0);
    VL_SIG(BDMAs2m__DOT___zz_s2m_aw_len_2,31,0);
    VL_SIG(BDMAs2m__DOT___zz_cch_address,31,0);
    VL_SIG(BDMAs2m__DOT___zz_when_BDMAs2m_l141_1,31,0);
    VL_SIG(BDMAs2m__DOT___zz_trans_bytes_cnt_1,31,0);
    VL_SIG(BDMAs2m__DOT___zz_trans_bytes_cnt_2,31,0);
    VL_SIG(BDMAs2m__DOT___zz_trans_bytes_cnt_4,31,0);
    VL_SIG(BDMAs2m__DOT__cch_total_bytes,29,0);
    VL_SIG(BDMAs2m__DOT__cch_address,31,0);
    VL_SIG(BDMAs2m__DOT__trans_bytes_cnt,29,0);
    VL_SIG(BDMAs2m__DOT__s2m_w_data,31,0);
    VL_SIG(BDMAs2m__DOT__w_residual_data,31,0);
    //char	__VpadToAlign172[4];
    VL_SIGW(BDMAs2m__DOT__s2m_cch_state_string,71,0,3);
    //char	__VpadToAlign188[4];
    VL_SIG64(BDMAs2m__DOT___zz_s2m_w_data,63,0);
    VL_SIG64(BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0,48,0);
    VL_SIG64(BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[8],48,0);
    VL_SIG8(BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[8],1,0);
    VL_SIG8(BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[8],1,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIGW(__Vtable1_BDMAs2m__DOT__s2m_cch_state_string[4],71,0,3);
    VL_SIG8(__Vtableidx1,1,0);
    VL_SIG8(__Vdly__BDMAs2m__DOT__s2m_cch_state,1,0);
    VL_SIG8(__Vdly__BDMAs2m__DOT__s2m_w_state,1,0);
    VL_SIG8(__Vdly__BDMAs2m__DOT__s2m_aw_halt_exec,0,0);
    VL_SIG8(__Vdly__BDMAs2m__DOT__s2m_axis_len,7,0);
    VL_SIG8(__Vdlyvdim0__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0,2,0);
    VL_SIG8(__Vdlyvset__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0,0,0);
    VL_SIG8(__Vdlyvdim0__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0,2,0);
    VL_SIG8(__Vdlyvval__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0,1,0);
    VL_SIG8(__Vdlyvset__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0,0,0);
    VL_SIG8(__Vdlyvdim0__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0,2,0);
    VL_SIG8(__Vdlyvval__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0,1,0);
    VL_SIG8(__Vdlyvset__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0,0,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    //char	__VpadToAlign307[1];
    VL_SIG(__Vdly__BDMAs2m__DOT__cch_address,31,0);
    VL_SIG(__Vdly__BDMAs2m__DOT__cch_total_bytes,29,0);
    VL_SIG(__Vdly__BDMAs2m__DOT__trans_bytes_cnt,29,0);
    VL_SIG(__Vm_traceActivity,31,0);
    //char	__VpadToAlign324[4];
    VL_SIG64(__Vdlyvval__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0,48,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign340[4];
    VBDMAs2m__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VBDMAs2m& operator= (const VBDMAs2m&);	///< Copying not allowed
    VBDMAs2m(const VBDMAs2m&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VBDMAs2m(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VBDMAs2m();
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
    static void _eval_initial_loop(VBDMAs2m__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VBDMAs2m__Syms* symsp, bool first);
  private:
    static QData	_change_request(VBDMAs2m__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VBDMAs2m__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__11(VBDMAs2m__Syms* __restrict vlSymsp);
    static void	_combo__TOP__13(VBDMAs2m__Syms* __restrict vlSymsp);
    static void	_combo__TOP__6(VBDMAs2m__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VBDMAs2m__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VBDMAs2m__Syms* __restrict vlSymsp);
    static void	_eval_initial(VBDMAs2m__Syms* __restrict vlSymsp);
    static void	_eval_settle(VBDMAs2m__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(VBDMAs2m__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__10(VBDMAs2m__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(VBDMAs2m__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(VBDMAs2m__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(VBDMAs2m__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(VBDMAs2m__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(VBDMAs2m__Syms* __restrict vlSymsp);
    static void	_settle__TOP__12(VBDMAs2m__Syms* __restrict vlSymsp);
    static void	_settle__TOP__14(VBDMAs2m__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(VBDMAs2m__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(VBDMAs2m__Syms* __restrict vlSymsp);
    static void	traceChgThis(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__10(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__11(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__12(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__6(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__7(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__8(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__9(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__13(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
