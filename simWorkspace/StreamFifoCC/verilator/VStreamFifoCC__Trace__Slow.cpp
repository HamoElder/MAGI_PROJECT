// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStreamFifoCC__Syms.h"


//======================

void VStreamFifoCC::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VStreamFifoCC::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VStreamFifoCC__Syms* __restrict vlSymsp = static_cast<VStreamFifoCC__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VStreamFifoCC::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VStreamFifoCC::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VStreamFifoCC__Syms* __restrict vlSymsp = static_cast<VStreamFifoCC__Syms*>(userp);
    VStreamFifoCC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VStreamFifoCC::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VStreamFifoCC__Syms* __restrict vlSymsp = static_cast<VStreamFifoCC__Syms*>(userp);
    VStreamFifoCC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+40,"io_push_valid", false,-1);
        tracep->declBit(c+41,"io_push_ready", false,-1);
        tracep->declBus(c+42,"io_push_payload", false,-1, 31,0);
        tracep->declBit(c+43,"io_pop_valid", false,-1);
        tracep->declBit(c+44,"io_pop_ready", false,-1);
        tracep->declBus(c+45,"io_pop_payload", false,-1, 31,0);
        tracep->declBus(c+46,"io_pushOccupancy", false,-1, 5,0);
        tracep->declBus(c+47,"io_popOccupancy", false,-1, 5,0);
        tracep->declBit(c+48,"clkA_clk", false,-1);
        tracep->declBit(c+49,"clkA_reset", false,-1);
        tracep->declBit(c+50,"clkB_clk", false,-1);
        tracep->declBit(c+40,"StreamFifoCC io_push_valid", false,-1);
        tracep->declBit(c+41,"StreamFifoCC io_push_ready", false,-1);
        tracep->declBus(c+42,"StreamFifoCC io_push_payload", false,-1, 31,0);
        tracep->declBit(c+43,"StreamFifoCC io_pop_valid", false,-1);
        tracep->declBit(c+44,"StreamFifoCC io_pop_ready", false,-1);
        tracep->declBus(c+45,"StreamFifoCC io_pop_payload", false,-1, 31,0);
        tracep->declBus(c+46,"StreamFifoCC io_pushOccupancy", false,-1, 5,0);
        tracep->declBus(c+47,"StreamFifoCC io_popOccupancy", false,-1, 5,0);
        tracep->declBit(c+48,"StreamFifoCC clkA_clk", false,-1);
        tracep->declBit(c+49,"StreamFifoCC clkA_reset", false,-1);
        tracep->declBit(c+50,"StreamFifoCC clkB_clk", false,-1);
        tracep->declBus(c+51,"StreamFifoCC popToPushGray_buffercc_io_dataOut", false,-1, 5,0);
        tracep->declBit(c+52,"StreamFifoCC bufferCC_3_io_dataOut", false,-1);
        tracep->declBus(c+1,"StreamFifoCC pushToPopGray_buffercc_io_dataOut", false,-1, 5,0);
        tracep->declBus(c+2,"StreamFifoCC popToPushGray", false,-1, 5,0);
        tracep->declBus(c+5,"StreamFifoCC pushToPopGray", false,-1, 5,0);
        tracep->declBus(c+6,"StreamFifoCC pushCC_pushPtr", false,-1, 5,0);
        tracep->declBus(c+7,"StreamFifoCC pushCC_pushPtrPlus", false,-1, 5,0);
        tracep->declBit(c+53,"StreamFifoCC io_push_fire", false,-1);
        tracep->declBus(c+5,"StreamFifoCC pushCC_pushPtrGray", false,-1, 5,0);
        tracep->declBus(c+51,"StreamFifoCC pushCC_popPtrGray", false,-1, 5,0);
        tracep->declBit(c+54,"StreamFifoCC pushCC_full", false,-1);
        tracep->declBit(c+55,"StreamFifoCC io_push_fire_1", false,-1);
        tracep->declBit(c+52,"StreamFifoCC clkA_reset_syncronized", false,-1);
        tracep->declBus(c+56,"StreamFifoCC popCC_popPtr", false,-1, 5,0);
        tracep->declBus(c+57,"StreamFifoCC popCC_popPtrPlus", false,-1, 5,0);
        tracep->declBit(c+58,"StreamFifoCC io_pop_fire", false,-1);
        tracep->declBus(c+2,"StreamFifoCC popCC_popPtrGray", false,-1, 5,0);
        tracep->declBus(c+1,"StreamFifoCC popCC_pushPtrGray", false,-1, 5,0);
        tracep->declBit(c+3,"StreamFifoCC popCC_empty", false,-1);
        tracep->declBit(c+58,"StreamFifoCC io_pop_fire_1", false,-1);
        tracep->declBit(c+58,"StreamFifoCC io_pop_fire_2", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+8+i*1,"StreamFifoCC ram", true,(i+0), 31,0);}}
        tracep->declBus(c+2,"StreamFifoCC popToPushGray_buffercc io_dataIn", false,-1, 5,0);
        tracep->declBus(c+51,"StreamFifoCC popToPushGray_buffercc io_dataOut", false,-1, 5,0);
        tracep->declBit(c+48,"StreamFifoCC popToPushGray_buffercc clkA_clk", false,-1);
        tracep->declBit(c+49,"StreamFifoCC popToPushGray_buffercc clkA_reset", false,-1);
        tracep->declBus(c+59,"StreamFifoCC popToPushGray_buffercc buffers_0", false,-1, 5,0);
        tracep->declBus(c+51,"StreamFifoCC popToPushGray_buffercc buffers_1", false,-1, 5,0);
        tracep->declBit(c+61,"StreamFifoCC bufferCC_3 io_dataIn", false,-1);
        tracep->declBit(c+52,"StreamFifoCC bufferCC_3 io_dataOut", false,-1);
        tracep->declBit(c+50,"StreamFifoCC bufferCC_3 clkB_clk", false,-1);
        tracep->declBit(c+49,"StreamFifoCC bufferCC_3 clkA_reset", false,-1);
        tracep->declBit(c+60,"StreamFifoCC bufferCC_3 buffers_0", false,-1);
        tracep->declBit(c+52,"StreamFifoCC bufferCC_3 buffers_1", false,-1);
        tracep->declBus(c+5,"StreamFifoCC pushToPopGray_buffercc io_dataIn", false,-1, 5,0);
        tracep->declBus(c+1,"StreamFifoCC pushToPopGray_buffercc io_dataOut", false,-1, 5,0);
        tracep->declBit(c+50,"StreamFifoCC pushToPopGray_buffercc clkB_clk", false,-1);
        tracep->declBit(c+52,"StreamFifoCC pushToPopGray_buffercc clkA_reset_syncronized", false,-1);
        tracep->declBus(c+4,"StreamFifoCC pushToPopGray_buffercc buffers_0", false,-1, 5,0);
        tracep->declBus(c+1,"StreamFifoCC pushToPopGray_buffercc buffers_1", false,-1, 5,0);
    }
}

