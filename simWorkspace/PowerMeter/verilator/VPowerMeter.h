// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPOWERMETER_H_
#define _VPOWERMETER_H_  // guard

#include "verilated.h"

//==========

class VPowerMeter__Syms;
class VPowerMeter_VerilatedVcd;


//----------

VL_MODULE(VPowerMeter) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(power_result_valid,0,0);
    VL_IN16(raw_data_payload_cha_i,15,0);
    VL_IN16(raw_data_payload_cha_q,15,0);
    VL_OUT16(power_result_payload_cha_i,15,0);
    VL_OUT16(power_result_payload_cha_q,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ PowerMeter__DOT__power_cal_valid;
        CData/*0:0*/ PowerMeter__DOT__power_result_valid_1;
        SData/*15:0*/ PowerMeter__DOT___zz_power_val_i;
        SData/*15:0*/ PowerMeter__DOT___zz_power_val_q;
        SData/*15:0*/ PowerMeter__DOT__power_val_cha_i;
        SData/*15:0*/ PowerMeter__DOT__power_val_cha_q;
        SData/*15:0*/ PowerMeter__DOT__power_val_i;
        SData/*15:0*/ PowerMeter__DOT__power_val_q;
        SData/*11:0*/ PowerMeter__DOT___zz_power_cal_i;
        SData/*10:0*/ PowerMeter__DOT__power_cal_i;
        SData/*11:0*/ PowerMeter__DOT___zz_power_cal_q;
        SData/*10:0*/ PowerMeter__DOT__power_cal_q;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_0;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_1;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_2;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_3;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_4;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_5;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_6;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_7;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_8;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_9;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_10;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_11;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_12;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_13;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_14;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_15;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_16;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_17;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_18;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_19;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_20;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_21;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_22;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_23;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_24;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_25;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_26;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_27;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_28;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_29;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_30;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_31;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_0;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_1;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_2;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_3;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_4;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_5;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_6;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_7;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_8;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_9;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_10;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_11;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_12;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_13;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_14;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_15;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_16;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_17;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_18;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_19;
    };
    struct {
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_20;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_21;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_22;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_23;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_24;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_25;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_26;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_27;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_28;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_29;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_30;
        SData/*10:0*/ PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_31;
        IData/*31:0*/ PowerMeter__DOT__sq_i_regNext;
        IData/*31:0*/ PowerMeter__DOT__sq_q_regNext;
        QData/*32:0*/ PowerMeter__DOT___zz___05Fzz_when_SInt_l332_2;
        QData/*32:0*/ PowerMeter__DOT___zz___05Fzz_when_SInt_l332_5;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VPowerMeter__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VPowerMeter);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VPowerMeter(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VPowerMeter();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VPowerMeter__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VPowerMeter__Syms* symsp, bool first);
  private:
    static QData _change_request(VPowerMeter__Syms* __restrict vlSymsp);
    static QData _change_request_1(VPowerMeter__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VPowerMeter__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VPowerMeter__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VPowerMeter__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VPowerMeter__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VPowerMeter__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VPowerMeter__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VPowerMeter__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VPowerMeter__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VPowerMeter__Syms* __restrict vlSymsp);
    static void _settle__TOP__6(VPowerMeter__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
