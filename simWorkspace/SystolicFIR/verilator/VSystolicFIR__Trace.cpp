// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicFIR__Syms.h"


//======================

void VSystolicFIR::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VSystolicFIR* t=(VSystolicFIR*)userthis;
    VSystolicFIR__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VSystolicFIR::traceChgThis(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VSystolicFIR::traceChgThis__2(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_1),29);
	vcdp->chgBus  (c+2,((0x1fffffffU & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__next_adder))),29);
	vcdp->chgBit  (c+3,(vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__valid_regNext));
	vcdp->chgBus  (c+4,(vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_1),29);
	vcdp->chgBus  (c+5,((0x1fffffffU & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__next_adder))),29);
	vcdp->chgBit  (c+6,(vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__valid_regNext));
	vcdp->chgBus  (c+7,(vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_1),29);
	vcdp->chgBus  (c+8,((0x1fffffffU & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__next_adder))),29);
	vcdp->chgBit  (c+9,(vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__valid_regNext));
	vcdp->chgBus  (c+10,(vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_1),29);
	vcdp->chgBus  (c+11,((0x1fffffffU & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__next_adder))),29);
	vcdp->chgBit  (c+12,(vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__valid_regNext));
	vcdp->chgBus  (c+13,(vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_1),29);
	vcdp->chgBus  (c+14,((0x1fffffffU & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__next_adder))),29);
	vcdp->chgBit  (c+15,(vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__valid_regNext));
	vcdp->chgBus  (c+16,(vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_1),29);
	vcdp->chgBus  (c+17,((0x1fffffffU & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__next_adder))),29);
	vcdp->chgBit  (c+18,(vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__valid_regNext));
	vcdp->chgBus  (c+19,(vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_1),29);
	vcdp->chgBus  (c+20,((0x1fffffffU & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__next_adder))),29);
	vcdp->chgBit  (c+21,(vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__valid_regNext));
	vcdp->chgBus  (c+22,(vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_1),29);
	vcdp->chgBus  (c+23,((0x1fffffffU & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__next_adder))),29);
	vcdp->chgBit  (c+24,(vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__valid_regNext));
	vcdp->chgBus  (c+25,(vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_1),29);
	vcdp->chgBus  (c+26,((0x1fffffffU & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__next_adder))),29);
	vcdp->chgBit  (c+27,(vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__valid_regNext));
	vcdp->chgBus  (c+28,(vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_1),29);
	vcdp->chgBus  (c+29,((0x1fffffffU & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__next_adder))),29);
	vcdp->chgBit  (c+30,(vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__valid_regNext));
	vcdp->chgBus  (c+31,(vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_1),29);
	vcdp->chgBus  (c+32,((0x1fffffffU & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__next_adder))),29);
	vcdp->chgBit  (c+33,(vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__valid_regNext));
	vcdp->chgBus  (c+34,(vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_1),29);
	vcdp->chgBus  (c+35,((0x1fffffffU & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__next_adder))),29);
	vcdp->chgBit  (c+36,(vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__valid_regNext));
	vcdp->chgBus  (c+37,(vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_1),29);
	vcdp->chgBus  (c+38,((0x1fffffffU & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__next_adder))),29);
	vcdp->chgBit  (c+39,(vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__valid_regNext));
	vcdp->chgBus  (c+40,(vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_1),29);
	vcdp->chgBus  (c+41,((0x1fffffffU & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__next_adder))),29);
	vcdp->chgBit  (c+42,(vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__valid_regNext));
	vcdp->chgBus  (c+43,(vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_1),29);
	vcdp->chgBus  (c+44,((0x1fffffffU & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__next_adder))),29);
	vcdp->chgBit  (c+45,(vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__valid_regNext));
	vcdp->chgBus  (c+46,(vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_16__DOT__shift_reg_1),29);
	vcdp->chgBus  (c+47,((0x1fffffffU & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__next_adder))),29);
	vcdp->chgBit  (c+48,(vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__valid_regNext));
	vcdp->chgQuad (c+49,(vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__mult),38);
	vcdp->chgQuad (c+51,(vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__next_adder),38);
	vcdp->chgBus  (c+53,(vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_0),29);
	vcdp->chgQuad (c+54,(vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__mult),38);
	vcdp->chgQuad (c+56,(vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__next_adder),38);
	vcdp->chgBus  (c+58,(vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_0),29);
	vcdp->chgQuad (c+59,(vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__mult),38);
	vcdp->chgQuad (c+61,(vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__next_adder),38);
	vcdp->chgBus  (c+63,(vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_0),29);
	vcdp->chgQuad (c+64,(vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__mult),38);
	vcdp->chgQuad (c+66,(vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__next_adder),38);
	vcdp->chgBus  (c+68,(vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_0),29);
	vcdp->chgQuad (c+69,(vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__mult),38);
	vcdp->chgQuad (c+71,(vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__next_adder),38);
	vcdp->chgBus  (c+73,(vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_0),29);
	vcdp->chgQuad (c+74,(vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__mult),38);
	vcdp->chgQuad (c+76,(vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__next_adder),38);
	vcdp->chgBus  (c+78,(vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_0),29);
	vcdp->chgQuad (c+79,(vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__mult),38);
	vcdp->chgQuad (c+81,(vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__next_adder),38);
	vcdp->chgBus  (c+83,(vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_0),29);
	vcdp->chgQuad (c+84,(vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__mult),38);
	vcdp->chgQuad (c+86,(vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__next_adder),38);
	vcdp->chgBus  (c+88,(vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_0),29);
	vcdp->chgQuad (c+89,(vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__mult),38);
	vcdp->chgQuad (c+91,(vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__next_adder),38);
	vcdp->chgBus  (c+93,(vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_0),29);
	vcdp->chgQuad (c+94,(vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__mult),38);
	vcdp->chgQuad (c+96,(vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__next_adder),38);
	vcdp->chgBus  (c+98,(vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_0),29);
	vcdp->chgQuad (c+99,(vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__mult),38);
	vcdp->chgQuad (c+101,(vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__next_adder),38);
	vcdp->chgBus  (c+103,(vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_0),29);
	vcdp->chgQuad (c+104,(vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__mult),38);
	vcdp->chgQuad (c+106,(vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__next_adder),38);
	vcdp->chgBus  (c+108,(vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_0),29);
	vcdp->chgQuad (c+109,(vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__mult),38);
	vcdp->chgQuad (c+111,(vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__next_adder),38);
	vcdp->chgBus  (c+113,(vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_0),29);
	vcdp->chgQuad (c+114,(vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__mult),38);
	vcdp->chgQuad (c+116,(vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__next_adder),38);
	vcdp->chgBus  (c+118,(vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_0),29);
	vcdp->chgQuad (c+119,(vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__mult),38);
	vcdp->chgQuad (c+121,(vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__next_adder),38);
	vcdp->chgBus  (c+123,(vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_0),29);
	vcdp->chgQuad (c+124,(vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__mult),38);
	vcdp->chgQuad (c+126,(vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__next_adder),38);
	vcdp->chgBus  (c+128,(vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_16__DOT__shift_reg_0),29);
    }
}

void VSystolicFIR::traceChgThis__3(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+129,(vlTOPp->raw_data_valid));
	vcdp->chgBit  (c+130,(vlTOPp->raw_data_ready));
	vcdp->chgBus  (c+131,(vlTOPp->raw_data_payload_0),12);
	vcdp->chgBit  (c+132,(vlTOPp->filtered_data_valid));
	vcdp->chgBus  (c+133,(vlTOPp->filtered_data_payload_0),29);
	vcdp->chgBit  (c+134,(vlTOPp->clk));
	vcdp->chgBit  (c+135,(vlTOPp->reset));
	vcdp->chgBus  (c+136,(((0x1ffff000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & ((IData)(vlTOPp->raw_data_payload_0) 
								       >> 0xbU)))) 
					       << 0xcU)) 
			       | (IData)(vlTOPp->raw_data_payload_0))),29);
    }
}
