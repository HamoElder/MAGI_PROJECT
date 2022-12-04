// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VGMSKMOD_H_
#define _VGMSKMOD_H_  // guard

#include "verilated_heavy.h"

//==========

class VGMSKMod__Syms;
class VGMSKMod_VerilatedVcd;


//----------

VL_MODULE(VGMSKMod) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(unit_data_valid,0,0);
    VL_IN8(unit_data_payload_last,0,0);
    VL_IN8(unit_data_payload_fragment,0,0);
    VL_OUT8(mod_iq_valid,0,0);
    VL_OUT8(mod_iq_payload_last,0,0);
    VL_OUT16(mod_iq_payload_fragment_cha_i,15,0);
    VL_OUT16(mod_iq_payload_fragment_cha_q,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ GMSKMod__DOT__mod_valid_next;
    CData/*0:0*/ GMSKMod__DOT__mod_last_next;
    CData/*0:0*/ GMSKMod__DOT__mod_valid_next_regNext;
    CData/*0:0*/ GMSKMod__DOT__mod_last_next_regNext;
    CData/*0:0*/ GMSKMod__DOT__symbol_filter__DOT__raw_valid_next;
    CData/*0:0*/ GMSKMod__DOT__symbol_filter__DOT__raw_last_next;
    CData/*1:0*/ GMSKMod__DOT__symbol_filter__DOT__data_buf_0;
    CData/*1:0*/ GMSKMod__DOT__symbol_filter__DOT__data_buf_1;
    CData/*1:0*/ GMSKMod__DOT__symbol_filter__DOT__data_buf_2;
    CData/*0:0*/ GMSKMod__DOT__symbol_filter__DOT__raw_valid_next_regNext;
    CData/*0:0*/ GMSKMod__DOT__symbol_filter__DOT__raw_last_next_regNext;
    SData/*15:0*/ GMSKMod__DOT___zz_cosTable_port0;
    SData/*15:0*/ GMSKMod__DOT___zz_sinTable_port0;
    SData/*13:0*/ GMSKMod__DOT___zz_phi_integral_1;
    SData/*13:0*/ GMSKMod__DOT__phi_integral;
    SData/*13:0*/ GMSKMod__DOT__symbol_filter__DOT__filtered_data;
    SData/*15:0*/ GMSKMod__DOT__cosTable[8192];
    SData/*15:0*/ GMSKMod__DOT__sinTable[8192];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*1:0*/ __Vdly__GMSKMod__DOT__symbol_filter__DOT__data_buf_0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    SData/*13:0*/ __Vdly__GMSKMod__DOT__phi_integral;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VGMSKMod__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VGMSKMod);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VGMSKMod(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VGMSKMod();
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
    static void _eval_initial_loop(VGMSKMod__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VGMSKMod__Syms* symsp, bool first);
  private:
    static QData _change_request(VGMSKMod__Syms* __restrict vlSymsp);
    static QData _change_request_1(VGMSKMod__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VGMSKMod__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VGMSKMod__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VGMSKMod__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__4(VGMSKMod__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VGMSKMod__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VGMSKMod__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VGMSKMod__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VGMSKMod__Syms* __restrict vlSymsp);
    static void _settle__TOP__5(VGMSKMod__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
