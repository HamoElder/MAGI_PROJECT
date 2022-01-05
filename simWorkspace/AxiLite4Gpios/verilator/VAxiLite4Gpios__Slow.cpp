// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4Gpios.h for the primary calling header

#include "VAxiLite4Gpios.h"    // For This
#include "VAxiLite4Gpios__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VAxiLite4Gpios) {
    VAxiLite4Gpios__Syms* __restrict vlSymsp = __VlSymsp = new VAxiLite4Gpios__Syms(this, name());
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAxiLite4Gpios::__Vconfigure(VAxiLite4Gpios__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAxiLite4Gpios::~VAxiLite4Gpios() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VAxiLite4Gpios::_initial__TOP__1(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_initial__TOP__1\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:264
    vlTOPp->axil4Ctrl_rresp = 0U;
}

void VAxiLite4Gpios::_settle__TOP__2(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_settle__TOP__2\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG16(__Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout,13,0);
    //char	__VpadToAlign26[2];
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:421
    __Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout 
	= (0x3ffeU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout 
	= (0x3ffdU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout 
	= (0x3ffbU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout 
	= (0x3ff7U & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout 
	= (0x3fefU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout 
	= (0x3fdfU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout 
	= (0x3fbfU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout 
	= (0x3f7fU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout 
	= (0x3effU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout 
	= (0x3dffU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout 
	= (0x3bffU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout 
	= (0x37ffU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout 
	= (0x2fffU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout 
	= (0x1fffU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT___zz_1 
	= __Vfunc_AxiLite4Gpios__DOT__gpios_1__DOT__zz_interrupt__0__Vfuncout;
    vlTOPp->interrupt_0 = (0U != (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT___zz_1));
    vlTOPp->interrupt_0 = (0U != (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT___zz_1));
}

void VAxiLite4Gpios::_settle__TOP__6(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_settle__TOP__6\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bresp;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:446
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1 
	= ((0x3ffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1)) 
	   | (1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1 
	= ((0x3ffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1)) 
	   | (2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1 
	= ((0x3ffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1)) 
	   | (4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1 
	= ((0x3ff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1)) 
	   | (8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1 
	= ((0x3fefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1)) 
	   | (0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1 
	= ((0x3fdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1)) 
	   | (0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1 
	= ((0x3fbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1)) 
	   | (0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1 
	= ((0x3f7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1)) 
	   | (0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1 
	= ((0x3effU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1)) 
	   | (0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1 
	= ((0x3dffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1)) 
	   | (0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1 
	= ((0x3bffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1)) 
	   | (0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1 
	= ((0x37ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1)) 
	   | (0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1 
	= ((0x2fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1)) 
	   | (0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1 
	= ((0x1fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1)) 
	   | (0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__writeJoinEvent_valid 
	= ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:249
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid)))) {
	vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:238
    vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready 
	= vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2)))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:463
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write 
	= ((0x3ffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write)) 
	   | (1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write 
	= ((0x3ffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write)) 
	   | (2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write 
	= ((0x3ffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write)) 
	   | (4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write 
	= ((0x3ff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write)) 
	   | (8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write 
	= ((0x3fefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write)) 
	   | (0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write 
	= ((0x3fdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write)) 
	   | (0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write 
	= ((0x3fbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write)) 
	   | (0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write 
	= ((0x3f7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write)) 
	   | (0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write 
	= ((0x3effU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write)) 
	   | (0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write 
	= ((0x3dffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write)) 
	   | (0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write 
	= ((0x3bffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write)) 
	   | (0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write 
	= ((0x37ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write)) 
	   | (0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write 
	= ((0x2fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write)) 
	   | (0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write 
	= ((0x1fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write)) 
	   | (0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:480
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable 
	= ((0x3ffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable)) 
	   | (1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable 
	= ((0x3ffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable)) 
	   | (2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable 
	= ((0x3ffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable)) 
	   | (4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable 
	= ((0x3ff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable)) 
	   | (8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable 
	= ((0x3fefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable)) 
	   | (0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable 
	= ((0x3fdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable)) 
	   | (0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable 
	= ((0x3fbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable)) 
	   | (0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable 
	= ((0x3f7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable)) 
	   | (0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable 
	= ((0x3effU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable)) 
	   | (0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable 
	= ((0x3dffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable)) 
	   | (0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable 
	= ((0x3bffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable)) 
	   | (0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable 
	= ((0x37ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable)) 
	   | (0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable 
	= ((0x2fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable)) 
	   | (0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable 
	= ((0x1fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable)) 
	   | (0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:267
    vlTOPp->AxiLite4Gpios__DOT__readRsp_data = 0U;
    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
		  >> 7U)))) {
	if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
		      >> 6U)))) {
	    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
			  >> 5U)))) {
		if ((0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
		    if ((8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
			if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffffc000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_fall_driver));
				}
			    }
			} else {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffffc000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_rise_driver));
				}
			    }
			}
		    } else {
			if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffffc000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_low_driver));
				}
			    }
			} else {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffffc000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_high_driver));
				}
			    }
			}
		    }
		} else {
		    if ((8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
			if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffffc000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT___zz_1));
				}
			    }
			} else {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffffc000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1));
				}
			    }
			}
		    } else {
			if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffffc000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver));
				}
			    }
			} else {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffffc000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver));
				}
			    }
			}
		    }
		}
	    }
	}
    }
}

void VAxiLite4Gpios::_settle__TOP__7(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_settle__TOP__7\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:129
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0 = 0U;
    if ((0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:136
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_1 = 0U;
    if ((0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_1 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:143
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_2 = 0U;
    if ((0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_2 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:150
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_3 = 0U;
    if ((0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_3 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:157
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_4 = 0U;
    if ((0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_4 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:164
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_5 = 0U;
    if ((0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_5 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:171
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_6 = 0U;
    if ((0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_6 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:178
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_7 = 0U;
    if ((0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_7 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:185
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_8 = 0U;
    if ((0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_8 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:192
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_9 = 0U;
    if ((0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_9 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:199
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_10 = 0U;
    if ((8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_10 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:206
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_11 = 0U;
    if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_11 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:213
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_12 = 0U;
    if ((2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_12 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:220
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_13 = 0U;
    if ((1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_13 = 1U;
    }
}

void VAxiLite4Gpios::_settle__TOP__11(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_settle__TOP__11\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Gpios__DOT__writeOccur = ((IData)(vlTOPp->AxiLite4Gpios__DOT__writeJoinEvent_valid) 
					      & (IData)(vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4Gpios__DOT__readRsp_data;
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out13 
	= ((0x1fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out13)) 
	   | (0xffffe000U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0) 
			      << 0xdU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out12 
	= ((0x2fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out12)) 
	   | (0xfffff000U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_1) 
			      << 0xcU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out11 
	= ((0x37ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out11)) 
	   | (0xfffff800U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_2) 
			      << 0xbU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out10 
	= ((0x3bffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out10)) 
	   | (0xfffffc00U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_3) 
			      << 0xaU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out9 = 
	((0x3dffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out9)) 
	 | (0xfffffe00U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_4) 
			    << 9U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out8 = 
	((0x3effU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out8)) 
	 | (0xffffff00U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_5) 
			    << 8U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out7 = 
	((0x3f7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out7)) 
	 | (0xffffff80U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_6) 
			    << 7U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out6 = 
	((0x3fbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out6)) 
	 | (0xffffffc0U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_7) 
			    << 6U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out5 = 
	((0x3fdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out5)) 
	 | (0xffffffe0U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_8) 
			    << 5U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out4 = 
	((0x3fefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out4)) 
	 | (0xfffffff0U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_9) 
			    << 4U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out3 = 
	((0x3ff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out3)) 
	 | (0xfffffff8U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_10) 
			    << 3U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out2 = 
	((0x3ffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out2)) 
	 | (0xfffffffcU & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_11) 
			    << 2U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out1 = 
	((0x3ffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out1)) 
	 | (0xfffffffeU & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_12) 
			    << 1U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out0 = 
	((0x3ffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out0)) 
	 | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_13) 
	    & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write)));
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4Gpios__DOT__writeOccur;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4Gpios__DOT__writeOccur;
    vlTOPp->gpio_0 = ((((((((((((((((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out0) 
				    & (IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_13)) 
				   | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out1) 
				      & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_12) 
					 << 1U))) | 
				  ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out2) 
				   & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_11) 
				      << 2U))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out3) 
						  & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_10) 
						     << 3U))) 
				| ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out4) 
				   & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_9) 
				      << 4U))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out5) 
						  & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_8) 
						     << 5U))) 
			      | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out6) 
				 & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_7) 
				    << 6U))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out7) 
						& ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_6) 
						   << 7U))) 
			    | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out8) 
			       & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_5) 
				  << 8U))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out9) 
					      & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_4) 
						 << 9U))) 
			  | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out10) 
			     & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_3) 
				<< 0xaU))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out11) 
					      & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_2) 
						 << 0xbU))) 
			| ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out12) 
			   & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_1) 
			      << 0xcU))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out13) 
					    & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0) 
					       << 0xdU))) 
		      & ((((((((((((((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_13) 
				     | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_12) 
					<< 1U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_11) 
						   << 2U)) 
				   | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_10) 
				      << 3U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_9) 
						 << 4U)) 
				 | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_8) 
				    << 5U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_7) 
					       << 6U)) 
			       | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_6) 
				  << 7U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_5) 
					     << 8U)) 
			     | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_4) 
				<< 9U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_3) 
					   << 0xaU)) 
			   | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_2) 
			      << 0xbU)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_1) 
					   << 0xcU)) 
			 | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0) 
			    << 0xdU)));
}

