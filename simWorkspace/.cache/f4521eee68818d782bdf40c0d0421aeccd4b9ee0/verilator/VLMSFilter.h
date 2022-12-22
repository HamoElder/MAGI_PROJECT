// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VLMSFILTER_H_
#define _VLMSFILTER_H_  // guard

#include "verilated_heavy.h"

//==========

class VLMSFilter__Syms;
class VLMSFilter_VerilatedVcd;


//----------

VL_MODULE(VLMSFilter) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_IN8(raw_data_payload_last,0,0);
    VL_OUT8(filtered_data_valid,0,0);
    VL_OUT8(filtered_data_payload_last,0,0);
    VL_IN8(train_en,0,0);
    VL_IN16(raw_data_payload_fragment,11,0);
    VL_OUT16(filtered_data_payload_fragment,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*3:0*/ LMSFilter__DOT___zz_cnt;
        CData/*0:0*/ LMSFilter__DOT__raw_data_payload_last_delay_1;
        CData/*0:0*/ LMSFilter__DOT__raw_data_payload_last_delay_2;
        CData/*0:0*/ LMSFilter__DOT__raw_data_payload_last_delay_3;
        CData/*3:0*/ LMSFilter__DOT__cnt;
        CData/*0:0*/ LMSFilter__DOT__when_AdaptiveFilter_l79;
        CData/*3:0*/ LMSFilter__DOT__direct_fir_core__DOT___zz_internal_en;
        CData/*2:0*/ LMSFilter__DOT__direct_fir_core__DOT__internal_en;
        SData/*15:0*/ LMSFilter__DOT__coff_mem_0;
        SData/*15:0*/ LMSFilter__DOT__coff_mem_1;
        SData/*15:0*/ LMSFilter__DOT__coff_mem_2;
        SData/*15:0*/ LMSFilter__DOT__coff_mem_3;
        SData/*15:0*/ LMSFilter__DOT__coff_mem_4;
        SData/*15:0*/ LMSFilter__DOT__coff_mem_5;
        SData/*15:0*/ LMSFilter__DOT__coff_mem_6;
        SData/*15:0*/ LMSFilter__DOT__coff_mem_7;
        SData/*15:0*/ LMSFilter__DOT__coff_mem_8;
        SData/*15:0*/ LMSFilter__DOT__coff_mem_9;
        SData/*15:0*/ LMSFilter__DOT__coff_mem_10;
        SData/*15:0*/ LMSFilter__DOT__coff_mem_11;
        SData/*15:0*/ LMSFilter__DOT__coff_mem_12;
        SData/*15:0*/ LMSFilter__DOT__coff_mem_13;
        SData/*15:0*/ LMSFilter__DOT__coff_mem_14;
        SData/*15:0*/ LMSFilter__DOT__coff_mem_15;
        SData/*11:0*/ LMSFilter__DOT__raw_data_history_1;
        SData/*11:0*/ LMSFilter__DOT__raw_data_history_2;
        SData/*11:0*/ LMSFilter__DOT__raw_data_history_3;
        SData/*11:0*/ LMSFilter__DOT__raw_data_history_4;
        SData/*11:0*/ LMSFilter__DOT__raw_data_history_5;
        SData/*11:0*/ LMSFilter__DOT__raw_data_history_6;
        SData/*11:0*/ LMSFilter__DOT__raw_data_history_7;
        SData/*11:0*/ LMSFilter__DOT__raw_data_history_8;
        SData/*11:0*/ LMSFilter__DOT__raw_data_history_9;
        SData/*11:0*/ LMSFilter__DOT__raw_data_history_10;
        SData/*11:0*/ LMSFilter__DOT__raw_data_history_11;
        SData/*11:0*/ LMSFilter__DOT__raw_data_history_12;
        SData/*11:0*/ LMSFilter__DOT__raw_data_history_13;
        SData/*11:0*/ LMSFilter__DOT__raw_data_history_14;
        SData/*11:0*/ LMSFilter__DOT__raw_data_history_15;
        SData/*15:0*/ LMSFilter__DOT___zz_coff_mem_0;
        SData/*11:0*/ LMSFilter__DOT__direct_fir_core__DOT__raw_data_vec_0;
        SData/*11:0*/ LMSFilter__DOT__direct_fir_core__DOT__raw_data_vec_1;
        SData/*11:0*/ LMSFilter__DOT__direct_fir_core__DOT__raw_data_vec_2;
        SData/*11:0*/ LMSFilter__DOT__direct_fir_core__DOT__raw_data_vec_3;
        SData/*11:0*/ LMSFilter__DOT__direct_fir_core__DOT__raw_data_vec_4;
        SData/*11:0*/ LMSFilter__DOT__direct_fir_core__DOT__raw_data_vec_5;
        SData/*11:0*/ LMSFilter__DOT__direct_fir_core__DOT__raw_data_vec_6;
        SData/*11:0*/ LMSFilter__DOT__direct_fir_core__DOT__raw_data_vec_7;
        SData/*11:0*/ LMSFilter__DOT__direct_fir_core__DOT__raw_data_vec_8;
        SData/*11:0*/ LMSFilter__DOT__direct_fir_core__DOT__raw_data_vec_9;
        SData/*11:0*/ LMSFilter__DOT__direct_fir_core__DOT__raw_data_vec_10;
        SData/*11:0*/ LMSFilter__DOT__direct_fir_core__DOT__raw_data_vec_11;
        SData/*11:0*/ LMSFilter__DOT__direct_fir_core__DOT__raw_data_vec_12;
        SData/*11:0*/ LMSFilter__DOT__direct_fir_core__DOT__raw_data_vec_13;
        SData/*11:0*/ LMSFilter__DOT__direct_fir_core__DOT__raw_data_vec_14;
        SData/*11:0*/ LMSFilter__DOT__direct_fir_core__DOT__raw_data_vec_15;
        SData/*15:0*/ LMSFilter__DOT__direct_fir_core__DOT__mult_data_vec_0;
        SData/*15:0*/ LMSFilter__DOT__direct_fir_core__DOT__mult_data_vec_1;
        SData/*15:0*/ LMSFilter__DOT__direct_fir_core__DOT__mult_data_vec_2;
        SData/*15:0*/ LMSFilter__DOT__direct_fir_core__DOT__mult_data_vec_3;
        SData/*15:0*/ LMSFilter__DOT__direct_fir_core__DOT__mult_data_vec_4;
        SData/*15:0*/ LMSFilter__DOT__direct_fir_core__DOT__mult_data_vec_5;
        SData/*15:0*/ LMSFilter__DOT__direct_fir_core__DOT__mult_data_vec_6;
        SData/*15:0*/ LMSFilter__DOT__direct_fir_core__DOT__mult_data_vec_7;
    };
    struct {
        SData/*15:0*/ LMSFilter__DOT__direct_fir_core__DOT__mult_data_vec_8;
        SData/*15:0*/ LMSFilter__DOT__direct_fir_core__DOT__mult_data_vec_9;
        SData/*15:0*/ LMSFilter__DOT__direct_fir_core__DOT__mult_data_vec_10;
        SData/*15:0*/ LMSFilter__DOT__direct_fir_core__DOT__mult_data_vec_11;
        SData/*15:0*/ LMSFilter__DOT__direct_fir_core__DOT__mult_data_vec_12;
        SData/*15:0*/ LMSFilter__DOT__direct_fir_core__DOT__mult_data_vec_13;
        SData/*15:0*/ LMSFilter__DOT__direct_fir_core__DOT__mult_data_vec_14;
        SData/*15:0*/ LMSFilter__DOT__direct_fir_core__DOT__mult_data_vec_15;
        SData/*15:0*/ LMSFilter__DOT__direct_fir_core__DOT__sum_result;
        SData/*15:0*/ LMSFilter__DOT__ref_mem[16];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    SData/*15:0*/ __Vdly__LMSFilter__DOT__coff_mem_9;
    SData/*15:0*/ __Vdly__LMSFilter__DOT__coff_mem_8;
    SData/*15:0*/ __Vdly__LMSFilter__DOT__coff_mem_7;
    SData/*15:0*/ __Vdly__LMSFilter__DOT__coff_mem_6;
    SData/*15:0*/ __Vdly__LMSFilter__DOT__coff_mem_5;
    SData/*15:0*/ __Vdly__LMSFilter__DOT__coff_mem_4;
    SData/*15:0*/ __Vdly__LMSFilter__DOT__coff_mem_0;
    SData/*15:0*/ __Vdly__LMSFilter__DOT__coff_mem_1;
    SData/*15:0*/ __Vdly__LMSFilter__DOT__coff_mem_2;
    SData/*15:0*/ __Vdly__LMSFilter__DOT__coff_mem_3;
    SData/*15:0*/ __Vdly__LMSFilter__DOT__coff_mem_10;
    SData/*15:0*/ __Vdly__LMSFilter__DOT__coff_mem_11;
    SData/*15:0*/ __Vdly__LMSFilter__DOT__coff_mem_12;
    SData/*15:0*/ __Vdly__LMSFilter__DOT__coff_mem_13;
    SData/*15:0*/ __Vdly__LMSFilter__DOT__coff_mem_14;
    SData/*15:0*/ __Vdly__LMSFilter__DOT__coff_mem_15;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VLMSFilter__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VLMSFilter);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VLMSFilter(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VLMSFilter();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VLMSFilter__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VLMSFilter__Syms* symsp, bool first);
  private:
    static QData _change_request(VLMSFilter__Syms* __restrict vlSymsp);
    static QData _change_request_1(VLMSFilter__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__9(VLMSFilter__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VLMSFilter__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VLMSFilter__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VLMSFilter__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VLMSFilter__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VLMSFilter__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VLMSFilter__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VLMSFilter__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VLMSFilter__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VLMSFilter__Syms* __restrict vlSymsp);
    static void _settle__TOP__7(VLMSFilter__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
