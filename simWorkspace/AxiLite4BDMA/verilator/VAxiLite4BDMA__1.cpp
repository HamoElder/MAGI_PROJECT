// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4BDMA.h for the primary calling header

#include "VAxiLite4BDMA.h"
#include "VAxiLite4BDMA__Syms.h"

VL_INLINE_OPT QData VAxiLite4BDMA::_change_request_1(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_change_request_1\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAxiLite4BDMA::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((axil4Ctrl_awvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_awvalid");}
    if (VL_UNLIKELY((axil4Ctrl_awprot & 0xf8U))) {
        Verilated::overWidthError("axil4Ctrl_awprot");}
    if (VL_UNLIKELY((axil4Ctrl_wvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_wvalid");}
    if (VL_UNLIKELY((axil4Ctrl_wstrb & 0xf0U))) {
        Verilated::overWidthError("axil4Ctrl_wstrb");}
    if (VL_UNLIKELY((axil4Ctrl_bready & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_bready");}
    if (VL_UNLIKELY((axil4Ctrl_arvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_arvalid");}
    if (VL_UNLIKELY((axil4Ctrl_arprot & 0xf8U))) {
        Verilated::overWidthError("axil4Ctrl_arprot");}
    if (VL_UNLIKELY((axil4Ctrl_rready & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_rready");}
    if (VL_UNLIKELY((axi4S2M_awready & 0xfeU))) {
        Verilated::overWidthError("axi4S2M_awready");}
    if (VL_UNLIKELY((axi4S2M_wready & 0xfeU))) {
        Verilated::overWidthError("axi4S2M_wready");}
    if (VL_UNLIKELY((axi4S2M_bvalid & 0xfeU))) {
        Verilated::overWidthError("axi4S2M_bvalid");}
    if (VL_UNLIKELY((axi4S2M_bid & 0xf0U))) {
        Verilated::overWidthError("axi4S2M_bid");}
    if (VL_UNLIKELY((axi4S2M_bresp & 0xfcU))) {
        Verilated::overWidthError("axi4S2M_bresp");}
    if (VL_UNLIKELY((axi4S2M_arready & 0xfeU))) {
        Verilated::overWidthError("axi4S2M_arready");}
    if (VL_UNLIKELY((axi4S2M_rvalid & 0xfeU))) {
        Verilated::overWidthError("axi4S2M_rvalid");}
    if (VL_UNLIKELY((axi4S2M_rid & 0xf0U))) {
        Verilated::overWidthError("axi4S2M_rid");}
    if (VL_UNLIKELY((axi4S2M_rresp & 0xfcU))) {
        Verilated::overWidthError("axi4S2M_rresp");}
    if (VL_UNLIKELY((axi4S2M_rlast & 0xfeU))) {
        Verilated::overWidthError("axi4S2M_rlast");}
    if (VL_UNLIKELY((axi4M2S_awready & 0xfeU))) {
        Verilated::overWidthError("axi4M2S_awready");}
    if (VL_UNLIKELY((axi4M2S_wready & 0xfeU))) {
        Verilated::overWidthError("axi4M2S_wready");}
    if (VL_UNLIKELY((axi4M2S_bvalid & 0xfeU))) {
        Verilated::overWidthError("axi4M2S_bvalid");}
    if (VL_UNLIKELY((axi4M2S_bid & 0xf0U))) {
        Verilated::overWidthError("axi4M2S_bid");}
    if (VL_UNLIKELY((axi4M2S_bresp & 0xfcU))) {
        Verilated::overWidthError("axi4M2S_bresp");}
    if (VL_UNLIKELY((axi4M2S_arready & 0xfeU))) {
        Verilated::overWidthError("axi4M2S_arready");}
    if (VL_UNLIKELY((axi4M2S_rvalid & 0xfeU))) {
        Verilated::overWidthError("axi4M2S_rvalid");}
    if (VL_UNLIKELY((axi4M2S_rid & 0xf0U))) {
        Verilated::overWidthError("axi4M2S_rid");}
    if (VL_UNLIKELY((axi4M2S_rresp & 0xfcU))) {
        Verilated::overWidthError("axi4M2S_rresp");}
    if (VL_UNLIKELY((axi4M2S_rlast & 0xfeU))) {
        Verilated::overWidthError("axi4M2S_rlast");}
    if (VL_UNLIKELY((dataS2M_tvalid & 0xfeU))) {
        Verilated::overWidthError("dataS2M_tvalid");}
    if (VL_UNLIKELY((dataS2M_tid & 0xf0U))) {
        Verilated::overWidthError("dataS2M_tid");}
    if (VL_UNLIKELY((dataS2M_tstrb & 0xf0U))) {
        Verilated::overWidthError("dataS2M_tstrb");}
    if (VL_UNLIKELY((dataS2M_tkeep & 0xf0U))) {
        Verilated::overWidthError("dataS2M_tkeep");}
    if (VL_UNLIKELY((dataS2M_tlast & 0xfeU))) {
        Verilated::overWidthError("dataS2M_tlast");}
    if (VL_UNLIKELY((dataM2S_tready & 0xfeU))) {
        Verilated::overWidthError("dataM2S_tready");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
