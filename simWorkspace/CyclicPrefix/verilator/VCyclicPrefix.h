// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCYCLICPREFIX_H_
#define _VCYCLICPREFIX_H_  // guard

#include "verilated.h"

//==========

class VCyclicPrefix__Syms;
class VCyclicPrefix_VerilatedVcd;


//----------

VL_MODULE(VCyclicPrefix) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(cp_len,1,0);
    VL_IN8(data_len,3,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_ready,0,0);
    VL_IN8(raw_data_payload_last,0,0);
    VL_OUT8(result_valid,0,0);
    VL_OUT8(result_payload_last,0,0);
    VL_IN(raw_data_payload_fragment_cha_i,31,0);
    VL_IN(raw_data_payload_fragment_cha_q,31,0);
    VL_OUT(result_payload_fragment_cha_i,31,0);
    VL_OUT(result_payload_fragment_cha_q,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ CyclicPrefix__DOT__raw_dataFifo_io_pop_valid;
    CData/*3:0*/ CyclicPrefix__DOT__raw_dataFifo_io_occupancy;
    CData/*0:0*/ CyclicPrefix__DOT__cp_en;
    CData/*0:0*/ CyclicPrefix__DOT__fifo_pop_en;
    CData/*1:0*/ CyclicPrefix__DOT__cp_state;
    CData/*0:0*/ CyclicPrefix__DOT__raw_dataFifo__DOT___zz_1;
    CData/*0:0*/ CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_willIncrement;
    CData/*2:0*/ CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_valueNext;
    CData/*2:0*/ CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_value;
    CData/*0:0*/ CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_willIncrement;
    CData/*2:0*/ CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_valueNext;
    CData/*2:0*/ CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_value;
    CData/*0:0*/ CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ptrMatch;
    CData/*0:0*/ CyclicPrefix__DOT__raw_dataFifo__DOT__logic_risingOccupancy;
    CData/*0:0*/ CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushing;
    CData/*0:0*/ CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popping;
    CData/*0:0*/ CyclicPrefix__DOT__raw_dataFifo__DOT__logic_full;
    CData/*0:0*/ CyclicPrefix__DOT__raw_dataFifo__DOT___zz_io_pop_valid;
    WData/*64:0*/ CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[3];
    WData/*64:0*/ CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[8][3];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*2:0*/ __Vdlyvdim0__CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    WData/*64:0*/ __Vdlyvval__CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram__v0[3];
    IData/*31:0*/ __Vm_traceActivity;
    CData/*2:0*/ __Vtablechg1[128];
    static CData/*0:0*/ __Vtable1_CyclicPrefix__DOT__cp_en[128];
    static CData/*0:0*/ __Vtable1_CyclicPrefix__DOT__fifo_pop_en[128];
    static CData/*1:0*/ __Vtable1_CyclicPrefix__DOT__cp_state[128];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCyclicPrefix__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCyclicPrefix);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VCyclicPrefix(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCyclicPrefix();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VCyclicPrefix__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCyclicPrefix__Syms* symsp, bool first);
  private:
    static QData _change_request(VCyclicPrefix__Syms* __restrict vlSymsp);
    static QData _change_request_1(VCyclicPrefix__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__5(VCyclicPrefix__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VCyclicPrefix__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VCyclicPrefix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VCyclicPrefix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VCyclicPrefix__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VCyclicPrefix__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VCyclicPrefix__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VCyclicPrefix__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VCyclicPrefix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
