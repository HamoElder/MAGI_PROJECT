// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAIS_TX_H_
#define _VAIS_TX_H_  // guard

#include "verilated.h"

//==========

class VAIS_TX__Syms;
class VAIS_TX_VerilatedVcd;


//----------

VL_MODULE(VAIS_TX) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_ready,0,0);
    VL_IN8(raw_data_payload_last,0,0);
    VL_IN8(raw_data_payload_fragment,7,0);
    VL_OUT8(result_data_valid,0,0);
    VL_IN8(result_data_ready,0,0);
    VL_OUT8(result_data_payload_last,0,0);
    VL_OUT8(result_data_payload_fragment,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ AIS_TX__DOT__crc16_adder_raw_data_ready;
        CData/*0:0*/ AIS_TX__DOT__crc16_adder_result_data_valid;
        CData/*0:0*/ AIS_TX__DOT__crc16_adder_result_data_payload_last;
        CData/*0:0*/ AIS_TX__DOT__end_flag_adder_raw_data_ready;
        CData/*0:0*/ AIS_TX__DOT__end_flag_adder_result_data_valid;
        CData/*0:0*/ AIS_TX__DOT__crc16_adder_result_data_fifo_io_pop_valid;
        CData/*0:0*/ AIS_TX__DOT__buffer_adder_raw_data_ready;
        CData/*0:0*/ AIS_TX__DOT__buffer_adder_result_data_valid;
        CData/*0:0*/ AIS_TX__DOT__buffer_adder_result_data_payload_last;
        CData/*0:0*/ AIS_TX__DOT__end_flag_adder_result_data_fifo_io_pop_valid;
        CData/*0:0*/ AIS_TX__DOT__preamble_adder_raw_data_ready;
        CData/*0:0*/ AIS_TX__DOT__preamble_adder_result_data_valid;
        CData/*0:0*/ AIS_TX__DOT__buffer_adder_result_data_fifo_io_pop_valid;
        CData/*0:0*/ AIS_TX__DOT__preamble_adder_result_data_fifo_io_pop_valid;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder_result_data_fifo_io_pop_valid;
        CData/*0:0*/ AIS_TX__DOT__raw_data_thrown_valid;
        CData/*0:0*/ AIS_TX__DOT__crc16_adder__DOT__emitCrc;
        CData/*0:0*/ AIS_TX__DOT__crc16_adder__DOT__counter;
        CData/*0:0*/ AIS_TX__DOT__crc16_adder__DOT__when_PhyTx_l79;
        CData/*0:0*/ AIS_TX__DOT__end_flag_adder__DOT__last_flag;
        CData/*0:0*/ AIS_TX__DOT__end_flag_adder__DOT__when_PhyTx_l105_1;
        CData/*0:0*/ AIS_TX__DOT__crc16_adder_result_data_fifo__DOT___zz_1;
        CData/*0:0*/ AIS_TX__DOT__crc16_adder_result_data_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*4:0*/ AIS_TX__DOT__crc16_adder_result_data_fifo__DOT__logic_pushPtr_valueNext;
        CData/*4:0*/ AIS_TX__DOT__crc16_adder_result_data_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ AIS_TX__DOT__crc16_adder_result_data_fifo__DOT__logic_popPtr_willIncrement;
        CData/*4:0*/ AIS_TX__DOT__crc16_adder_result_data_fifo__DOT__logic_popPtr_valueNext;
        CData/*4:0*/ AIS_TX__DOT__crc16_adder_result_data_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ AIS_TX__DOT__crc16_adder_result_data_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ AIS_TX__DOT__crc16_adder_result_data_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ AIS_TX__DOT__crc16_adder_result_data_fifo__DOT__logic_pushing;
        CData/*0:0*/ AIS_TX__DOT__crc16_adder_result_data_fifo__DOT__logic_popping;
        CData/*0:0*/ AIS_TX__DOT__crc16_adder_result_data_fifo__DOT__logic_full;
        CData/*0:0*/ AIS_TX__DOT__crc16_adder_result_data_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ AIS_TX__DOT__buffer_adder__DOT__last_padding;
        CData/*1:0*/ AIS_TX__DOT__buffer_adder__DOT__cnt;
        CData/*0:0*/ AIS_TX__DOT__end_flag_adder_result_data_fifo__DOT___zz_1;
        CData/*0:0*/ AIS_TX__DOT__end_flag_adder_result_data_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*4:0*/ AIS_TX__DOT__end_flag_adder_result_data_fifo__DOT__logic_pushPtr_valueNext;
        CData/*4:0*/ AIS_TX__DOT__end_flag_adder_result_data_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ AIS_TX__DOT__end_flag_adder_result_data_fifo__DOT__logic_popPtr_willIncrement;
        CData/*4:0*/ AIS_TX__DOT__end_flag_adder_result_data_fifo__DOT__logic_popPtr_valueNext;
        CData/*4:0*/ AIS_TX__DOT__end_flag_adder_result_data_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ AIS_TX__DOT__end_flag_adder_result_data_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ AIS_TX__DOT__end_flag_adder_result_data_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ AIS_TX__DOT__end_flag_adder_result_data_fifo__DOT__logic_pushing;
        CData/*0:0*/ AIS_TX__DOT__end_flag_adder_result_data_fifo__DOT__logic_popping;
        CData/*0:0*/ AIS_TX__DOT__end_flag_adder_result_data_fifo__DOT__logic_full;
        CData/*0:0*/ AIS_TX__DOT__end_flag_adder_result_data_fifo__DOT___zz_io_pop_valid;
        CData/*1:0*/ AIS_TX__DOT__preamble_adder__DOT__cnt;
        CData/*1:0*/ AIS_TX__DOT__preamble_adder__DOT__preamble_status;
        CData/*0:0*/ AIS_TX__DOT__preamble_adder__DOT__when_PhyTx_l36;
        CData/*0:0*/ AIS_TX__DOT__buffer_adder_result_data_fifo__DOT___zz_1;
        CData/*0:0*/ AIS_TX__DOT__buffer_adder_result_data_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*4:0*/ AIS_TX__DOT__buffer_adder_result_data_fifo__DOT__logic_pushPtr_valueNext;
        CData/*4:0*/ AIS_TX__DOT__buffer_adder_result_data_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ AIS_TX__DOT__buffer_adder_result_data_fifo__DOT__logic_popPtr_willIncrement;
        CData/*4:0*/ AIS_TX__DOT__buffer_adder_result_data_fifo__DOT__logic_popPtr_valueNext;
        CData/*4:0*/ AIS_TX__DOT__buffer_adder_result_data_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ AIS_TX__DOT__buffer_adder_result_data_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ AIS_TX__DOT__buffer_adder_result_data_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ AIS_TX__DOT__buffer_adder_result_data_fifo__DOT__logic_pushing;
        CData/*0:0*/ AIS_TX__DOT__buffer_adder_result_data_fifo__DOT__logic_popping;
        CData/*0:0*/ AIS_TX__DOT__buffer_adder_result_data_fifo__DOT__logic_full;
    };
    struct {
        CData/*0:0*/ AIS_TX__DOT__buffer_adder_result_data_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder__DOT__bit_full_ones;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder__DOT__bit_split__DOT__raw_data_fifo_io_pop_valid;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder__DOT__bit_split__DOT___zz_adapted_data_payload_last;
        CData/*2:0*/ AIS_TX__DOT__nrzi_encoder__DOT__bit_split__DOT___zz_adapted_data_payload_last_1;
        CData/*2:0*/ AIS_TX__DOT__nrzi_encoder__DOT__bit_split__DOT___zz_adapted_data_payload_last_2;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder__DOT__bit_split__DOT__raw_data_fifo__DOT___zz_1;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder__DOT__bit_split__DOT__raw_data_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*3:0*/ AIS_TX__DOT__nrzi_encoder__DOT__bit_split__DOT__raw_data_fifo__DOT__logic_pushPtr_valueNext;
        CData/*3:0*/ AIS_TX__DOT__nrzi_encoder__DOT__bit_split__DOT__raw_data_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder__DOT__bit_split__DOT__raw_data_fifo__DOT__logic_popPtr_willIncrement;
        CData/*3:0*/ AIS_TX__DOT__nrzi_encoder__DOT__bit_split__DOT__raw_data_fifo__DOT__logic_popPtr_valueNext;
        CData/*3:0*/ AIS_TX__DOT__nrzi_encoder__DOT__bit_split__DOT__raw_data_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder__DOT__bit_split__DOT__raw_data_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder__DOT__bit_split__DOT__raw_data_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder__DOT__bit_split__DOT__raw_data_fifo__DOT__logic_popping;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder__DOT__bit_split__DOT__raw_data_fifo__DOT__logic_full;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder__DOT__bit_split__DOT__raw_data_fifo__DOT___zz_io_pop_valid;
        CData/*0:0*/ AIS_TX__DOT__preamble_adder_result_data_fifo__DOT___zz_1;
        CData/*0:0*/ AIS_TX__DOT__preamble_adder_result_data_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*4:0*/ AIS_TX__DOT__preamble_adder_result_data_fifo__DOT__logic_pushPtr_valueNext;
        CData/*4:0*/ AIS_TX__DOT__preamble_adder_result_data_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ AIS_TX__DOT__preamble_adder_result_data_fifo__DOT__logic_popPtr_willIncrement;
        CData/*4:0*/ AIS_TX__DOT__preamble_adder_result_data_fifo__DOT__logic_popPtr_valueNext;
        CData/*4:0*/ AIS_TX__DOT__preamble_adder_result_data_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ AIS_TX__DOT__preamble_adder_result_data_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ AIS_TX__DOT__preamble_adder_result_data_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ AIS_TX__DOT__preamble_adder_result_data_fifo__DOT__logic_pushing;
        CData/*0:0*/ AIS_TX__DOT__preamble_adder_result_data_fifo__DOT__logic_popping;
        CData/*0:0*/ AIS_TX__DOT__preamble_adder_result_data_fifo__DOT__logic_full;
        CData/*0:0*/ AIS_TX__DOT__preamble_adder_result_data_fifo__DOT___zz_io_pop_valid;
        CData/*1:0*/ AIS_TX__DOT__nrzi_encoder_result_data_fifo__DOT___zz_logic_ram_port0;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder_result_data_fifo__DOT___zz_1;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder_result_data_fifo__DOT__logic_pushPtr_willIncrement;
        CData/*4:0*/ AIS_TX__DOT__nrzi_encoder_result_data_fifo__DOT__logic_pushPtr_valueNext;
        CData/*4:0*/ AIS_TX__DOT__nrzi_encoder_result_data_fifo__DOT__logic_pushPtr_value;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder_result_data_fifo__DOT__logic_popPtr_willIncrement;
        CData/*4:0*/ AIS_TX__DOT__nrzi_encoder_result_data_fifo__DOT__logic_popPtr_valueNext;
        CData/*4:0*/ AIS_TX__DOT__nrzi_encoder_result_data_fifo__DOT__logic_popPtr_value;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder_result_data_fifo__DOT__logic_ptrMatch;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder_result_data_fifo__DOT__logic_risingOccupancy;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder_result_data_fifo__DOT__logic_pushing;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder_result_data_fifo__DOT__logic_popping;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder_result_data_fifo__DOT__logic_full;
        CData/*0:0*/ AIS_TX__DOT__nrzi_encoder_result_data_fifo__DOT___zz_io_pop_valid;
        SData/*15:0*/ AIS_TX__DOT__crc16_adder__DOT__crc_1_result;
        SData/*15:0*/ AIS_TX__DOT__crc16_adder__DOT__crc_1__DOT__state_7;
        SData/*15:0*/ AIS_TX__DOT__crc16_adder__DOT__crc_1__DOT__state_6;
        SData/*15:0*/ AIS_TX__DOT__crc16_adder__DOT__crc_1__DOT__state_5;
        SData/*15:0*/ AIS_TX__DOT__crc16_adder__DOT__crc_1__DOT__state_4;
        SData/*15:0*/ AIS_TX__DOT__crc16_adder__DOT__crc_1__DOT__state_3;
        SData/*15:0*/ AIS_TX__DOT__crc16_adder__DOT__crc_1__DOT__state_2;
        SData/*15:0*/ AIS_TX__DOT__crc16_adder__DOT__crc_1__DOT__state_1;
        SData/*15:0*/ AIS_TX__DOT__crc16_adder__DOT__crc_1__DOT__state;
        SData/*8:0*/ AIS_TX__DOT__crc16_adder_result_data_fifo__DOT___zz_logic_ram_port0;
        SData/*8:0*/ AIS_TX__DOT__end_flag_adder_result_data_fifo__DOT___zz_logic_ram_port0;
        SData/*8:0*/ AIS_TX__DOT__buffer_adder_result_data_fifo__DOT___zz_logic_ram_port0;
        SData/*8:0*/ AIS_TX__DOT__nrzi_encoder__DOT__bit_split__DOT__raw_data_fifo__DOT___zz_logic_ram_port0;
        SData/*8:0*/ AIS_TX__DOT__preamble_adder_result_data_fifo__DOT___zz_logic_ram_port0;
        SData/*8:0*/ AIS_TX__DOT__crc16_adder_result_data_fifo__DOT__logic_ram[32];
        SData/*8:0*/ AIS_TX__DOT__end_flag_adder_result_data_fifo__DOT__logic_ram[32];
        SData/*8:0*/ AIS_TX__DOT__buffer_adder_result_data_fifo__DOT__logic_ram[32];
        SData/*8:0*/ AIS_TX__DOT__nrzi_encoder__DOT__bit_split__DOT__raw_data_fifo__DOT__logic_ram[16];
        SData/*8:0*/ AIS_TX__DOT__preamble_adder_result_data_fifo__DOT__logic_ram[32];
    };
    struct {
        CData/*1:0*/ AIS_TX__DOT__nrzi_encoder_result_data_fifo__DOT__logic_ram[32];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vdly__AIS_TX__DOT__crc16_adder__DOT__counter;
    CData/*4:0*/ __Vdlyvdim0__AIS_TX__DOT__crc16_adder_result_data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__AIS_TX__DOT__crc16_adder_result_data_fifo__DOT__logic_ram__v0;
    CData/*4:0*/ __Vdlyvdim0__AIS_TX__DOT__end_flag_adder_result_data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__AIS_TX__DOT__end_flag_adder_result_data_fifo__DOT__logic_ram__v0;
    CData/*4:0*/ __Vdlyvdim0__AIS_TX__DOT__buffer_adder_result_data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__AIS_TX__DOT__buffer_adder_result_data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__AIS_TX__DOT__nrzi_encoder__DOT__bit_split__DOT__raw_data_fifo__DOT__logic_ram__v0;
    CData/*4:0*/ __Vdlyvdim0__AIS_TX__DOT__preamble_adder_result_data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__AIS_TX__DOT__preamble_adder_result_data_fifo__DOT__logic_ram__v0;
    CData/*4:0*/ __Vdlyvdim0__AIS_TX__DOT__nrzi_encoder_result_data_fifo__DOT__logic_ram__v0;
    CData/*1:0*/ __Vdlyvval__AIS_TX__DOT__nrzi_encoder_result_data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__AIS_TX__DOT__nrzi_encoder_result_data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    SData/*8:0*/ __Vdlyvval__AIS_TX__DOT__crc16_adder_result_data_fifo__DOT__logic_ram__v0;
    SData/*8:0*/ __Vdlyvval__AIS_TX__DOT__end_flag_adder_result_data_fifo__DOT__logic_ram__v0;
    SData/*8:0*/ __Vdlyvval__AIS_TX__DOT__buffer_adder_result_data_fifo__DOT__logic_ram__v0;
    SData/*8:0*/ __Vdlyvval__AIS_TX__DOT__preamble_adder_result_data_fifo__DOT__logic_ram__v0;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAIS_TX__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAIS_TX);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAIS_TX(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAIS_TX();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAIS_TX__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAIS_TX__Syms* symsp, bool first);
  private:
    static QData _change_request(VAIS_TX__Syms* __restrict vlSymsp);
    static QData _change_request_1(VAIS_TX__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__10(VAIS_TX__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VAIS_TX__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VAIS_TX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAIS_TX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VAIS_TX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(VAIS_TX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VAIS_TX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VAIS_TX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VAIS_TX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VAIS_TX__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VAIS_TX__Syms* __restrict vlSymsp);
    static void _settle__TOP__7(VAIS_TX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__8(VAIS_TX__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__13(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__14(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__8(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VAIS_TX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
