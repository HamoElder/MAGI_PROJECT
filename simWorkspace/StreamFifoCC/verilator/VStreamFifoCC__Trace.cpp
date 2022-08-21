// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStreamFifoCC__Syms.h"


void VStreamFifoCC::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VStreamFifoCC__Syms* __restrict vlSymsp = static_cast<VStreamFifoCC__Syms*>(userp);
    VStreamFifoCC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VStreamFifoCC::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VStreamFifoCC__Syms* __restrict vlSymsp = static_cast<VStreamFifoCC__Syms*>(userp);
    VStreamFifoCC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->StreamFifoCC__DOT__pushToPopGray_buffercc__DOT__buffers_1),6);
            tracep->chgCData(oldp+1,(vlTOPp->StreamFifoCC__DOT__popCC_popPtrGray),6);
            tracep->chgBit(oldp+2,(((IData)(vlTOPp->StreamFifoCC__DOT__popCC_popPtrGray) 
                                    == (IData)(vlTOPp->StreamFifoCC__DOT__pushToPopGray_buffercc__DOT__buffers_1))));
            tracep->chgCData(oldp+3,(vlTOPp->StreamFifoCC__DOT__pushToPopGray_buffercc__DOT__buffers_0),6);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+4,(vlTOPp->StreamFifoCC__DOT__pushCC_pushPtrGray),6);
            tracep->chgCData(oldp+5,(vlTOPp->StreamFifoCC__DOT__pushCC_pushPtr),6);
            tracep->chgCData(oldp+6,((0x3fU & ((IData)(1U) 
                                               + (IData)(vlTOPp->StreamFifoCC__DOT__pushCC_pushPtr)))),6);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgIData(oldp+7,(vlTOPp->StreamFifoCC__DOT__ram[0]),32);
            tracep->chgIData(oldp+8,(vlTOPp->StreamFifoCC__DOT__ram[1]),32);
            tracep->chgIData(oldp+9,(vlTOPp->StreamFifoCC__DOT__ram[2]),32);
            tracep->chgIData(oldp+10,(vlTOPp->StreamFifoCC__DOT__ram[3]),32);
            tracep->chgIData(oldp+11,(vlTOPp->StreamFifoCC__DOT__ram[4]),32);
            tracep->chgIData(oldp+12,(vlTOPp->StreamFifoCC__DOT__ram[5]),32);
            tracep->chgIData(oldp+13,(vlTOPp->StreamFifoCC__DOT__ram[6]),32);
            tracep->chgIData(oldp+14,(vlTOPp->StreamFifoCC__DOT__ram[7]),32);
            tracep->chgIData(oldp+15,(vlTOPp->StreamFifoCC__DOT__ram[8]),32);
            tracep->chgIData(oldp+16,(vlTOPp->StreamFifoCC__DOT__ram[9]),32);
            tracep->chgIData(oldp+17,(vlTOPp->StreamFifoCC__DOT__ram[10]),32);
            tracep->chgIData(oldp+18,(vlTOPp->StreamFifoCC__DOT__ram[11]),32);
            tracep->chgIData(oldp+19,(vlTOPp->StreamFifoCC__DOT__ram[12]),32);
            tracep->chgIData(oldp+20,(vlTOPp->StreamFifoCC__DOT__ram[13]),32);
            tracep->chgIData(oldp+21,(vlTOPp->StreamFifoCC__DOT__ram[14]),32);
            tracep->chgIData(oldp+22,(vlTOPp->StreamFifoCC__DOT__ram[15]),32);
            tracep->chgIData(oldp+23,(vlTOPp->StreamFifoCC__DOT__ram[16]),32);
            tracep->chgIData(oldp+24,(vlTOPp->StreamFifoCC__DOT__ram[17]),32);
            tracep->chgIData(oldp+25,(vlTOPp->StreamFifoCC__DOT__ram[18]),32);
            tracep->chgIData(oldp+26,(vlTOPp->StreamFifoCC__DOT__ram[19]),32);
            tracep->chgIData(oldp+27,(vlTOPp->StreamFifoCC__DOT__ram[20]),32);
            tracep->chgIData(oldp+28,(vlTOPp->StreamFifoCC__DOT__ram[21]),32);
            tracep->chgIData(oldp+29,(vlTOPp->StreamFifoCC__DOT__ram[22]),32);
            tracep->chgIData(oldp+30,(vlTOPp->StreamFifoCC__DOT__ram[23]),32);
            tracep->chgIData(oldp+31,(vlTOPp->StreamFifoCC__DOT__ram[24]),32);
            tracep->chgIData(oldp+32,(vlTOPp->StreamFifoCC__DOT__ram[25]),32);
            tracep->chgIData(oldp+33,(vlTOPp->StreamFifoCC__DOT__ram[26]),32);
            tracep->chgIData(oldp+34,(vlTOPp->StreamFifoCC__DOT__ram[27]),32);
            tracep->chgIData(oldp+35,(vlTOPp->StreamFifoCC__DOT__ram[28]),32);
            tracep->chgIData(oldp+36,(vlTOPp->StreamFifoCC__DOT__ram[29]),32);
            tracep->chgIData(oldp+37,(vlTOPp->StreamFifoCC__DOT__ram[30]),32);
            tracep->chgIData(oldp+38,(vlTOPp->StreamFifoCC__DOT__ram[31]),32);
        }
        tracep->chgBit(oldp+39,(vlTOPp->io_push_valid));
        tracep->chgBit(oldp+40,(vlTOPp->io_push_ready));
        tracep->chgIData(oldp+41,(vlTOPp->io_push_payload),32);
        tracep->chgBit(oldp+42,(vlTOPp->io_pop_valid));
        tracep->chgBit(oldp+43,(vlTOPp->io_pop_ready));
        tracep->chgIData(oldp+44,(vlTOPp->io_pop_payload),32);
        tracep->chgCData(oldp+45,(vlTOPp->io_pushOccupancy),6);
        tracep->chgCData(oldp+46,(vlTOPp->io_popOccupancy),6);
        tracep->chgBit(oldp+47,(vlTOPp->clkA_clk));
        tracep->chgBit(oldp+48,(vlTOPp->clkA_reset));
        tracep->chgBit(oldp+49,(vlTOPp->clkB_clk));
        tracep->chgCData(oldp+50,(vlTOPp->StreamFifoCC__DOT__popToPushGray_buffercc__DOT__buffers_1),6);
        tracep->chgBit(oldp+51,(vlTOPp->StreamFifoCC__DOT__bufferCC_3__DOT__buffers_1));
        tracep->chgBit(oldp+52,(((IData)(vlTOPp->io_push_valid) 
                                 & (IData)(vlTOPp->io_push_ready))));
        tracep->chgBit(oldp+53,((((3U & ((IData)(vlTOPp->StreamFifoCC__DOT__pushCC_pushPtrGray) 
                                         >> 4U)) == 
                                  (3U & (~ ((IData)(vlTOPp->StreamFifoCC__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                            >> 4U)))) 
                                 & ((0xfU & (IData)(vlTOPp->StreamFifoCC__DOT__pushCC_pushPtrGray)) 
                                    == (0xfU & (IData)(vlTOPp->StreamFifoCC__DOT__popToPushGray_buffercc__DOT__buffers_1))))));
        tracep->chgBit(oldp+54,(vlTOPp->StreamFifoCC__DOT__io_push_fire_1));
        tracep->chgCData(oldp+55,(vlTOPp->StreamFifoCC__DOT__popCC_popPtr),6);
        tracep->chgCData(oldp+56,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlTOPp->StreamFifoCC__DOT__popCC_popPtr)))),6);
        tracep->chgBit(oldp+57,(((IData)(vlTOPp->io_pop_valid) 
                                 & (IData)(vlTOPp->io_pop_ready))));
        tracep->chgCData(oldp+58,(vlTOPp->StreamFifoCC__DOT__popToPushGray_buffercc__DOT__buffers_0),6);
        tracep->chgBit(oldp+59,(vlTOPp->StreamFifoCC__DOT__bufferCC_3__DOT__buffers_0));
    }
}

void VStreamFifoCC::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VStreamFifoCC__Syms* __restrict vlSymsp = static_cast<VStreamFifoCC__Syms*>(userp);
    VStreamFifoCC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
    }
}
