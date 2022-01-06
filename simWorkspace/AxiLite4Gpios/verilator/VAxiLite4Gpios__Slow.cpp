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
    // INITIAL at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:472
    vlTOPp->axil4Ctrl_rresp = 0U;
}

void VAxiLite4Gpios::_settle__TOP__2(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_settle__TOP__2\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG16(__Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout,15,0);
    //char	__VpadToAlign26[2];
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:729
    __Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout 
	= (0xfffeU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout 
	= (0xfffdU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout 
	= (0xfffbU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout 
	= (0xfff7U & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout 
	= (0xffefU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout 
	= (0xffdfU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout 
	= (0xffbfU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout 
	= (0xff7fU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout 
	= (0xfeffU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout 
	= (0xfdffU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout 
	= (0xfbffU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout 
	= (0xf7ffU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout 
	= (0xefffU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout 
	= (0xdfffU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout 
	= (0xbfffU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout));
    __Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout 
	= (0x7fffU & (IData)(__Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT___zz_1 
	= __Vfunc_AxiLite4Gpios__DOT__gpios_3__DOT__zz_interrupt__0__Vfuncout;
    vlTOPp->interrupt_1 = (0U != (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT___zz_1));
    vlTOPp->interrupt_1 = (0U != (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT___zz_1));
}

void VAxiLite4Gpios::_settle__TOP__7(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_settle__TOP__7\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bresp;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:756
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
	= ((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
	   | (1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
	= ((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
	   | (2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
	= ((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
	   | (4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
	= ((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
	   | (8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
	= ((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
	   | (0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
	= ((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
	   | (0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
	= ((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
	   | (0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
	= ((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
	   | (0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
	= ((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
	   | (0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
	= ((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
	   | (0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
	= ((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
	   | (0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
	= ((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
	   | (0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
	= ((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
	   | (0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
	= ((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
	   | (0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
	= ((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
	   | (0x4000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
	= ((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
	   | (0x8000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:850
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
	= ((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
	   | (1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
	= ((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
	   | (2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
	= ((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
	   | (4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
	= ((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
	   | (8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
	= ((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
	   | (0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
	= ((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
	   | (0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
	= ((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
	   | (0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
	= ((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
	   | (0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
	= ((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
	   | (0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
	= ((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
	   | (0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
	= ((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
	   | (0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
	= ((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
	   | (0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
	= ((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
	   | (0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
	= ((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
	   | (0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
	= ((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
	   | (0x4000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
	= ((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
	   | (0x8000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__writeJoinEvent_valid 
	= ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:457
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid)))) {
	vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:446
    vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready 
	= vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2)))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid 
	= (((((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_high_driver) 
	      & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)) 
	     | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_low_driver) 
		& (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)))) 
	    | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_rise_driver) 
	       & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1) 
		  & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__last))))) 
	   | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_fall_driver) 
	      & ((~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)) 
		 & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__last))));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:869
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
	= ((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
	   | (1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
	= ((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
	   | (2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
	= ((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
	   | (4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
	= ((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
	   | (8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
	= ((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
	   | (0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
	= ((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
	   | (0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
	= ((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
	   | (0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
	= ((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
	   | (0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
	= ((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
	   | (0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
	= ((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
	   | (0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
	= ((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
	   | (0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
	= ((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
	   | (0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
	= ((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
	   | (0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
	= ((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
	   | (0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
	= ((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
	   | (0x4000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
	= ((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
	   | (0x8000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:775
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
	= ((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
	   | (1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
	= ((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
	   | (2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
	= ((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
	   | (4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
	= ((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
	   | (8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
	= ((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
	   | (0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
	= ((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
	   | (0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
	= ((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
	   | (0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
	= ((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
	   | (0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
	= ((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
	   | (0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
	= ((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
	   | (0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
	= ((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
	   | (0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
	= ((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
	   | (0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
	= ((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
	   | (0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
	= ((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
	   | (0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
	= ((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
	   | (0x4000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
	= ((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
	   | (0x8000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
}

void VAxiLite4Gpios::_settle__TOP__8(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_settle__TOP__8\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:888
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
	= ((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
	   | (1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
	= ((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
	   | (2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
	= ((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
	   | (4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
	= ((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
	   | (8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
	= ((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
	   | (0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
	= ((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
	   | (0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
	= ((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
	   | (0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
	= ((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
	   | (0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
	= ((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
	   | (0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
	= ((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
	   | (0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
	= ((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
	   | (0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
	= ((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
	   | (0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
	= ((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
	   | (0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
	= ((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
	   | (0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
	= ((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
	   | (0x4000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
	= ((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
	   | (0x8000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:794
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
	= ((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
	   | (1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
	= ((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
	   | (2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
	= ((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
	   | (4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
	= ((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
	   | (8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
	= ((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
	   | (0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
	= ((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
	   | (0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
	= ((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
	   | (0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
	= ((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
	   | (0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
	= ((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
	   | (0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
	= ((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
	   | (0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
	= ((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
	   | (0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
	= ((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
	   | (0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
	= ((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
	   | (0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
	= ((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
	   | (0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
	= ((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
	   | (0x4000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
	= ((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
	   | (0x8000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:908
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
	((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
	 | (1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
	((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
	 | (2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
	((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
	 | (4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
	((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
	 | (8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
	((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
	 | (0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
	((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
	 | (0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
	((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
	 | (0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
	((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
	 | (0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
	((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
	 | (0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
	((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
	 | (0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
	((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
	 | (0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
	((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
	 | (0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
	((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
	 | (0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
	((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
	 | (0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
	((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
	 | (0x4000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
	((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
	 | (0x8000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:323
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0 = 0U;
    if ((0x8000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:330
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_1 = 0U;
    if ((0x4000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_1 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:337
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_2 = 0U;
    if ((0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_2 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:344
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_3 = 0U;
    if ((0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_3 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:351
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_4 = 0U;
    if ((0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_4 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:358
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_5 = 0U;
    if ((0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_5 = 1U;
    }
}

void VAxiLite4Gpios::_settle__TOP__9(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_settle__TOP__9\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:365
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_6 = 0U;
    if ((0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_6 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:372
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_7 = 0U;
    if ((0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_7 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:379
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_8 = 0U;
    if ((0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_8 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:386
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_9 = 0U;
    if ((0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_9 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:393
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_10 = 0U;
    if ((0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_10 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:400
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_11 = 0U;
    if ((0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_11 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:407
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_12 = 0U;
    if ((8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_12 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:414
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_13 = 0U;
    if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_13 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:421
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_14 = 0U;
    if ((2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_14 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:428
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_15 = 0U;
    if ((1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_15 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:211
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1 = 0U;
    if ((0x8000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:218
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_1 = 0U;
    if ((0x4000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_1 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:225
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_2 = 0U;
    if ((0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_2 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:232
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_3 = 0U;
    if ((0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_3 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:239
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_4 = 0U;
    if ((0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_4 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:246
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_5 = 0U;
    if ((0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_5 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:253
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_6 = 0U;
    if ((0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_6 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:260
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_7 = 0U;
    if ((0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_7 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:267
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_8 = 0U;
    if ((0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_8 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:274
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_9 = 0U;
    if ((0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_9 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:281
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_10 = 0U;
    if ((0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_10 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:288
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_11 = 0U;
    if ((0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_11 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:295
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_12 = 0U;
    if ((8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_12 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:302
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_13 = 0U;
    if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_13 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:309
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_14 = 0U;
    if ((2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_14 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:316
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_15 = 0U;
    if ((1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_15 = 1U;
    }
}

void VAxiLite4Gpios::_settle__TOP__14(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_settle__TOP__14\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Gpios__DOT__writeOccur = ((IData)(vlTOPp->AxiLite4Gpios__DOT__writeJoinEvent_valid) 
					      & (IData)(vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->interrupt_0 = (0U != (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:475
    vlTOPp->AxiLite4Gpios__DOT__readRsp_data = 0U;
    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
		  >> 7U)))) {
	if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
		      >> 6U)))) {
	    if ((0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
		if ((0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
		    if ((8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
			if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffff0000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_fall_driver));
				}
			    }
			} else {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffff0000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_rise_driver));
				}
			    }
			}
		    } else {
			if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffff0000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_low_driver));
				}
			    }
			} else {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffff0000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_high_driver));
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
					= ((0xffff0000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT___zz_1));
				}
			    }
			} else {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffff0000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1));
				}
			    }
			}
		    } else {
			if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffff0000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver));
				}
			    }
			} else {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffff0000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver));
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
		    if ((8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
			if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffff0000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_fall_driver));
				}
			    }
			} else {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffff0000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_rise_driver));
				}
			    }
			}
		    } else {
			if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffff0000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_low_driver));
				}
			    }
			} else {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffff0000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_high_driver));
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
					= ((0xffff0000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt));
				}
			    }
			} else {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffff0000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1));
				}
			    }
			}
		    } else {
			if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffff0000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver));
				}
			    }
			} else {
			    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
					  >> 1U)))) {
				if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
				    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
					= ((0xffff0000U 
					    & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
					   | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver));
				}
			    }
			}
		    }
		}
	    }
	}
    }
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out15 
	= ((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out15)) 
	   | (0xffff8000U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0) 
			      << 0xfU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out14 
	= ((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out14)) 
	   | (0xffffc000U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_1) 
			      << 0xeU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out13 
	= ((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out13)) 
	   | (0xffffe000U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_2) 
			      << 0xdU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out12 
	= ((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out12)) 
	   | (0xfffff000U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_3) 
			      << 0xcU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out11 
	= ((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out11)) 
	   | (0xfffff800U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_4) 
			      << 0xbU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out10 
	= ((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out10)) 
	   | (0xfffffc00U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_5) 
			      << 0xaU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out9 = 
	((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out9)) 
	 | (0xfffffe00U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_6) 
			    << 9U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out8 = 
	((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out8)) 
	 | (0xffffff00U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_7) 
			    << 8U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out7 = 
	((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out7)) 
	 | (0xffffff80U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_8) 
			    << 7U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out6 = 
	((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out6)) 
	 | (0xffffffc0U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_9) 
			    << 6U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out5 = 
	((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out5)) 
	 | (0xffffffe0U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_10) 
			    << 5U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
}

void VAxiLite4Gpios::_settle__TOP__15(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_settle__TOP__15\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out4 = 
	((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out4)) 
	 | (0xfffffff0U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_11) 
			    << 4U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out3 = 
	((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out3)) 
	 | (0xfffffff8U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_12) 
			    << 3U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out2 = 
	((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out2)) 
	 | (0xfffffffcU & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_13) 
			    << 2U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out1 = 
	((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out1)) 
	 | (0xfffffffeU & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_14) 
			    << 1U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out0 = 
	((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out0)) 
	 | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_15) 
	    & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out31 
	= ((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out31)) 
	   | (0xffff8000U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1) 
			      << 0xfU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out30 
	= ((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out30)) 
	   | (0xffffc000U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_1) 
			      << 0xeU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out29 
	= ((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out29)) 
	   | (0xffffe000U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_2) 
			      << 0xdU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out28 
	= ((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out28)) 
	   | (0xfffff000U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_3) 
			      << 0xcU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out27 
	= ((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out27)) 
	   | (0xfffff800U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_4) 
			      << 0xbU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out26 
	= ((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out26)) 
	   | (0xfffffc00U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_5) 
			      << 0xaU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out25 
	= ((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out25)) 
	   | (0xfffffe00U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_6) 
			      << 9U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out24 
	= ((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out24)) 
	   | (0xffffff00U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_7) 
			      << 8U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out23 
	= ((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out23)) 
	   | (0xffffff80U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_8) 
			      << 7U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out22 
	= ((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out22)) 
	   | (0xffffffc0U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_9) 
			      << 6U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out21 
	= ((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out21)) 
	   | (0xffffffe0U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_10) 
			      << 5U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out20 
	= ((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out20)) 
	   | (0xfffffff0U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_11) 
			      << 4U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out19 
	= ((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out19)) 
	   | (0xfffffff8U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_12) 
			      << 3U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out18 
	= ((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out18)) 
	   | (0xfffffffcU & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_13) 
			      << 2U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out17 
	= ((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out17)) 
	   | (0xfffffffeU & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_14) 
			      << 1U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out16 
	= ((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out16)) 
	   | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_15) 
	      & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)));
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4Gpios__DOT__writeOccur;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4Gpios__DOT__writeOccur;
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4Gpios__DOT__readRsp_data;
    vlTOPp->gpio_0 = ((((((((((((((((((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out0) 
				      & (IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_15)) 
				     | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out1) 
					& ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_14) 
					   << 1U))) 
				    | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out2) 
				       & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_13) 
					  << 2U))) 
				   | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out3) 
				      & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_12) 
					 << 3U))) | 
				  ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out4) 
				   & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_11) 
				      << 4U))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out5) 
						  & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_10) 
						     << 5U))) 
				| ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out6) 
				   & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_9) 
				      << 6U))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out7) 
						  & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_8) 
						     << 7U))) 
			      | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out8) 
				 & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_7) 
				    << 8U))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out9) 
						& ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_6) 
						   << 9U))) 
			    | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out10) 
			       & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_5) 
				  << 0xaU))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out11) 
						& ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_4) 
						   << 0xbU))) 
			  | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out12) 
			     & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_3) 
				<< 0xcU))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out13) 
					      & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_2) 
						 << 0xdU))) 
			| ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out14) 
			   & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_1) 
			      << 0xeU))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out15) 
					    & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0) 
					       << 0xfU))) 
		      & ((((((((((((((((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_15) 
				       | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_14) 
					  << 1U)) | 
				      ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_13) 
				       << 2U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_12) 
						  << 3U)) 
				    | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_11) 
				       << 4U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_10) 
						  << 5U)) 
				  | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_9) 
				     << 6U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_8) 
						<< 7U)) 
				| ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_7) 
				   << 8U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_6) 
					      << 9U)) 
			      | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_5) 
				 << 0xaU)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_4) 
					      << 0xbU)) 
			    | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_3) 
			       << 0xcU)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_2) 
					    << 0xdU)) 
			  | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_1) 
			     << 0xeU)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0) 
					  << 0xfU)));
    vlTOPp->gpio_1 = ((((((((((((((((((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out16) 
				      & (IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_15)) 
				     | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out17) 
					& ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_14) 
					   << 1U))) 
				    | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out18) 
				       & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_13) 
					  << 2U))) 
				   | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out19) 
				      & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_12) 
					 << 3U))) | 
				  ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out20) 
				   & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_11) 
				      << 4U))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out21) 
						  & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_10) 
						     << 5U))) 
				| ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out22) 
				   & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_9) 
				      << 6U))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out23) 
						  & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_8) 
						     << 7U))) 
			      | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out24) 
				 & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_7) 
				    << 8U))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out25) 
						& ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_6) 
						   << 9U))) 
			    | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out26) 
			       & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_5) 
				  << 0xaU))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out27) 
						& ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_4) 
						   << 0xbU))) 
			  | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out28) 
			     & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_3) 
				<< 0xcU))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out29) 
					      & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_2) 
						 << 0xdU))) 
			| ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out30) 
			   & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_1) 
			      << 0xeU))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out31) 
					    & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1) 
					       << 0xfU))) 
		      & ((((((((((((((((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_15) 
				       | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_14) 
					  << 1U)) | 
				      ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_13) 
				       << 2U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_12) 
						  << 3U)) 
				    | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_11) 
				       << 4U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_10) 
						  << 5U)) 
				  | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_9) 
				     << 6U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_8) 
						<< 7U)) 
				| ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_7) 
				   << 8U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_6) 
					      << 9U)) 
			      | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_5) 
				 << 0xaU)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_4) 
					      << 0xbU)) 
			    | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_3) 
			       << 0xcU)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_2) 
					    << 0xdU)) 
			  | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_1) 
			     << 0xeU)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1) 
					  << 0xfU)));
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
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->_settle__TOP__8(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->_settle__TOP__14(vlSymsp);
    vlTOPp->_settle__TOP__15(vlSymsp);
    vlTOPp->_combo__TOP__18(vlSymsp);
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
    gpio_0 = VL_RAND_RESET_I(16);
    gpio_1 = VL_RAND_RESET_I(16);
    interrupt_0 = VL_RAND_RESET_I(1);
    interrupt_1 = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT__gpios_2_gpios_read = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_3_gpios_read = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_2_gpios_write = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_2_gpios_read_1 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_2_interrupt = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_3_gpios_write = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_3_gpios_read_1 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT___zz_gpio_1 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_1_1 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_1_2 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_1_3 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_1_4 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_1_5 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_1_6 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_1_7 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_1_8 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_1_9 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_1_10 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_1_11 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_1_12 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_1_13 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_1_14 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_1_15 = VL_RAND_RESET_I(1);
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
    AxiLite4Gpios__DOT___zz_gpio_0_14 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_gpio_0_15 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT__writeJoinEvent_valid = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2 = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT___zz_axil4Ctrl_bresp = VL_RAND_RESET_I(2);
    AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr = VL_RAND_RESET_I(8);
    AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_prot = VL_RAND_RESET_I(3);
    AxiLite4Gpios__DOT__readRsp_data = VL_RAND_RESET_I(32);
    AxiLite4Gpios__DOT__writeOccur = VL_RAND_RESET_I(1);
    AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_2_ir_high_driver = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_2_ir_low_driver = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_2_ir_rise_driver = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_2_ir_fall_driver = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_3_ir_high_driver = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_3_ir_low_driver = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_3_ir_rise_driver = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_3_ir_fall_driver = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_0__out__out0 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_0__out__out1 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_0__out__out2 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_0__out__out3 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_0__out__out4 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_0__out__out5 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_0__out__out6 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_0__out__out7 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_0__out__out8 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_0__out__out9 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_0__out__out10 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_0__out__out11 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_0__out__out12 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_0__out__out13 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_0__out__out14 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_0__out__out15 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_1__out__out16 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_1__out__out17 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_1__out__out18 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_1__out__out19 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_1__out__out20 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_1__out__out21 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_1__out__out22 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_1__out__out23 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_1__out__out24 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_1__out__out25 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_1__out__out26 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_1__out__out27 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_1__out__out28 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_1__out__out29 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_1__out__out30 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpio_1__out__out31 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_2__DOT__last = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_0 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_3__DOT__last = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_3__DOT___zz_1 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_0 = VL_RAND_RESET_I(16);
    AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1 = VL_RAND_RESET_I(16);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VAxiLite4Gpios::_configure_coverage(VAxiLite4Gpios__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_configure_coverage\n"); );
}