void VAxiLite4Gpios::_eval_initial(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_eval_initial\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VAxiLite4Gpios::final() {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::final\n"); );
    // Variables
    VAxiLite4Gpios__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAxiLite4Gpios::_eval_settle(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_eval_settle\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->_settle__TOP__11(vlSymsp);
    vlTOPp->_combo__TOP__14(vlSymsp);
}

void VAxiLite4Gpios::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_ctor_var_reset\n"); );
    // Body
    axil4Ctrl_awvalid = VL_RAND_RESET_I(1);
    axil4Ctrl_awready = VL_RAND_RESET_I(1);
    axil4Ctrl_awaddr = VL_RAND_RESET_I(8);
    axil4Ctrl_awprot = VL_RAND_RESET_I(3);
    axil4Ctrl_wvalid = VL_RAND_RESET_I(1);
    axil4Ctrl_wready = VL_RAND_RESET_I(1);
    axil4Ctrl_wdata = VL_RAND_RESET_I(32);
    axil4Ctrl_wstrb = VL_RAND_RESET_I(4);
    axil4Ctrl_bvalid = VL_RAND_RESET_I(1);
    axil4Ctrl_bready = VL_RAND_RESET_I(1);
    axil4Ctrl_bresp = VL_RAND_RESET_I(2);
    axil4Ctrl_arvalid = VL_RAND_RESET_I(1);
    axil4Ctrl_arready = VL_RAND_RESET_I(1);
    axil4Ctrl_araddr = VL_RAND_RESET_I(8);
    axil4Ctrl_arprot = VL_RAND_RESET_I(3);
    axil4Ctrl_rvalid = VL_RAND_RESET_I(1);
    axil4Ctrl_rready = VL_RAND_RESET_I(1);
    axil4Ctrl_rdata = VL_RAND_RESET_I(32);
    axil4Ctrl_rresp = VL_RAND_RESET_I(2);
    gpio_0 = VL_RAND_RESET_I(14);
    interrupt_0 = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT__gpios_1_gpios_read = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpios_1_gpios_write = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpios_1_gpios_read_1 = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT___zz_gpio_0 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_0_1 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_0_2 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_0_3 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_0_4 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_0_5 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_0_6 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_0_7 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_0_8 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_0_9 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_0_10 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_0_11 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_0_12 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_0_13 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT__writeJoinEvent_valid = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_axil4Ctrl_bresp = VL_RAND_RESET_I(2);
    AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr = VL_RAND_RESET_I(8);
    AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_prot = VL_RAND_RESET_I(3);
    AxiLite4Gpios__DOT__readRsp_data = VL_RAND_RESET_I(32);
    AxiLite4Gpios__DOT__writeOccur = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpios_1_ir_high_driver = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpios_1_ir_low_driver = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpios_1_ir_rise_driver = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpios_1_ir_fall_driver = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpio_0__out__out0 = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpio_0__out__out1 = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpio_0__out__out2 = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpio_0__out__out3 = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpio_0__out__out4 = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpio_0__out__out5 = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpio_0__out__out6 = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpio_0__out__out7 = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpio_0__out__out8 = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpio_0__out__out9 = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpio_0__out__out10 = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpio_0__out__out11 = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpio_0__out__out12 = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpio_0__out__out13 = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpios_1__DOT__last = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpios_1__DOT___zz_1 = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_0 = VL_RAND_RESET_I(14);
    AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1 = VL_RAND_RESET_I(14);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VAxiLite4Gpios::_configure_coverage(VAxiLite4Gpios__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_configure_coverage\n"); );
}
