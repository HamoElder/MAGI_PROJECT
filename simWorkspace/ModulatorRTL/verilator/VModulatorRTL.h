// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMODULATORRTL_H_
#define _VMODULATORRTL_H_  // guard

#include "verilated.h"

//==========

class VModulatorRTL__Syms;
class VModulatorRTL_VerilatedVcd;


//----------

VL_MODULE(VModulatorRTL) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(data_flow_unit_data_valid,0,0);
    VL_IN8(data_flow_unit_data_payload_last,0,0);
    VL_IN8(data_flow_unit_data_payload_fragment,7,0);
    VL_OUT8(data_flow_mod_iq_valid,0,0);
    VL_OUT8(data_flow_mod_iq_payload_last,0,0);
    VL_IN8(w_en,1,0);
    VL_IN8(select_1,2,0);
    VL_OUT16(data_flow_mod_iq_payload_fragment_cha_i,11,0);
    VL_OUT16(data_flow_mod_iq_payload_fragment_cha_q,11,0);
    VL_IN(w_addr,31,0);
    VL_IN(w_data,31,0);
    VL_IN(cnt_limit,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ ModulatorRTL__DOT__flowDeMux_1_outputs_0_payload_last;
    CData/*0:0*/ ModulatorRTL__DOT__flowDeMux_1_outputs_1_payload_last;
    CData/*0:0*/ ModulatorRTL__DOT__flowDeMux_1_outputs_2_payload_last;
    CData/*0:0*/ ModulatorRTL__DOT__flowDeMux_1_outputs_3_payload_last;
    CData/*0:0*/ ModulatorRTL__DOT__flowDeMux_1_outputs_4_valid;
    CData/*0:0*/ ModulatorRTL__DOT__flowDeMux_1_outputs_4_payload_last;
    CData/*0:0*/ ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last;
    CData/*0:0*/ ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment;
    CData/*0:0*/ ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid;
    CData/*0:0*/ ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last;
    CData/*0:0*/ ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_last;
    CData/*1:0*/ ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment;
    CData/*0:0*/ ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid;
    CData/*0:0*/ ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last;
    CData/*0:0*/ ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last;
    CData/*3:0*/ ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment;
    CData/*0:0*/ ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid;
    CData/*0:0*/ ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last;
    CData/*0:0*/ ModulatorRTL__DOT__mod_1__DOT__data_flow_unit_data_payload_regNext_last;
    CData/*7:0*/ ModulatorRTL__DOT__mod_1__DOT__data_flow_unit_data_payload_regNext_fragment;
    CData/*0:0*/ ModulatorRTL__DOT__mod_1__DOT__unit_valid;
    CData/*0:0*/ ModulatorRTL__DOT__mod_1__DOT__unit_last;
    CData/*0:0*/ ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87;
    CData/*2:0*/ ModulatorRTL__DOT__mod_2__DOT___zz___05Fzz_data_in_ready;
    CData/*0:0*/ ModulatorRTL__DOT__mod_2__DOT__data_flow_unit_data_payload_regNext_last;
    CData/*6:0*/ ModulatorRTL__DOT__mod_2__DOT__data_flow_unit_data_payload_regNext_fragment;
    CData/*0:0*/ ModulatorRTL__DOT__mod_2__DOT__unit_valid;
    CData/*0:0*/ ModulatorRTL__DOT__mod_2__DOT__unit_last;
    CData/*2:0*/ ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready;
    CData/*0:0*/ ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l58;
    CData/*0:0*/ ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l61;
    CData/*0:0*/ ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70;
    IData/*23:0*/ ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0;
    IData/*23:0*/ ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1;
    IData/*23:0*/ ModulatorRTL__DOT__mod_2__DOT___zz_code_map_port1;
    IData/*23:0*/ ModulatorRTL__DOT__mod_1__DOT__code_map[256];
    IData/*23:0*/ ModulatorRTL__DOT__mod_2__DOT__code_map[128];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*2:0*/ __Vdly__ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VModulatorRTL__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VModulatorRTL);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VModulatorRTL(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VModulatorRTL();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VModulatorRTL__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VModulatorRTL__Syms* symsp, bool first);
  private:
    static QData _change_request(VModulatorRTL__Syms* __restrict vlSymsp);
    static QData _change_request_1(VModulatorRTL__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__5(VModulatorRTL__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VModulatorRTL__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VModulatorRTL__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VModulatorRTL__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VModulatorRTL__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VModulatorRTL__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VModulatorRTL__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(VModulatorRTL__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__9(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
