// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VASYNCFIFO_H_
#define _VASYNCFIFO_H_  // guard

#include "verilated.h"

//==========

class VAsyncFIFO__Syms;
class VAsyncFIFO_VerilatedVcd;


//----------

VL_MODULE(VAsyncFIFO) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clkA_clk,0,0);
    VL_IN8(clkA_reset,0,0);
    VL_IN8(clkB_clk,0,0);
    VL_IN8(io_push_valid,0,0);
    VL_OUT8(io_push_ready,0,0);
    VL_OUT8(io_pop_valid,0,0);
    VL_IN8(io_pop_ready,0,0);
    VL_OUT8(io_pushOccupancy,5,0);
    VL_OUT8(io_popOccupancy,5,0);
    VL_IN(io_push_payload,31,0);
    VL_OUT(io_pop_payload,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1;
    CData/*0:0*/ AsyncFIFO__DOT___zz_1;
    CData/*5:0*/ AsyncFIFO__DOT__pushCC_pushPtr;
    CData/*5:0*/ AsyncFIFO__DOT__pushCC_pushPtrPlus;
    CData/*5:0*/ AsyncFIFO__DOT__pushCC_pushPtrGray;
    CData/*0:0*/ AsyncFIFO__DOT__io_push_fire_1;
    CData/*0:0*/ AsyncFIFO__DOT___zz_io_pushOccupancy;
    CData/*0:0*/ AsyncFIFO__DOT___zz_io_pushOccupancy_1;
    CData/*0:0*/ AsyncFIFO__DOT___zz_io_pushOccupancy_2;
    CData/*0:0*/ AsyncFIFO__DOT___zz_io_pushOccupancy_3;
    CData/*5:0*/ AsyncFIFO__DOT__popCC_popPtr;
    CData/*5:0*/ AsyncFIFO__DOT__popCC_popPtrPlus;
    CData/*5:0*/ AsyncFIFO__DOT__popCC_popPtrGray;
    CData/*0:0*/ AsyncFIFO__DOT___zz_io_popOccupancy;
    CData/*0:0*/ AsyncFIFO__DOT___zz_io_popOccupancy_1;
    CData/*0:0*/ AsyncFIFO__DOT___zz_io_popOccupancy_2;
    CData/*0:0*/ AsyncFIFO__DOT___zz_io_popOccupancy_3;
    CData/*5:0*/ AsyncFIFO__DOT__popToPushGray_buffercc__DOT__buffers_0;
    CData/*5:0*/ AsyncFIFO__DOT__popToPushGray_buffercc__DOT__buffers_1;
    CData/*0:0*/ AsyncFIFO__DOT__bufferCC_3__DOT__buffers_0;
    CData/*5:0*/ AsyncFIFO__DOT__pushToPopGray_buffercc__DOT__buffers_0;
    CData/*5:0*/ AsyncFIFO__DOT__pushToPopGray_buffercc__DOT__buffers_1;
    IData/*31:0*/ AsyncFIFO__DOT___zz_ram_port1;
    IData/*31:0*/ AsyncFIFO__DOT__ram[32];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*4:0*/ __Vdlyvdim0__AsyncFIFO__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__AsyncFIFO__DOT__ram__v0;
    CData/*0:0*/ __VinpClk__TOP__AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1;
    CData/*0:0*/ __Vclklast__TOP__clkA_reset;
    CData/*0:0*/ __Vclklast__TOP__clkB_clk;
    CData/*0:0*/ __Vclklast__TOP__clkA_clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1;
    CData/*0:0*/ __Vchglast__TOP__AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1;
    IData/*31:0*/ __Vdlyvval__AsyncFIFO__DOT__ram__v0;
    CData/*0:0*/ __Vm_traceActivity[4];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAsyncFIFO__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAsyncFIFO);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAsyncFIFO(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAsyncFIFO();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAsyncFIFO__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAsyncFIFO__Syms* symsp, bool first);
  private:
    static QData _change_request(VAsyncFIFO__Syms* __restrict vlSymsp);
    static QData _change_request_1(VAsyncFIFO__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__10(VAsyncFIFO__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VAsyncFIFO__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VAsyncFIFO__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAsyncFIFO__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__11(VAsyncFIFO__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VAsyncFIFO__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VAsyncFIFO__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VAsyncFIFO__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VAsyncFIFO__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VAsyncFIFO__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VAsyncFIFO__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VAsyncFIFO__Syms* __restrict vlSymsp);
    static void _settle__TOP__6(VAsyncFIFO__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
