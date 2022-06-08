// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSYSTOLICFIR_H_
#define _VSYSTOLICFIR_H_  // guard

#include "verilated.h"

//==========

class VSystolicFIR__Syms;
class VSystolicFIR_VerilatedVcd;


//----------

VL_MODULE(VSystolicFIR) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(filtered_data_valid,0,0);
    VL_IN16(raw_data_payload_0,15,0);
    VL_OUT64(filtered_data_payload_0,41,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_16__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_17__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_18__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_19__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_20__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_21__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_22__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_23__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_24__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_25__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_26__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_27__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_28__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_29__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_30__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_31__DOT__valid_regNext;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_16__DOT__mult;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_16__DOT__next_adder;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_0;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_1;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_17__DOT__mult;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_17__DOT__next_adder;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_0;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_1;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_18__DOT__mult;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_18__DOT__next_adder;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_0;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_1;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_19__DOT__mult;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_19__DOT__next_adder;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_0;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_1;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_20__DOT__mult;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_20__DOT__next_adder;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_0;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_1;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_21__DOT__mult;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_21__DOT__next_adder;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_0;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_1;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_22__DOT__mult;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_22__DOT__next_adder;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_0;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_1;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_23__DOT__mult;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_23__DOT__next_adder;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_0;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_1;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_24__DOT__mult;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_24__DOT__next_adder;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_0;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_1;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_25__DOT__mult;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_25__DOT__next_adder;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_0;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_1;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_26__DOT__mult;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_26__DOT__next_adder;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_0;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_1;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_27__DOT__mult;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_27__DOT__next_adder;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_0;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_1;
    };
    struct {
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_28__DOT__mult;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_28__DOT__next_adder;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_0;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_1;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_29__DOT__mult;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_29__DOT__next_adder;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_0;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_1;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_30__DOT__mult;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_30__DOT__next_adder;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_0;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_1;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_31__DOT__mult;
        QData/*50:0*/ SystolicFIR__DOT__systolicCore_31__DOT__next_adder;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_16__DOT__shift_reg_0;
        QData/*41:0*/ SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_16__DOT__shift_reg_1;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VSystolicFIR__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSystolicFIR);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VSystolicFIR(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VSystolicFIR();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VSystolicFIR__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VSystolicFIR__Syms* symsp, bool first);
  private:
    static QData _change_request(VSystolicFIR__Syms* __restrict vlSymsp);
    static QData _change_request_1(VSystolicFIR__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VSystolicFIR__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VSystolicFIR__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VSystolicFIR__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _settle__TOP__7(VSystolicFIR__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
