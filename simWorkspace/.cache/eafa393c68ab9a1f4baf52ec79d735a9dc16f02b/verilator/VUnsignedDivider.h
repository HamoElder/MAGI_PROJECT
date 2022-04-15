// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VUNSIGNEDDIVIDER_H_
#define _VUNSIGNEDDIVIDER_H_  // guard

#include "verilated.h"

//==========

class VUnsignedDivider__Syms;
class VUnsignedDivider_VerilatedVcd;


//----------

VL_MODULE(VUnsignedDivider) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(flush,0,0);
    VL_IN8(cmd_valid,0,0);
    VL_OUT8(cmd_ready,0,0);
    VL_OUT8(rsp_valid,0,0);
    VL_IN8(rsp_ready,0,0);
    VL_OUT8(rsp_payload_error,0,0);
    VL_IN16(cmd_payload_numerator,15,0);
    VL_IN16(cmd_payload_denominator,15,0);
    VL_OUT16(rsp_payload_quotient,15,0);
    VL_OUT16(rsp_payload_remainder,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ UnsignedDivider__DOT___zz_rsp_valid;
        CData/*0:0*/ UnsignedDivider__DOT___zz_rsp_valid_1;
        CData/*0:0*/ UnsignedDivider__DOT___zz_rsp_valid_2;
        CData/*0:0*/ UnsignedDivider__DOT___zz_rsp_valid_3;
        CData/*0:0*/ UnsignedDivider__DOT___zz_rsp_valid_4;
        CData/*0:0*/ UnsignedDivider__DOT___zz_rsp_valid_5;
        CData/*0:0*/ UnsignedDivider__DOT___zz_rsp_valid_6;
        CData/*0:0*/ UnsignedDivider__DOT___zz_rsp_valid_7;
        CData/*0:0*/ UnsignedDivider__DOT___zz_rsp_valid_8;
        CData/*0:0*/ UnsignedDivider__DOT___zz_rsp_valid_9;
        CData/*0:0*/ UnsignedDivider__DOT___zz_rsp_valid_10;
        CData/*0:0*/ UnsignedDivider__DOT___zz_rsp_valid_11;
        CData/*0:0*/ UnsignedDivider__DOT___zz_rsp_valid_12;
        CData/*0:0*/ UnsignedDivider__DOT___zz_rsp_valid_13;
        CData/*0:0*/ UnsignedDivider__DOT___zz_rsp_valid_14;
        CData/*0:0*/ UnsignedDivider__DOT___zz_rsp_valid_15;
        CData/*0:0*/ UnsignedDivider__DOT___zz_rsp_valid_16;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_1;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_2;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_3;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_4;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_5;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_6;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_7;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_8;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_9;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_10;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_11;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_12;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_13;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_14;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_15;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_16;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_17;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_18;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_19;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_20;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_21;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_22;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_23;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_24;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_25;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_26;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_27;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_28;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_29;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_30;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_31;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_32;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_error;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_33;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_34;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_35;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_36;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_37;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_38;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_39;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_40;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_41;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_42;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_43;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_44;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_45;
    };
    struct {
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_46;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_47;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_48;
        SData/*15:0*/ UnsignedDivider__DOT___zz_rsp_payload_remainder;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_49;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_50;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_51;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_52;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_53;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_54;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_55;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_56;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_57;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_58;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_59;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_60;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_61;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_62;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_63;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_64;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_65;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_66;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_67;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_68;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_69;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_70;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_71;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_72;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_73;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_74;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_75;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_76;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_77;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_78;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_79;
        IData/*16:0*/ UnsignedDivider__DOT___zz_rsp_payload_quotient_80;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VUnsignedDivider__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VUnsignedDivider);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VUnsignedDivider(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VUnsignedDivider();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VUnsignedDivider__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VUnsignedDivider__Syms* symsp, bool first);
  private:
    static QData _change_request(VUnsignedDivider__Syms* __restrict vlSymsp);
    static QData _change_request_1(VUnsignedDivider__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__8(VUnsignedDivider__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VUnsignedDivider__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VUnsignedDivider__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VUnsignedDivider__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VUnsignedDivider__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VUnsignedDivider__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VUnsignedDivider__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VUnsignedDivider__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VUnsignedDivider__Syms* __restrict vlSymsp);
    static void _settle__TOP__7(VUnsignedDivider__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
