// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTX.h for the primary calling header

#include "VTX.h"
#include "VTX__Syms.h"

#ifdef VL_DEBUG
void VTX::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_eval_debug_assertions\n"); );
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
    if (VL_UNLIKELY((raw_data_tvalid & 0xfeU))) {
        Verilated::overWidthError("raw_data_tvalid");}
    if (VL_UNLIKELY((raw_data_tstrb & 0xf0U))) {
        Verilated::overWidthError("raw_data_tstrb");}
    if (VL_UNLIKELY((raw_data_tkeep & 0xf0U))) {
        Verilated::overWidthError("raw_data_tkeep");}
    if (VL_UNLIKELY((raw_data_tlast & 0xfeU))) {
        Verilated::overWidthError("raw_data_tlast");}
    if (VL_UNLIKELY((coded_data_ready & 0xfeU))) {
        Verilated::overWidthError("coded_data_ready");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