void VStreamFifoCC::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VStreamFifoCC::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VStreamFifoCC__Syms* __restrict vlSymsp = static_cast<VStreamFifoCC__Syms*>(userp);
    VStreamFifoCC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VStreamFifoCC::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VStreamFifoCC__Syms* __restrict vlSymsp = static_cast<VStreamFifoCC__Syms*>(userp);
    VStreamFifoCC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->StreamFifoCC__DOT__pushToPopGray_buffercc__DOT__buffers_1),6);
        tracep->fullCData(oldp+2,(vlTOPp->StreamFifoCC__DOT__popCC_popPtrGray),6);
        tracep->fullBit(oldp+3,(((IData)(vlTOPp->StreamFifoCC__DOT__popCC_popPtrGray) 
                                 == (IData)(vlTOPp->StreamFifoCC__DOT__pushToPopGray_buffercc__DOT__buffers_1))));
        tracep->fullCData(oldp+4,(vlTOPp->StreamFifoCC__DOT__pushToPopGray_buffercc__DOT__buffers_0),6);
        tracep->fullCData(oldp+5,(vlTOPp->StreamFifoCC__DOT__pushCC_pushPtrGray),6);
        tracep->fullCData(oldp+6,(vlTOPp->StreamFifoCC__DOT__pushCC_pushPtr),6);
        tracep->fullCData(oldp+7,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlTOPp->StreamFifoCC__DOT__pushCC_pushPtr)))),6);
        tracep->fullIData(oldp+8,(vlTOPp->StreamFifoCC__DOT__ram[0]),32);
        tracep->fullIData(oldp+9,(vlTOPp->StreamFifoCC__DOT__ram[1]),32);
        tracep->fullIData(oldp+10,(vlTOPp->StreamFifoCC__DOT__ram[2]),32);
        tracep->fullIData(oldp+11,(vlTOPp->StreamFifoCC__DOT__ram[3]),32);
        tracep->fullIData(oldp+12,(vlTOPp->StreamFifoCC__DOT__ram[4]),32);
        tracep->fullIData(oldp+13,(vlTOPp->StreamFifoCC__DOT__ram[5]),32);
        tracep->fullIData(oldp+14,(vlTOPp->StreamFifoCC__DOT__ram[6]),32);
        tracep->fullIData(oldp+15,(vlTOPp->StreamFifoCC__DOT__ram[7]),32);
        tracep->fullIData(oldp+16,(vlTOPp->StreamFifoCC__DOT__ram[8]),32);
        tracep->fullIData(oldp+17,(vlTOPp->StreamFifoCC__DOT__ram[9]),32);
        tracep->fullIData(oldp+18,(vlTOPp->StreamFifoCC__DOT__ram[10]),32);
        tracep->fullIData(oldp+19,(vlTOPp->StreamFifoCC__DOT__ram[11]),32);
        tracep->fullIData(oldp+20,(vlTOPp->StreamFifoCC__DOT__ram[12]),32);
        tracep->fullIData(oldp+21,(vlTOPp->StreamFifoCC__DOT__ram[13]),32);
        tracep->fullIData(oldp+22,(vlTOPp->StreamFifoCC__DOT__ram[14]),32);
        tracep->fullIData(oldp+23,(vlTOPp->StreamFifoCC__DOT__ram[15]),32);
        tracep->fullIData(oldp+24,(vlTOPp->StreamFifoCC__DOT__ram[16]),32);
        tracep->fullIData(oldp+25,(vlTOPp->StreamFifoCC__DOT__ram[17]),32);
        tracep->fullIData(oldp+26,(vlTOPp->StreamFifoCC__DOT__ram[18]),32);
        tracep->fullIData(oldp+27,(vlTOPp->StreamFifoCC__DOT__ram[19]),32);
        tracep->fullIData(oldp+28,(vlTOPp->StreamFifoCC__DOT__ram[20]),32);
        tracep->fullIData(oldp+29,(vlTOPp->StreamFifoCC__DOT__ram[21]),32);
        tracep->fullIData(oldp+30,(vlTOPp->StreamFifoCC__DOT__ram[22]),32);
        tracep->fullIData(oldp+31,(vlTOPp->StreamFifoCC__DOT__ram[23]),32);
        tracep->fullIData(oldp+32,(vlTOPp->StreamFifoCC__DOT__ram[24]),32);
        tracep->fullIData(oldp+33,(vlTOPp->StreamFifoCC__DOT__ram[25]),32);
        tracep->fullIData(oldp+34,(vlTOPp->StreamFifoCC__DOT__ram[26]),32);
        tracep->fullIData(oldp+35,(vlTOPp->StreamFifoCC__DOT__ram[27]),32);
        tracep->fullIData(oldp+36,(vlTOPp->StreamFifoCC__DOT__ram[28]),32);
        tracep->fullIData(oldp+37,(vlTOPp->StreamFifoCC__DOT__ram[29]),32);
        tracep->fullIData(oldp+38,(vlTOPp->StreamFifoCC__DOT__ram[30]),32);
        tracep->fullIData(oldp+39,(vlTOPp->StreamFifoCC__DOT__ram[31]),32);
        tracep->fullBit(oldp+40,(vlTOPp->io_push_valid));
        tracep->fullBit(oldp+41,(vlTOPp->io_push_ready));
        tracep->fullIData(oldp+42,(vlTOPp->io_push_payload),32);
        tracep->fullBit(oldp+43,(vlTOPp->io_pop_valid));
        tracep->fullBit(oldp+44,(vlTOPp->io_pop_ready));
        tracep->fullIData(oldp+45,(vlTOPp->io_pop_payload),32);
        tracep->fullCData(oldp+46,(vlTOPp->io_pushOccupancy),6);
        tracep->fullCData(oldp+47,(vlTOPp->io_popOccupancy),6);
        tracep->fullBit(oldp+48,(vlTOPp->clkA_clk));
        tracep->fullBit(oldp+49,(vlTOPp->clkA_reset));
        tracep->fullBit(oldp+50,(vlTOPp->clkB_clk));
        tracep->fullCData(oldp+51,(vlTOPp->StreamFifoCC__DOT__popToPushGray_buffercc__DOT__buffers_1),6);
        tracep->fullBit(oldp+52,(vlTOPp->StreamFifoCC__DOT__bufferCC_3__DOT__buffers_1));
        tracep->fullBit(oldp+53,(((IData)(vlTOPp->io_push_valid) 
                                  & (IData)(vlTOPp->io_push_ready))));
        tracep->fullBit(oldp+54,((((3U & ((IData)(vlTOPp->StreamFifoCC__DOT__pushCC_pushPtrGray) 
                                          >> 4U)) == 
                                   (3U & (~ ((IData)(vlTOPp->StreamFifoCC__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                             >> 4U)))) 
                                  & ((0xfU & (IData)(vlTOPp->StreamFifoCC__DOT__pushCC_pushPtrGray)) 
                                     == (0xfU & (IData)(vlTOPp->StreamFifoCC__DOT__popToPushGray_buffercc__DOT__buffers_1))))));
        tracep->fullBit(oldp+55,(vlTOPp->StreamFifoCC__DOT__io_push_fire_1));
        tracep->fullCData(oldp+56,(vlTOPp->StreamFifoCC__DOT__popCC_popPtr),6);
        tracep->fullCData(oldp+57,((0x3fU & ((IData)(1U) 
                                             + (IData)(vlTOPp->StreamFifoCC__DOT__popCC_popPtr)))),6);
        tracep->fullBit(oldp+58,(((IData)(vlTOPp->io_pop_valid) 
                                  & (IData)(vlTOPp->io_pop_ready))));
        tracep->fullCData(oldp+59,(vlTOPp->StreamFifoCC__DOT__popToPushGray_buffercc__DOT__buffers_0),6);
        tracep->fullBit(oldp+60,(vlTOPp->StreamFifoCC__DOT__bufferCC_3__DOT__buffers_0));
        tracep->fullBit(oldp+61,(0U));
    }
}
