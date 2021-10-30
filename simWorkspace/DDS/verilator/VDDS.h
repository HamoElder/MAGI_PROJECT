// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VDDS_H_
#define _VDDS_H_  // guard

#include "verilated_heavy.h"

//==========

class VDDS__Syms;
class VDDS_VerilatedVcd;


//----------

VL_MODULE(VDDS) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(data_valid,0,0);
    VL_OUT8(phase_valid,0,0);
    VL_IN8(channel_en,0,0);
    VL_IN8(sync_en,0,0);
    VL_OUT16(data_payload,15,0);
    VL_OUT16(phase_payload,9,0);
    VL_IN16(phase_limit,9,0);
    VL_IN16(phase_offset,9,0);
    VL_IN16(phase_inc,9,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ DDS__DOT__module_en;
    CData/*0:0*/ DDS__DOT__when_DDS_l53;
    CData/*0:0*/ DDS__DOT__valid_o_buf;
    SData/*15:0*/ DDS__DOT___zz_mem_port0;
    SData/*9:0*/ DDS__DOT___zz_phase_cursor;
    SData/*9:0*/ DDS__DOT__phase_cursor;
    SData/*9:0*/ DDS__DOT___zz_phase_payload;
    SData/*15:0*/ DDS__DOT__mem[1024];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VDDS__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VDDS);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VDDS(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VDDS();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VDDS__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VDDS__Syms* symsp, bool first);
  private:
    static QData _change_request(VDDS__Syms* __restrict vlSymsp);
    static QData _change_request_1(VDDS__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__6(VDDS__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VDDS__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VDDS__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VDDS__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__3(VDDS__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VDDS__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VDDS__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VDDS__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(VDDS__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VDDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VDDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VDDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VDDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VDDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VDDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VDDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VDDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VDDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
