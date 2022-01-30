// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOFDMEqualizer.h for the primary calling header

#include "VOFDMEqualizer.h"    // For This
#include "VOFDMEqualizer__Syms.h"

//--------------------


void VOFDMEqualizer::eval() {
    VOFDMEqualizer__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VOFDMEqualizer::eval\n"); );
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

void VOFDMEqualizer::_eval_initial_loop(VOFDMEqualizer__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__9(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_sequent__TOP__9\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1455
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_14;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1455
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_14;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:759
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_0 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:760
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_0 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:761
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_1 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:762
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_1 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:763
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_2 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:764
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_2 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:765
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_3 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:766
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_3 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:767
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_4 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:768
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_4 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:769
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_5 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:770
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_5 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:771
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_6 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:772
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_6 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:773
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_7 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:774
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_7 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:775
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_8 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:776
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_8 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:777
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_9 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:778
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_9 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:779
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_10 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:780
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_10 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:781
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_11 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:782
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_11 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:783
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_12 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:784
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_12 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:785
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_13 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:786
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_13 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:787
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_14 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:788
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_14 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:789
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_15 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:790
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_15 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:791
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_16 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:792
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_16 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:793
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_17 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:794
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_17 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:795
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_18 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:796
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_18 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:797
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_19 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:798
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_19 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:799
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_20 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:800
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_20 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:801
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_21 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:802
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_21 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:803
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_22 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:804
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_22 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:805
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_23 = 0x80U;
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__10(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_sequent__TOP__10\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:806
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_23 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:807
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_24 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:808
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_24 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:809
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_25 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:810
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_25 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:811
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_26 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:812
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_26 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:813
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_27 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:814
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_27 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:815
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_28 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:816
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_28 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:817
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_29 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:818
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_29 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:819
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_30 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:820
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_30 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:821
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_31 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:822
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_31 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:823
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_32 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:824
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_32 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:825
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_33 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:826
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_33 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:827
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_34 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:828
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_34 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:829
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_35 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:830
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_35 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:831
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_36 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:832
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_36 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:833
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_37 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:834
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_37 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:835
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_38 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:836
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_38 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:837
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_39 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:838
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_39 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:839
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_40 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:840
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_40 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:841
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_41 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:842
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_41 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:843
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_42 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:844
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_42 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:845
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_43 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:846
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_43 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:847
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_44 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:848
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_44 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:849
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_45 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:850
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_45 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:851
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_46 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:852
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_46 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:853
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_47 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:854
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_47 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:855
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_48 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:856
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_48 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:857
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_49 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:858
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_49 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:859
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_50 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:860
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_50 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:861
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_51 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:862
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_51 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:863
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_52 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:864
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_52 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:865
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_53 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:866
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_53 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:867
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_54 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:868
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_54 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:869
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_55 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:870
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_55 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:871
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_56 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:872
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_56 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:873
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_57 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:874
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_57 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:875
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_58 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:876
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_58 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:877
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_59 = 0xff80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:878
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_59 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:879
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_60 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:880
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_60 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:881
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_61 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:882
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_61 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:883
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_62 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:884
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_62 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:885
    vlTOPp->OFDMEqualizer__DOT__cha_i_ref_63 = 0x80U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:886
    vlTOPp->OFDMEqualizer__DOT__cha_q_ref_63 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1471
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_16 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_15;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1471
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_16 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_15;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2213
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_60 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_59;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2213
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_60 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_59;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1290
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_16 
	= vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_15;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2214
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14) {
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14;
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14), 0xeU))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14), 0xeU))));
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z_1))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z_1))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2214
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14) {
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14;
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14), 0xeU))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14), 0xeU))));
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z_1))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z_1))));
    }
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__11(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_sequent__TOP__11\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1454
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_14 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_13;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1454
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_14 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_13;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1470
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_15 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_14;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1470
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_15 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_14;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2197
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_59 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_58;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2197
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_59 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_58;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1289
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_15 
	= vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_14;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1983
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z_1 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2198
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13) {
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13;
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13), 0xdU))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13), 0xdU))));
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1983
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z_1 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2198
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13) {
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13;
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13), 0xdU))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13), 0xdU))));
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74))));
    }
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__12(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_sequent__TOP__12\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1453
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_13 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_12;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1453
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_13 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_12;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1469
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_14 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_13;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1469
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_14 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_13;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2181
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_58 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_57;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2181
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_58 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_57;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1288
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_14 
	= vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_13;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1982
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74 = 0U;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_60)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2182
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12) {
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12;
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12), 0xcU))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12), 0xcU))));
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_73))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_73))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1982
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74 = 0U;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_60)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2182
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12) {
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12;
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12), 0xcU))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12), 0xcU))));
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_73))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_73))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1452
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_12 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_11;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1452
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_12 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_11;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1468
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_13 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_12;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1468
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_13 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_12;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2165
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_57 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_56;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2165
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_57 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_56;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1287
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_13 
	= vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_12;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1981
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_73 = 1U;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_59)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2166
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11) {
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11;
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11), 0xbU))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11), 0xbU))));
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_72))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_72))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1981
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_73 = 1U;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_59)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2166
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11) {
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11;
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11), 0xbU))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11), 0xbU))));
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_72))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_72))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1451
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_11 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_10;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1451
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_11 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_10;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1467
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_12 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_11;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1467
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_12 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_11;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2149
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_56 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_55;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2149
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_56 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_55;
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__13(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_sequent__TOP__13\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1286
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_12 
	= vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_11;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1980
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_72 = 2U;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_58)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2150
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10) {
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10;
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10), 0xaU))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10), 0xaU))));
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_71))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_71))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1980
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_72 = 2U;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_58)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2150
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10) {
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10;
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10), 0xaU))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10), 0xaU))));
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_71))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_71))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1450
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_10 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_9;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1450
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_10 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_9;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1466
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_11 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_10;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1466
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_11 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_10;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2133
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_55 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_54;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2133
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_55 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_54;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1285
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_11 
	= vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_10;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1979
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_71 = 4U;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_57)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2134
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9) {
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9;
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9), 9U))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9), 9U))));
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_70))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_70))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1979
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_71 = 4U;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_57)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2134
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9) {
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9;
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9), 9U))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9), 9U))));
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_70))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_70))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1449
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_9 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_8;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1449
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_9 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_8;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1465
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_10 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_9;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1465
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_10 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_9;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2117
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_54 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_53;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2117
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_54 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_53;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1284
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_10 
	= vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_9;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1978
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_70 = 8U;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_56)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2118
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8) {
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8;
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8), 8U))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8), 8U))));
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_69))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_69))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1978
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_70 = 8U;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_56)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2118
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8) {
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8;
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8), 8U))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8), 8U))));
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_69))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_69))));
    }
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__14(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_sequent__TOP__14\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1448
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_8 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_7;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1448
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_8 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_7;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1464
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_9 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_8;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1464
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_9 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_8;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2101
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_53 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_52;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2101
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_53 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_52;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1283
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_9 
	= vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_8;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1977
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_69 = 0x10U;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_55)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2102
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7) {
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7;
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7), 7U))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7), 7U))));
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_68))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_68))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1977
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_69 = 0x10U;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_55)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2102
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7) {
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7;
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7), 7U))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7), 7U))));
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_68))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_68))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1447
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_7 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_6;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1447
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_7 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_6;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1463
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_8 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_7;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1463
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_8 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_7;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2085
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_52 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_51;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2085
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_52 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_51;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1282
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_8 
	= vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_7;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1976
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_68 = 0x20U;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_54)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2086
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6) {
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6;
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6), 6U))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6), 6U))));
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_67))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_67))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1976
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_68 = 0x20U;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_54)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2086
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6) {
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6;
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6), 6U))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6), 6U))));
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_67))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_67))));
    }
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__15(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_sequent__TOP__15\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1446
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_6 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_5;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1446
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_6 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_5;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1462
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_7 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_6;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1462
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_7 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_6;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2069
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_51 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_50;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2069
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_51 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_50;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1281
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_7 
	= vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_6;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1975
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_67 = 0x40U;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_53)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2070
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5) {
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5;
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5), 5U))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5), 5U))));
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1975
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_67 = 0x40U;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_53)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2070
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5) {
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5;
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5), 5U))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5), 5U))));
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1445
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_5 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_4;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1445
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_5 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_4;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1461
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_6 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_5;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1461
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_6 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_5;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2053
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_50 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_49;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2053
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_50 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_49;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1280
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_6 
	= vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_5;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1974
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_52)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2054
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4) {
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4;
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4), 4U))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4), 4U))));
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1974
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66 = 0x80U;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_52)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2054
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4) {
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4;
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4), 4U))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4), 4U))));
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1444
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_4 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_3;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1444
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_4 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_3;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1460
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_5 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_4;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1460
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_5 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_4;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2037
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_49 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_48;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2037
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_49 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_48;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1279
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_5 
	= vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_4;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1973
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65 = 0x100U;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_51)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2038
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3) {
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3;
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3), 3U))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3), 3U))));
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64))));
    }
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__16(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_sequent__TOP__16\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1973
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65 = 0x100U;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_51)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2038
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3) {
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3;
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3), 3U))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3), 3U))));
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1443
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_3 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1443
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_3 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1459
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_4 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_3;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1459
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_4 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_3;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2021
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_48 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_47;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2021
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_48 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_47;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1278
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_4 
	= vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_3;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1972
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64 = 0x200U;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_50)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2022
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2) {
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2;
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2), 2U))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2), 2U))));
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1972
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64 = 0x200U;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_50)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2022
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2) {
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2;
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2), 2U))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2), 2U))));
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1442
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_2 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_1;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1442
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_2 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_1;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1458
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_3 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1458
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_3 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2005
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_47 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_46;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2005
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_47 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_46;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1277
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_3 
	= vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_2;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1971
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63 = 0x400U;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_49)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2006
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1) {
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1;
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1), 1U))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1), 1U))));
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1971
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63 = 0x400U;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_49)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:2006
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1) {
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1;
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
			      + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1), 1U))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
			      - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1), 1U))));
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62))));
    }
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__17(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_sequent__TOP__17\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1441
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_1 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1441
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_1 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1457
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_2 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_1;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1457
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_2 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_1;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1276
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_2 
	= vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_1;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1970
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62 = 0x800U;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_48)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1990
    if (vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid) {
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x;
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x))));
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1970
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62 = 0x800U;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_48)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1990
    if (vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid) {
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x;
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x))));
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32 
	    = (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75)
			   ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
			      - (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61))
			   : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
			      + (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61))));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1440
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign 
	= (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_i) 
		 >> 0xfU));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1440
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign 
	= (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_q) 
		 >> 0xfU));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1456
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_1 
	= vlTOPp->OFDMEqualizer__DOT__train_en;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1456
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_1 
	= vlTOPp->OFDMEqualizer__DOT__train_en;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:887
    if ((1U & (~ (IData)(vlTOPp->equalized_data_payload_last)))) {
	if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
	    if ((1U & (IData)((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt))))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_0 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 1U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_1 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 2U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_2 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 3U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_3 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 4U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_4 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 5U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_5 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 6U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_6 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 7U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_7 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 8U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_8 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 9U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_9 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0xaU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_10 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0xbU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_11 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0xcU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_12 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0xdU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_13 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0xeU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_14 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0xfU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_15 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x10U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_16 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x11U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_17 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x12U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_18 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x13U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_19 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x14U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_20 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x15U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_21 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x16U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_22 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x17U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_23 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x18U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_24 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x19U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_25 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x1aU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_26 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x1bU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_27 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x1cU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_28 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x1dU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_29 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x1eU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_30 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x1fU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_31 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x20U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_32 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x21U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_33 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x22U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_34 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x23U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_35 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x24U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_36 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x25U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_37 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x26U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_38 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x27U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_39 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x28U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_40 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x29U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_41 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x2aU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_42 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x2bU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_43 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x2cU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_44 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x2dU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_45 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x2eU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_46 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x2fU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_47 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x30U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_48 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x31U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_49 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x32U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_50 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x33U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_51 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x34U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_52 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x35U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_53 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x36U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_54 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x37U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_55 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x38U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_56 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x39U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_57 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x3aU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_58 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x3bU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_59 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x3cU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_60 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x3dU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_61 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x3eU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_62 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x3fU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_i_scale_63 
		    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt))))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_0 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 1U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_1 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 2U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_2 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 3U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_3 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 4U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_4 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 5U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_5 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 6U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_6 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 7U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_7 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 8U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_8 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 9U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_9 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0xaU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_10 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0xbU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_11 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0xcU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_12 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0xdU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_13 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0xeU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_14 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0xfU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_15 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x10U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_16 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x11U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_17 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x12U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_18 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x13U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_19 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x14U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_20 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x15U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_21 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x16U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_22 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x17U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_23 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x18U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_24 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x19U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_25 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x1aU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_26 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x1bU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_27 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x1cU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_28 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x1dU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_29 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x1eU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_30 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x1fU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_31 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x20U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_32 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x21U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_33 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x22U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_34 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x23U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_35 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x24U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_36 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x25U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_37 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x26U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_38 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x27U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_39 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x28U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_40 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x29U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_41 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x2aU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_42 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x2bU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_43 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x2cU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_44 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x2dU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_45 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x2eU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_46 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x2fU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_47 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x30U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_48 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x31U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_49 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x32U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_50 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x33U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_51 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x34U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_52 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x35U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_53 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x36U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_54 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x37U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_55 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x38U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_56 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x39U)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_57 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x3aU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_58 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x3bU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_59 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x3cU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_60 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x3dU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_61 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x3eU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_62 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)) 
			       >> 0x3fU)))) {
		vlTOPp->OFDMEqualizer__DOT__cha_q_scale_63 
		    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload;
	    }
	}
    }
    vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_1 
	= vlTOPp->raw_data_payload_last;
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__18(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_sequent__TOP__18\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1969
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61 = 0x1000U;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_47)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1984
    if (vlTOPp->raw_data_valid) {
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x 
	    = (0xffffU & (((0x8000U & (IData)(vlTOPp->raw_data_payload_fragment_cha_i))
			    ? (~ (IData)(vlTOPp->raw_data_payload_fragment_cha_i))
			    : (IData)(vlTOPp->raw_data_payload_fragment_cha_i)) 
			  + (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_i) 
				   >> 0xfU))));
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16 
	    = ((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
	        ? (IData)(vlTOPp->OFDMEqualizer__DOT___zz_ref_data)
	        : 0U);
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31 
	    = ((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
	        ? 0U : (IData)(vlTOPp->OFDMEqualizer__DOT___zz_scale));
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_46 
	    = (1U & (~ (IData)(vlTOPp->OFDMEqualizer__DOT__train_en)));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1969
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61 = 0x1000U;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_47)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
				     >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1984
    if (vlTOPp->raw_data_valid) {
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x 
	    = (0xffffU & (((0x8000U & (IData)(vlTOPp->raw_data_payload_fragment_cha_q))
			    ? (~ (IData)(vlTOPp->raw_data_payload_fragment_cha_q))
			    : (IData)(vlTOPp->raw_data_payload_fragment_cha_q)) 
			  + (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_q) 
				   >> 0xfU))));
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16 
	    = ((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
	        ? (IData)(vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1)
	        : 0U);
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31 
	    = ((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
	        ? 0U : (IData)(vlTOPp->OFDMEqualizer__DOT___zz_scale_1));
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_46 
	    = (1U & (~ (IData)(vlTOPp->OFDMEqualizer__DOT__train_en)));
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload 
	= (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_16)
		       ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign)
			   ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
			   : (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
		       : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign)
			   ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
			   : (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload 
	= (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_16)
		       ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign)
			   ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
			   : (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
		       : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign)
			   ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
			   : (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))));
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__19(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_sequent__TOP__19\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_46)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_46)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
				     >> 0xfU)));
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__21(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_sequent__TOP__21\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__train_cnt,5,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13,0,0);
    VL_SIG8(__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14,0,0);
    //char	__VpadToAlign255[1];
    // Body
    __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid;
    __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1;
    __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2;
    __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3;
    __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4;
    __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5;
    __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6;
    __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7;
    __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8;
    __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9;
    __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10;
    __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11;
    __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12;
    __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13;
    __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14 
	= vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14;
    __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid;
    __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1;
    __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2;
    __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3;
    __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4;
    __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5;
    __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6;
    __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7;
    __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8;
    __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9;
    __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10;
    __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11;
    __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12;
    __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13;
    __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14 
	= vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14;
    __Vdly__OFDMEqualizer__DOT__train_cnt = vlTOPp->OFDMEqualizer__DOT__train_cnt;
    vlTOPp->__Vdly__OFDMEqualizer__DOT__cnt = vlTOPp->OFDMEqualizer__DOT__cnt;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1926
    if (vlTOPp->reset) {
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid = 0U;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1 = 0U;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2 = 0U;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3 = 0U;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4 = 0U;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5 = 0U;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6 = 0U;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7 = 0U;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8 = 0U;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9 = 0U;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10 = 0U;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11 = 0U;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12 = 0U;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13 = 0U;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14 = 0U;
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_15 = 0U;
    } else {
	vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_15 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1 
	    = vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid;
	__Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid 
	    = vlTOPp->raw_data_valid;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1926
    if (vlTOPp->reset) {
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid = 0U;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1 = 0U;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2 = 0U;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3 = 0U;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4 = 0U;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5 = 0U;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6 = 0U;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7 = 0U;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8 = 0U;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9 = 0U;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10 = 0U;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11 = 0U;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12 = 0U;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13 = 0U;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14 = 0U;
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_15 = 0U;
    } else {
	vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_15 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1 
	    = vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid;
	__Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid 
	    = vlTOPp->raw_data_valid;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1293
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__OFDMEqualizer__DOT__cnt = 0U;
	vlTOPp->OFDMEqualizer__DOT__train_en = 1U;
	__Vdly__OFDMEqualizer__DOT__train_cnt = 0U;
	vlTOPp->OFDMEqualizer__DOT__train_finished = 0U;
	vlTOPp->OFDMEqualizer__DOT__raw_data_ready_1 = 1U;
    } else {
	if (vlTOPp->raw_data_payload_last) {
	    vlTOPp->__Vdly__OFDMEqualizer__DOT__cnt = 0U;
	} else {
	    if (((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->raw_data_ready))) {
		vlTOPp->__Vdly__OFDMEqualizer__DOT__cnt 
		    = ((0x3fU == (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))
		        ? 0U : (IData)(vlTOPp->OFDMEqualizer__DOT___zz_cnt));
	    }
	}
	if (vlTOPp->equalized_data_payload_last) {
	    vlTOPp->OFDMEqualizer__DOT__train_en = 1U;
	} else {
	    if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l47) {
		vlTOPp->OFDMEqualizer__DOT__train_en = 0U;
	    }
	}
	if (vlTOPp->equalized_data_payload_last) {
	    __Vdly__OFDMEqualizer__DOT__train_cnt = 0U;
	    vlTOPp->OFDMEqualizer__DOT__train_finished = 0U;
	} else {
	    if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69) {
		__Vdly__OFDMEqualizer__DOT__train_cnt 
		    = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt)));
		if (vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l71) {
		    vlTOPp->OFDMEqualizer__DOT__train_finished = 1U;
		}
	    }
	}
	if (((IData)(vlTOPp->raw_data_payload_last) 
	     & ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->raw_data_ready)))) {
	    vlTOPp->OFDMEqualizer__DOT__raw_data_ready_1 = 0U;
	} else {
	    if (((IData)(vlTOPp->equalized_data_payload_last) 
		 & (IData)(vlTOPp->equalized_data_valid))) {
		vlTOPp->OFDMEqualizer__DOT__raw_data_ready_1 = 1U;
	    }
	}
    }
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid 
	= __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1 
	= __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2 
	= __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3 
	= __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4 
	= __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5 
	= __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6 
	= __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7 
	= __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8 
	= __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9 
	= __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10 
	= __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11 
	= __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12 
	= __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13 
	= __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13;
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14 
	= __Vdly__OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid 
	= __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1 
	= __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2 
	= __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3 
	= __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4 
	= __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5 
	= __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6 
	= __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7 
	= __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8 
	= __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9 
	= __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10 
	= __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11 
	= __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12 
	= __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13 
	= __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13;
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14 
	= __Vdly__OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14;
    vlTOPp->OFDMEqualizer__DOT__train_cnt = __Vdly__OFDMEqualizer__DOT__train_cnt;
}
