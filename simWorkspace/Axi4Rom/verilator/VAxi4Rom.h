// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAXI4ROM_H_
#define _VAXI4ROM_H_  // guard

#include "verilated_heavy.h"

//==========

class VAxi4Rom__Syms;
class VAxi4Rom_VerilatedVcd;


//----------

VL_MODULE(VAxi4Rom) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(axi4_arvalid,0,0);
    VL_OUT8(axi4_arready,0,0);
    VL_IN8(axi4_arid,7,0);
    VL_IN8(axi4_arlen,7,0);
    VL_IN8(axi4_arsize,2,0);
    VL_IN8(axi4_arburst,1,0);
    VL_OUT8(axi4_rvalid,0,0);
    VL_IN8(axi4_rready,0,0);
    VL_OUT8(axi4_rid,7,0);
    VL_OUT8(axi4_rresp,1,0);
    VL_OUT8(axi4_rlast,0,0);
    VL_IN16(axi4_araddr,12,0);
    VL_OUT(axi4_rdata,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ Axi4Rom__DOT__ar_fifo_io_pop_valid;
    CData/*0:0*/ Axi4Rom__DOT__r_fifo_io_pop_valid;
    CData/*0:0*/ Axi4Rom__DOT__axi4_r_state;
    CData/*7:0*/ Axi4Rom__DOT__rd_cnt;
    CData/*7:0*/ Axi4Rom__DOT__rd_id;
    CData/*2:0*/ Axi4Rom__DOT__rd_size;
    CData/*1:0*/ Axi4Rom__DOT__rd_burst;
    CData/*0:0*/ Axi4Rom__DOT___zz_io_push_payload_last;
    CData/*0:0*/ Axi4Rom__DOT___zz_io_push_valid;
    CData/*0:0*/ Axi4Rom__DOT__ar_fifo__DOT___zz_1;
    CData/*0:0*/ Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement;
    CData/*1:0*/ Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_valueNext;
    CData/*1:0*/ Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value;
    CData/*0:0*/ Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_willIncrement;
    CData/*1:0*/ Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_valueNext;
    CData/*1:0*/ Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_value;
    CData/*0:0*/ Axi4Rom__DOT__ar_fifo__DOT__logic_ptrMatch;
    CData/*0:0*/ Axi4Rom__DOT__ar_fifo__DOT__logic_risingOccupancy;
    CData/*0:0*/ Axi4Rom__DOT__ar_fifo__DOT__logic_pushing;
    CData/*0:0*/ Axi4Rom__DOT__ar_fifo__DOT__logic_popping;
    CData/*0:0*/ Axi4Rom__DOT__ar_fifo__DOT__logic_full;
    CData/*0:0*/ Axi4Rom__DOT__ar_fifo__DOT___zz_io_pop_valid;
    CData/*0:0*/ Axi4Rom__DOT__r_fifo__DOT___zz_1;
    CData/*0:0*/ Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_willIncrement;
    CData/*1:0*/ Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_valueNext;
    CData/*1:0*/ Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value;
    CData/*0:0*/ Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_willIncrement;
    CData/*1:0*/ Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_valueNext;
    CData/*1:0*/ Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_value;
    CData/*0:0*/ Axi4Rom__DOT__r_fifo__DOT__logic_ptrMatch;
    CData/*0:0*/ Axi4Rom__DOT__r_fifo__DOT__logic_risingOccupancy;
    CData/*0:0*/ Axi4Rom__DOT__r_fifo__DOT__logic_pushing;
    CData/*0:0*/ Axi4Rom__DOT__r_fifo__DOT__logic_popping;
    CData/*0:0*/ Axi4Rom__DOT__r_fifo__DOT__logic_full;
    CData/*0:0*/ Axi4Rom__DOT__r_fifo__DOT___zz_io_pop_valid;
    SData/*12:0*/ Axi4Rom__DOT___zz_rd_addr;
    SData/*12:0*/ Axi4Rom__DOT__rd_addr;
    IData/*31:0*/ Axi4Rom__DOT___zz_rom_port0;
    QData/*33:0*/ Axi4Rom__DOT__ar_fifo__DOT___zz_logic_ram_port0;
    QData/*42:0*/ Axi4Rom__DOT__r_fifo__DOT___zz_logic_ram_port0;
    IData/*31:0*/ Axi4Rom__DOT__rom[2048];
    QData/*33:0*/ Axi4Rom__DOT__ar_fifo__DOT__logic_ram[4];
    QData/*42:0*/ Axi4Rom__DOT__r_fifo__DOT__logic_ram[4];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*7:0*/ __Vdly__Axi4Rom__DOT__rd_cnt;
    CData/*1:0*/ __Vdlyvdim0__Axi4Rom__DOT__ar_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__Axi4Rom__DOT__ar_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    QData/*33:0*/ __Vdlyvval__Axi4Rom__DOT__ar_fifo__DOT__logic_ram__v0;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAxi4Rom__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAxi4Rom);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAxi4Rom(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAxi4Rom();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAxi4Rom__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAxi4Rom__Syms* symsp, bool first);
  private:
    static QData _change_request(VAxi4Rom__Syms* __restrict vlSymsp);
    static QData _change_request_1(VAxi4Rom__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__7(VAxi4Rom__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VAxi4Rom__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VAxi4Rom__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAxi4Rom__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__5(VAxi4Rom__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VAxi4Rom__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VAxi4Rom__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VAxi4Rom__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VAxi4Rom__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(VAxi4Rom__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
