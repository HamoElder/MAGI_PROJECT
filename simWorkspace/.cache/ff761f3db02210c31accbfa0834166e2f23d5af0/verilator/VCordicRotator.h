// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCORDICROTATOR_H_
#define _VCORDICROTATOR_H_  // guard

#include "verilated.h"

//==========

class VCordicRotator__Syms;
class VCordicRotator_VerilatedVcd;


//----------

VL_MODULE(VCordicRotator) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(rotate_mode,0,0);
    VL_IN8(x_u,1,0);
    VL_IN8(w_en,0,0);
    VL_IN8(w_addr,7,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_ready,0,0);
    VL_OUT8(result_valid,0,0);
    VL_IN(w_data,31,0);
    VL_IN(raw_data_payload_x,31,0);
    VL_IN(raw_data_payload_y,31,0);
    VL_IN(raw_data_payload_z,31,0);
    VL_OUT(result_payload_x,31,0);
    VL_OUT(result_payload_y,31,0);
    VL_OUT(result_payload_z,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ CordicRotator__DOT___zz_result_valid;
        CData/*0:0*/ CordicRotator__DOT___zz_result_valid_1;
        CData/*0:0*/ CordicRotator__DOT___zz_result_valid_2;
        CData/*0:0*/ CordicRotator__DOT___zz_result_valid_3;
        CData/*0:0*/ CordicRotator__DOT___zz_result_valid_4;
        CData/*0:0*/ CordicRotator__DOT___zz_result_valid_5;
        CData/*0:0*/ CordicRotator__DOT___zz_result_valid_6;
        CData/*0:0*/ CordicRotator__DOT___zz_result_valid_7;
        CData/*0:0*/ CordicRotator__DOT___zz_result_valid_8;
        CData/*0:0*/ CordicRotator__DOT___zz_result_valid_9;
        CData/*0:0*/ CordicRotator__DOT___zz_result_valid_10;
        CData/*0:0*/ CordicRotator__DOT___zz_result_valid_11;
        CData/*0:0*/ CordicRotator__DOT___zz_result_valid_12;
        CData/*0:0*/ CordicRotator__DOT___zz_result_valid_13;
        CData/*0:0*/ CordicRotator__DOT___zz_result_valid_14;
        CData/*0:0*/ CordicRotator__DOT___zz_result_valid_15;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_46;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_47;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_48;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_49;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_50;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_51;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_52;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_53;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_54;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_55;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_56;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_57;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_58;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_59;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_60;
        CData/*0:0*/ CordicRotator__DOT__raw_data_fire;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_76;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_79;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_82;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_85;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_88;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_91;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_94;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_97;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_100;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_103;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_106;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_109;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_112;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_115;
        CData/*0:0*/ CordicRotator__DOT___zz_result_payload_x_118;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_1;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_2;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_3;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_4;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_5;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_6;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_7;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_8;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_9;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_10;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_11;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_12;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_13;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_14;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_15;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_16;
    };
    struct {
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_17;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_18;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_19;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_20;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_21;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_22;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_23;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_24;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_25;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_26;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_27;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_28;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_29;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_30;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_y;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_31;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_32;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_33;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_34;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_35;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_36;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_37;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_38;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_39;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_40;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_41;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_42;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_43;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_44;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_45;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_z;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_61;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_62;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_63;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_64;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_65;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_66;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_67;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_68;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_69;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_70;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_71;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_72;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_73;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_x_74;
        IData/*31:0*/ CordicRotator__DOT___zz_result_payload_z_1;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCordicRotator__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCordicRotator);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VCordicRotator(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCordicRotator();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VCordicRotator__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCordicRotator__Syms* symsp, bool first);
  private:
    static QData _change_request(VCordicRotator__Syms* __restrict vlSymsp);
    static QData _change_request_1(VCordicRotator__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__10(VCordicRotator__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VCordicRotator__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VCordicRotator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VCordicRotator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VCordicRotator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(VCordicRotator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VCordicRotator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VCordicRotator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VCordicRotator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VCordicRotator__Syms* __restrict vlSymsp);
    static void _settle__TOP__9(VCordicRotator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
