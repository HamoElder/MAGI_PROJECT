// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPHASEROTATOR_H_
#define _VPHASEROTATOR_H_  // guard

#include "verilated.h"

//==========

class VPhaseRotator__Syms;
class VPhaseRotator_VerilatedVcd;


//----------

VL_MODULE(VPhaseRotator) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(rotated_data_valid,0,0);
    VL_IN8(rotated_data_ready,0,0);
    VL_IN16(raw_data_payload_cha_i,15,0);
    VL_IN16(raw_data_payload_cha_q,15,0);
    VL_OUT16(rotated_data_payload_cha_i,15,0);
    VL_OUT16(rotated_data_payload_cha_q,15,0);
    VL_IN16(phiCorrect,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid;
        CData/*0:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1;
        CData/*0:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2;
        CData/*0:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3;
        CData/*0:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4;
        CData/*0:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5;
        CData/*0:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6;
        CData/*0:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7;
        CData/*0:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8;
        CData/*0:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9;
        CData/*0:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10;
        CData/*0:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11;
        CData/*0:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_12;
        CData/*0:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_13;
        CData/*0:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_14;
        CData/*0:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15;
        CData/*0:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT__raw_data_fire;
        SData/*15:0*/ PhaseRotator__DOT__phi;
        SData/*15:0*/ PhaseRotator__DOT__phiNext;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43;
    };
    struct {
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51;
        SData/*15:0*/ PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VPhaseRotator__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VPhaseRotator);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VPhaseRotator(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VPhaseRotator();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VPhaseRotator__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VPhaseRotator__Syms* symsp, bool first);
  private:
    static QData _change_request(VPhaseRotator__Syms* __restrict vlSymsp);
    static QData _change_request_1(VPhaseRotator__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__7(VPhaseRotator__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VPhaseRotator__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VPhaseRotator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VPhaseRotator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VPhaseRotator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VPhaseRotator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VPhaseRotator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VPhaseRotator__Syms* __restrict vlSymsp);
    static void _settle__TOP__6(VPhaseRotator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
