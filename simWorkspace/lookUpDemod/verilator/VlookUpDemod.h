// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VLOOKUPDEMOD_H_
#define _VLOOKUPDEMOD_H_  // guard

#include "verilated.h"

//==========

class VlookUpDemod__Syms;
class VlookUpDemod_VerilatedVcd;


//----------

VL_MODULE(VlookUpDemod) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(w_en,0,0);
    VL_IN8(w_addr,3,0);
    VL_IN8(w_sel,1,0);
    VL_IN8(iq_shift,1,0);
    VL_OUT8(data_flow_unit_data_valid,0,0);
    VL_OUT8(data_flow_unit_data_payload,7,0);
    VL_IN8(data_flow_mod_iq_valid,0,0);
    VL_IN16(data_flow_mod_iq_payload_cha_i,15,0);
    VL_IN16(data_flow_mod_iq_payload_cha_q,15,0);
    VL_IN(w_data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ lookUpDemod__DOT__demod_valid_iq;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_i_0;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_i_1;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_i_2;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_i_3;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_i_4;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_i_5;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_i_6;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_i_7;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_i_8;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_i_9;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_i_10;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_i_11;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_i_12;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_i_13;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_i_14;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_i_15;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_q_0;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_q_1;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_q_2;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_q_3;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_q_4;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_q_5;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_q_6;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_q_7;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_q_8;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_q_9;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_q_10;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_q_11;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_q_12;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_q_13;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_q_14;
        CData/*3:0*/ lookUpDemod__DOT__code_mem_q_15;
        CData/*0:0*/ lookUpDemod__DOT__demod_valid;
        CData/*3:0*/ lookUpDemod__DOT__unit_data_i;
        CData/*3:0*/ lookUpDemod__DOT__unit_data_q;
        CData/*0:0*/ lookUpDemod__DOT__unit_valid;
        SData/*15:0*/ lookUpDemod__DOT__demod_data_i;
        SData/*15:0*/ lookUpDemod__DOT__demod_data_q;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_i_0;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_i_1;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_i_2;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_i_3;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_i_4;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_i_5;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_i_6;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_i_7;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_i_8;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_i_9;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_i_10;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_i_11;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_i_12;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_i_13;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_i_14;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_q_0;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_q_1;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_q_2;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_q_3;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_q_4;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_q_5;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_q_6;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_q_7;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_q_8;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_q_9;
    };
    struct {
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_q_10;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_q_11;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_q_12;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_q_13;
        SData/*15:0*/ lookUpDemod__DOT__comp_mem_q_14;
        SData/*14:0*/ lookUpDemod__DOT__comp_cmp_i;
        SData/*14:0*/ lookUpDemod__DOT__comp_cmp_q;
        SData/*14:0*/ lookUpDemod__DOT__compTable_i;
        SData/*14:0*/ lookUpDemod__DOT__compTable_q;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VlookUpDemod__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VlookUpDemod);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VlookUpDemod(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VlookUpDemod();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VlookUpDemod__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VlookUpDemod__Syms* symsp, bool first);
  private:
    static QData _change_request(VlookUpDemod__Syms* __restrict vlSymsp);
    static QData _change_request_1(VlookUpDemod__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__10(VlookUpDemod__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VlookUpDemod__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VlookUpDemod__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VlookUpDemod__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VlookUpDemod__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VlookUpDemod__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VlookUpDemod__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VlookUpDemod__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VlookUpDemod__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VlookUpDemod__Syms* __restrict vlSymsp);
    static void _settle__TOP__8(VlookUpDemod__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
