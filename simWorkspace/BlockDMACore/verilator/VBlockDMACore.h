// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VBlockDMACore_H_
#define _VBlockDMACore_H_

#include "verilated.h"
class VBlockDMACore__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VBlockDMACore) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(axi4Data_ar_valid,0,0);
    VL_IN8(axi4Data_ar_ready,0,0);
    VL_OUT8(axi4Data_ar_payload_id,3,0);
    VL_OUT8(axi4Data_ar_payload_len,7,0);
    VL_OUT8(axi4Data_ar_payload_size,2,0);
    VL_OUT8(axi4Data_ar_payload_burst,1,0);
    VL_IN8(axi4Data_r_valid,0,0);
    VL_OUT8(axi4Data_r_ready,0,0);
    VL_IN8(axi4Data_r_payload_id,3,0);
    VL_IN8(axi4Data_r_payload_resp,1,0);
    VL_IN8(axi4Data_r_payload_last,0,0);
    VL_IN8(m2s_desc_valid,0,0);
    VL_OUT8(m2s_desc_ready,0,0);
    VL_IN8(m2s_desc_burst,1,0);
    VL_IN8(m2s_desc_id,3,0);
    VL_IN8(m2s_intr_en,0,0);
    VL_OUT8(intr_m2s,0,0);
    //char	__VpadToAlign19[1];
    VL_OUT16(axi4Data_ar_payload_addr,15,0);
    VL_IN16(m2s_desc_addr,15,0);
    VL_IN(axi4Data_r_payload_data,31,0);
    VL_IN(m2s_desc_total_bytes,29,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state,1,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__cch_ready,0,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__fifo_in_id,3,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__fifo_in_len,7,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__fifo_in_burst,1,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__fifo_in_valid,0,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__dma_cch_fire,0,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__when_BlockDMARead_l67,0,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__when_BlockDMARead_l75,0,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo_io_push_fire,0,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__when_BlockDMARead_l92,0,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__dma_rd_axi_state,1,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__m2s_strb,3,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_1,0,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_willIncrement,0,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_valueNext,1,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value,1,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_valueNext,1,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value,1,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ptrMatch,0,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy,0,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_full,0,0);
    VL_SIG8(BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_io_pop_valid,0,0);
    //char	__VpadToAlign59[1];
    VL_SIG16(BlockDMACore__DOT__m2s_inst__DOT___zz_fifo_in_len,13,0);
    VL_SIG16(BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr,15,0);
    VL_SIG(BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes,29,0);
    //char	__VpadToAlign68[4];
    VL_SIG64(BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_logic_ram_port0,32,0);
    VL_SIG64(BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram[4],32,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    //char	__VpadToAlign118[2];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VBlockDMACore__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VBlockDMACore& operator= (const VBlockDMACore&);	///< Copying not allowed
    VBlockDMACore(const VBlockDMACore&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VBlockDMACore(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VBlockDMACore();
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
    static void _eval_initial_loop(VBlockDMACore__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VBlockDMACore__Syms* symsp, bool first);
  private:
    static QData	_change_request(VBlockDMACore__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VBlockDMACore__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__2(VBlockDMACore__Syms* __restrict vlSymsp);
    static void	_combo__TOP__6(VBlockDMACore__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VBlockDMACore__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VBlockDMACore__Syms* __restrict vlSymsp);
    static void	_eval_initial(VBlockDMACore__Syms* __restrict vlSymsp);
    static void	_eval_settle(VBlockDMACore__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(VBlockDMACore__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(VBlockDMACore__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(VBlockDMACore__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__9(VBlockDMACore__Syms* __restrict vlSymsp);
    static void	_settle__TOP__1(VBlockDMACore__Syms* __restrict vlSymsp);
    static void	_settle__TOP__10(VBlockDMACore__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(VBlockDMACore__Syms* __restrict vlSymsp);
    static void	_settle__TOP__8(VBlockDMACore__Syms* __restrict vlSymsp);
    static void	traceChgThis(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__6(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__7(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__8(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
