// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VDEMODULATORRTL_H_
#define _VDEMODULATORRTL_H_  // guard

#include "verilated.h"

//==========

class VDemodulatorRTL__Syms;
class VDemodulatorRTL_VerilatedVcd;


//----------

VL_MODULE(VDemodulatorRTL) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(select_1,1,0);
    VL_OUT8(data_flow_unit_data_valid,0,0);
    VL_IN8(data_flow_mod_iq_valid,0,0);
    VL_OUT16(data_flow_unit_data_payload,11,0);
    VL_IN16(data_flow_mod_iq_payload_cha_i,11,0);
    VL_IN16(data_flow_mod_iq_payload_cha_q,11,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ DemodulatorRTL__DOT__flowDeMux_1_outputs_1_valid;
    CData/*0:0*/ DemodulatorRTL__DOT__flowDeMux_1_outputs_2_valid;
    CData/*0:0*/ DemodulatorRTL__DOT__demod__DOT__demod_valid_i;
    CData/*0:0*/ DemodulatorRTL__DOT__demod__DOT__compTable_i;
    CData/*0:0*/ DemodulatorRTL__DOT__demod__DOT__demod_valid;
    CData/*0:0*/ DemodulatorRTL__DOT__demod__DOT__unit_data_i;
    CData/*0:0*/ DemodulatorRTL__DOT__demod__DOT__unit_valid;
    CData/*0:0*/ DemodulatorRTL__DOT__demod_1__DOT__demod_valid_i;
    CData/*0:0*/ DemodulatorRTL__DOT__demod_1__DOT__demod_valid_q;
    CData/*0:0*/ DemodulatorRTL__DOT__demod_1__DOT__compTable_i;
    CData/*0:0*/ DemodulatorRTL__DOT__demod_1__DOT__codeTable_q;
    CData/*0:0*/ DemodulatorRTL__DOT__demod_1__DOT__demod_valid;
    CData/*0:0*/ DemodulatorRTL__DOT__demod_1__DOT__unit_data_i;
    CData/*0:0*/ DemodulatorRTL__DOT__demod_1__DOT__unit_data_q;
    CData/*0:0*/ DemodulatorRTL__DOT__demod_1__DOT__unit_valid;
    CData/*0:0*/ DemodulatorRTL__DOT__demod_2__DOT__demod_valid_i;
    CData/*0:0*/ DemodulatorRTL__DOT__demod_2__DOT__demod_valid_q;
    CData/*2:0*/ DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_i;
    CData/*2:0*/ DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_q;
    CData/*2:0*/ DemodulatorRTL__DOT__demod_2__DOT__compTable_i;
    CData/*2:0*/ DemodulatorRTL__DOT__demod_2__DOT__codeTable_q;
    CData/*0:0*/ DemodulatorRTL__DOT__demod_2__DOT__demod_valid;
    CData/*1:0*/ DemodulatorRTL__DOT__demod_2__DOT__unit_data_i;
    CData/*1:0*/ DemodulatorRTL__DOT__demod_2__DOT__unit_data_q;
    CData/*0:0*/ DemodulatorRTL__DOT__demod_2__DOT__unit_valid;
    SData/*11:0*/ DemodulatorRTL__DOT__demod__DOT__demod_data_i;
    SData/*11:0*/ DemodulatorRTL__DOT__demod_1__DOT__demod_data_i;
    SData/*11:0*/ DemodulatorRTL__DOT__demod_1__DOT__demod_data_q;
    SData/*11:0*/ DemodulatorRTL__DOT__demod_2__DOT__demod_data_i;
    SData/*11:0*/ DemodulatorRTL__DOT__demod_2__DOT__demod_data_q;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    CData/*1:0*/ __Vtablechg1[128];
    static CData/*1:0*/ __Vtable1_DemodulatorRTL__DOT__demod_2__DOT__unit_data_i[128];
    static CData/*1:0*/ __Vtable1_DemodulatorRTL__DOT__demod_2__DOT__unit_data_q[128];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VDemodulatorRTL__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VDemodulatorRTL);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VDemodulatorRTL(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VDemodulatorRTL();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VDemodulatorRTL__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VDemodulatorRTL__Syms* symsp, bool first);
  private:
    static QData _change_request(VDemodulatorRTL__Syms* __restrict vlSymsp);
    static QData _change_request_1(VDemodulatorRTL__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(VDemodulatorRTL__Syms* __restrict vlSymsp);
    static void _combo__TOP__6(VDemodulatorRTL__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VDemodulatorRTL__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VDemodulatorRTL__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VDemodulatorRTL__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VDemodulatorRTL__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VDemodulatorRTL__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VDemodulatorRTL__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VDemodulatorRTL__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
