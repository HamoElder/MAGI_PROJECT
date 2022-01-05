// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4Gpios.h for the primary calling header

#include "VAxiLite4Gpios.h"    // For This
#include "VAxiLite4Gpios__Syms.h"

//--------------------


void VAxiLite4Gpios::eval() {
    VAxiLite4Gpios__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VAxiLite4Gpios::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VAxiLite4Gpios::_eval_initial_loop(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VAxiLite4Gpios::_sequent__TOP__3(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_sequent__TOP__3\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:388
    if (vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready) {
	vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bresp = 0U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:391
    if (vlTOPp->axil4Ctrl_arready) {
	vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr 
	    = vlTOPp->axil4Ctrl_araddr;
	vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_prot 
	    = vlTOPp->axil4Ctrl_arprot;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:500
    vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__last 
	= vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1;
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bresp;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:519
    vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1 
	= vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:518
    vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_0 
	= vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read;
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
}

VL_INLINE_OPT void VAxiLite4Gpios::_sequent__TOP__4(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_sequent__TOP__4\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:333
    if (vlTOPp->reset) {
	vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2 = 0U;
	vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid = 0U;
	vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver = 0U;
	vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver = 0U;
	vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_high_driver = 0U;
	vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_low_driver = 0U;
	vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_rise_driver = 0U;
	vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_fall_driver = 0U;
    } else {
	if (vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready) {
	    vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2 
		= vlTOPp->AxiLite4Gpios__DOT__writeJoinEvent_valid;
	}
	if (vlTOPp->axil4Ctrl_arready) {
	    vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid 
		= vlTOPp->axil4Ctrl_arvalid;
	}
	if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
		      >> 7U)))) {
	    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
			  >> 6U)))) {
		if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
			      >> 5U)))) {
		    if ((0x10U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
			if ((8U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
			    if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
				if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
					      >> 1U)))) {
				    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
					if (vlTOPp->AxiLite4Gpios__DOT__writeOccur) {
					    vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_fall_driver 
						= (0x3fffU 
						   & vlTOPp->axil4Ctrl_wdata);
					}
				    }
				}
			    } else {
				if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
					      >> 1U)))) {
				    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
					if (vlTOPp->AxiLite4Gpios__DOT__writeOccur) {
					    vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_rise_driver 
						= (0x3fffU 
						   & vlTOPp->axil4Ctrl_wdata);
					}
				    }
				}
			    }
			} else {
			    if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
				if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
					      >> 1U)))) {
				    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
					if (vlTOPp->AxiLite4Gpios__DOT__writeOccur) {
					    vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_low_driver 
						= (0x3fffU 
						   & vlTOPp->axil4Ctrl_wdata);
					}
				    }
				}
			    } else {
				if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
					      >> 1U)))) {
				    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
					if (vlTOPp->AxiLite4Gpios__DOT__writeOccur) {
					    vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_high_driver 
						= (0x3fffU 
						   & vlTOPp->axil4Ctrl_wdata);
					}
				    }
				}
			    }
			}
		    } else {
			if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
				      >> 3U)))) {
			    if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
				if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
					      >> 1U)))) {
				    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
					if (vlTOPp->AxiLite4Gpios__DOT__writeOccur) {
					    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver 
						= (0x3fffU 
						   & vlTOPp->axil4Ctrl_wdata);
					}
				    }
				}
			    } else {
				if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
					      >> 1U)))) {
				    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
					if (vlTOPp->AxiLite4Gpios__DOT__writeOccur) {
					    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver 
						= (0x3fffU 
						   & vlTOPp->axil4Ctrl_wdata);
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
}

VL_INLINE_OPT void VAxiLite4Gpios::_sequent__TOP__5(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_sequent__TOP__5\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2;
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
}

VL_INLINE_OPT void VAxiLite4Gpios::_combo__TOP__8(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_combo__TOP__8\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Gpios__DOT__writeJoinEvent_valid 
	= ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:249
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid)))) {
	vlTOPp->axil4Ctrl_arready = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:238
    vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready 
	= vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2)))) {
	vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT__writeOccur = ((IData)(vlTOPp->AxiLite4Gpios__DOT__writeJoinEvent_valid) 
					      & (IData)(vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready));
}

VL_INLINE_OPT void VAxiLite4Gpios::_sequent__TOP__9(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_sequent__TOP__9\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

VL_INLINE_OPT void VAxiLite4Gpios::_sequent__TOP__10(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_sequent__TOP__10\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out1 = 
	((0x3ffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out1)) 
	 | (0xfffffffeU & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_12) 
			    << 1U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out0 = 
	((0x3ffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out0)) 
	 | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_13) 
	    & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write)));
}

VL_INLINE_OPT void VAxiLite4Gpios::_combo__TOP__12(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_combo__TOP__12\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4Gpios__DOT__writeOccur;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4Gpios__DOT__writeOccur;
}

VL_INLINE_OPT void VAxiLite4Gpios::_sequent__TOP__13(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_sequent__TOP__13\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

VL_INLINE_OPT void VAxiLite4Gpios::_combo__TOP__14(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_combo__TOP__14\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:301
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read 
	= ((0x3ffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read)) 
	   | (1U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read 
	= ((0x3ffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read)) 
	   | (2U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read 
	= ((0x3ffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read)) 
	   | (4U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read 
	= ((0x3ff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read)) 
	   | (8U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read 
	= ((0x3fefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read)) 
	   | (0x10U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read 
	= ((0x3fdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read)) 
	   | (0x20U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read 
	= ((0x3fbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read)) 
	   | (0x40U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read 
	= ((0x3f7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read)) 
	   | (0x80U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read 
	= ((0x3effU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read)) 
	   | (0x100U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read 
	= ((0x3dffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read)) 
	   | (0x200U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read 
	= ((0x3bffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read)) 
	   | (0x400U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read 
	= ((0x37ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read)) 
	   | (0x800U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read 
	= ((0x2fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read)) 
	   | (0x1000U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read 
	= ((0x1fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read)) 
	   | (0x2000U & (IData)(vlTOPp->gpio_0)));
}

void VAxiLite4Gpios::_eval(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_eval\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    vlTOPp->_combo__TOP__8(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__9(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    vlTOPp->_combo__TOP__12(vlSymsp);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__13(vlSymsp);
    }
    vlTOPp->_combo__TOP__14(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VAxiLite4Gpios::_change_request(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_change_request\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAxiLite4Gpios::_change_request_1(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAxiLite4Gpios::_change_request_1\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
