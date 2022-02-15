// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VBDMAm2s_H_
#define _VBDMAm2s_H_

#include "verilated.h"
class VBDMAm2s__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VBDMAm2s) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
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
    VL_IN8(m2s_reset,0,0);
    VL_IN8(m2s_cch_valid,0,0);
    VL_OUT8(m2s_cch_ready,0,0);
    VL_IN8(m2s_cch_payload_desc_burst,1,0);
    VL_IN8(m2s_cch_payload_desc_id,3,0);
    VL_OUT8(m2s_intr,0,0);
    //char	__VpadToAlign25[3];
    VL_OUT(dma_ar_payload_addr,31,0);
    VL_IN(dma_r_payload_data,31,0);
    VL_OUT(m2s_data_stream_payload_data,31,0);
    VL_IN(m2s_cch_payload_desc_start_addr,31,0);
    VL_IN(m2s_cch_payload_desc_total_bytes,29,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_data_fifo_io_pop_valid,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_cch_state,1,0);
    VL_SIG8(BDMAm2s__DOT__m2s_r_state,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_ar_valve,0,0);
    VL_SIG8(BDMAm2s__DOT__cch_ready,0,0);
    VL_SIG8(BDMAm2s__DOT__cch_burst_type,1,0);
    VL_SIG8(BDMAm2s__DOT__cch_id,3,0);
    VL_SIG8(BDMAm2s__DOT__m2s_ar_len,7,0);
    VL_SIG8(BDMAm2s__DOT__m2s_ar_valid,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_ar_halt_exec,0,0);
    VL_SIG8(BDMAm2s__DOT__cycle_finished,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_cch_fire,0,0);
    VL_SIG8(BDMAm2s__DOT__when_BDMAm2s_l86,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_ar_fifo_io_push_fire_1,0,0);
    VL_SIG8(BDMAm2s__DOT__when_BDMAm2s_l149,0,0);
    VL_SIG8(BDMAm2s__DOT__when_BDMAm2s_l161,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_r_valve,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_axis_len,7,0);
    VL_SIG8(BDMAm2s__DOT__m2s_axis_id,3,0);
    VL_SIG8(BDMAm2s__DOT__m2s_axis_strb,3,0);
    VL_SIG8(BDMAm2s__DOT__m2s_axis_keep,3,0);
    VL_SIG8(BDMAm2s__DOT__keep_strb_mask,3,0);
    VL_SIG8(BDMAm2s__DOT__dma_ar_fire_2,0,0);
    VL_SIG8(BDMAm2s__DOT__dma_r_fire,0,0);
    VL_SIG8(BDMAm2s__DOT__when_BDMAm2s_l249,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_1,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext,2,0);
    VL_SIG8(BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value,2,0);
    VL_SIG8(BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext,2,0);
    VL_SIG8(BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value,2,0);
    VL_SIG8(BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_io_pop_valid,0,0);
    VL_SIG8(BDMAm2s__DOT__low_addr_fifo__DOT___zz_logic_ram_port0,1,0);
    VL_SIG8(BDMAm2s__DOT__low_addr_fifo__DOT___zz_1,0,0);
    VL_SIG8(BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement,0,0);
    VL_SIG8(BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext,2,0);
    VL_SIG8(BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value,2,0);
    VL_SIG8(BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement,0,0);
    VL_SIG8(BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext,2,0);
    VL_SIG8(BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value,2,0);
    VL_SIG8(BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch,0,0);
    VL_SIG8(BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy,0,0);
    VL_SIG8(BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing,0,0);
    VL_SIG8(BDMAm2s__DOT__low_addr_fifo__DOT__logic_popping,0,0);
    VL_SIG8(BDMAm2s__DOT__low_addr_fifo__DOT__logic_full,0,0);
    VL_SIG8(BDMAm2s__DOT__low_addr_fifo__DOT___zz_io_pop_valid,0,0);
    VL_SIG8(BDMAm2s__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0,1,0);
    VL_SIG8(BDMAm2s__DOT__low_bytes_fifo__DOT___zz_1,0,0);
    VL_SIG8(BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement,0,0);
    VL_SIG8(BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext,2,0);
    VL_SIG8(BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value,2,0);
    VL_SIG8(BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement,0,0);
    VL_SIG8(BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext,2,0);
    VL_SIG8(BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value,2,0);
    VL_SIG8(BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch,0,0);
    VL_SIG8(BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy,0,0);
    VL_SIG8(BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing,0,0);
    VL_SIG8(BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popping,0,0);
    VL_SIG8(BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full,0,0);
    VL_SIG8(BDMAm2s__DOT__low_bytes_fifo__DOT___zz_io_pop_valid,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_data_fifo__DOT___zz_1,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext,4,0);
    VL_SIG8(BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value,4,0);
    VL_SIG8(BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext,4,0);
    VL_SIG8(BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value,4,0);
    VL_SIG8(BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full,0,0);
    VL_SIG8(BDMAm2s__DOT__m2s_data_fifo__DOT___zz_io_pop_valid,0,0);
    //char	__VpadToAlign131[1];
    VL_SIG(BDMAm2s__DOT___zz_when_BDMAm2s_l102,31,0);
    VL_SIG(BDMAm2s__DOT___zz_m2s_ar_len_2,31,0);
    VL_SIG(BDMAm2s__DOT___zz_cch_address,31,0);
    VL_SIG(BDMAm2s__DOT___zz_when_BDMAm2s_l137_1,31,0);
    VL_SIG(BDMAm2s__DOT___zz_trans_bytes_cnt_1,31,0);
    VL_SIG(BDMAm2s__DOT___zz_trans_bytes_cnt_2,31,0);
    VL_SIG(BDMAm2s__DOT___zz_trans_bytes_cnt_4,31,0);
    VL_SIG(BDMAm2s__DOT__cch_total_bytes,29,0);
    VL_SIG(BDMAm2s__DOT__cch_address,31,0);
    VL_SIG(BDMAm2s__DOT__trans_bytes_cnt,29,0);
    //char	__VpadToAlign172[4];
    VL_SIGW(BDMAm2s__DOT__m2s_cch_state_string,71,0,3);
    //char	__VpadToAlign188[4];
    VL_SIG64(BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0,48,0);
    VL_SIG64(BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0,44,0);
    VL_SIG64(BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[8],48,0);
    VL_SIG8(BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[8],1,0);
    VL_SIG8(BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[8],1,0);
    VL_SIG64(BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[32],44,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIGW(__Vtable1_BDMAm2s__DOT__m2s_cch_state_string[4],71,0,3);
    VL_SIG8(__Vtableidx1,1,0);
    VL_SIG8(__Vdly__BDMAm2s__DOT__m2s_cch_state,1,0);
    VL_SIG8(__Vdly__BDMAm2s__DOT__m2s_r_state,0,0);
    VL_SIG8(__Vdly__BDMAm2s__DOT__m2s_ar_halt_exec,0,0);
    VL_SIG8(__Vdly__BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value,2,0);
    VL_SIG8(__Vdly__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value,2,0);
    VL_SIG8(__Vdly__BDMAm2s__DOT__m2s_axis_len,7,0);
    VL_SIG8(__Vdlyvset__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0,0,0);
    VL_SIG8(__Vdlyvdim0__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0,2,0);
    VL_SIG8(__Vdlyvval__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0,1,0);
    VL_SIG8(__Vdlyvset__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0,0,0);
    VL_SIG8(__Vdlyvdim0__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0,2,0);
    VL_SIG8(__Vdlyvval__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0,1,0);
    VL_SIG8(__Vdlyvset__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0,0,0);
    VL_SIG8(__Vdlyvdim0__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0,4,0);
    VL_SIG8(__Vdlyvset__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0,0,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    //char	__VpadToAlign566[2];
    VL_SIG(__Vdly__BDMAm2s__DOT__cch_address,31,0);
    VL_SIG(__Vdly__BDMAm2s__DOT__cch_total_bytes,29,0);
    VL_SIG(__Vdly__BDMAm2s__DOT__trans_bytes_cnt,29,0);
    VL_SIG(__Vm_traceActivity,31,0);
    VL_SIG64(__Vdlyvval__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0,44,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign596[4];
    VBDMAm2s__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VBDMAm2s& operator= (const VBDMAm2s&);	///< Copying not allowed
    VBDMAm2s(const VBDMAm2s&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VBDMAm2s(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VBDMAm2s();
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
    static void _eval_initial_loop(VBDMAm2s__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VBDMAm2s__Syms* symsp, bool first);
  private:
    static QData	_change_request(VBDMAm2s__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VBDMAm2s__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__10(VBDMAm2s__Syms* __restrict vlSymsp);
    static void	_combo__TOP__13(VBDMAm2s__Syms* __restrict vlSymsp);
    static void	_combo__TOP__15(VBDMAm2s__Syms* __restrict vlSymsp);
    static void	_combo__TOP__7(VBDMAm2s__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VBDMAm2s__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VBDMAm2s__Syms* __restrict vlSymsp);
    static void	_eval_initial(VBDMAm2s__Syms* __restrict vlSymsp);
    static void	_eval_settle(VBDMAm2s__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(VBDMAm2s__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__11(VBDMAm2s__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(VBDMAm2s__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(VBDMAm2s__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(VBDMAm2s__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(VBDMAm2s__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(VBDMAm2s__Syms* __restrict vlSymsp);
    static void	_settle__TOP__12(VBDMAm2s__Syms* __restrict vlSymsp);
    static void	_settle__TOP__14(VBDMAm2s__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(VBDMAm2s__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(VBDMAm2s__Syms* __restrict vlSymsp);
    static void	traceChgThis(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__10(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__11(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__12(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__13(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__15(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__16(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__6(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__7(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__8(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__9(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__14(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
