// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSYSTOLICFIR_H_
#define _VSYSTOLICFIR_H_  // guard

#include "verilated.h"

//==========

class VSystolicFIR__Syms;
class VSystolicFIR_VerilatedVcd;


//----------

VL_MODULE(VSystolicFIR) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_0_valid,0,0);
    VL_IN8(raw_data_1_valid,0,0);
    VL_IN8(raw_data_2_valid,0,0);
    VL_IN8(raw_data_3_valid,0,0);
    VL_OUT8(filtered_data_0_valid,0,0);
    VL_OUT8(filtered_data_1_valid,0,0);
    VL_OUT8(filtered_data_2_valid,0,0);
    VL_OUT8(filtered_data_3_valid,0,0);
    VL_IN16(raw_data_0_payload,15,0);
    VL_IN16(raw_data_1_payload,15,0);
    VL_IN16(raw_data_2_payload,15,0);
    VL_IN16(raw_data_3_payload,15,0);
    VL_OUT(filtered_data_0_payload,31,0);
    VL_OUT(filtered_data_1_payload,31,0);
    VL_OUT(filtered_data_2_payload,31,0);
    VL_OUT(filtered_data_3_payload,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_116__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_117__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_118__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_119__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_120__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_121__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_122__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_123__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_124__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_125__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_126__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_127__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_128__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_129__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_130__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_131__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_132__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_133__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_134__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_135__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_136__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_137__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_138__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_139__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_140__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_141__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_142__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_143__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_144__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_145__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_146__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_147__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_148__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_149__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_150__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_151__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_152__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_153__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_154__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_155__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_156__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_157__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_158__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_159__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_160__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_161__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_162__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_163__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_164__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_165__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_166__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_167__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_168__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_169__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_170__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_171__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_172__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_173__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_174__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_175__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_176__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_177__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_178__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_179__DOT__valid_regNext;
    };
    struct {
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_180__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_181__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_182__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_183__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_184__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_185__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_186__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_187__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_188__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_189__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_190__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_191__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_192__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_193__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_194__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_195__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_196__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_197__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_198__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_199__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_200__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_201__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_202__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_203__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_204__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_205__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_206__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_207__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_208__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_209__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_210__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_211__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_212__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_213__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_214__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_215__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_216__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_217__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_218__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_219__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_220__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_221__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_222__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_223__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_224__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_225__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_226__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_227__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_228__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_229__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_230__DOT__valid_regNext;
        CData/*0:0*/ SystolicFIR__DOT__systolicCore_231__DOT__valid_regNext;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_116__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_116__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_117__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_117__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_118__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_118__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_119__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_119__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_120__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_120__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_121__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_121__DOT__shiftRegister_116__DOT__shift_reg_1;
    };
    struct {
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_122__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_122__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_123__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_123__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_124__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_124__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_125__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_125__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_126__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_126__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_127__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_127__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_128__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_128__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_129__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_129__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_130__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_130__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_131__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_131__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_132__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_132__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_133__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_133__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_134__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_134__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_135__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_135__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_136__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_136__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_137__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_137__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_138__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_138__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_139__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_139__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_140__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_140__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_141__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_141__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_142__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_142__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_143__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_143__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_144__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_144__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_145__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_145__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_146__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_146__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_147__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_147__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_148__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_148__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_149__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_149__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_150__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_150__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_151__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_151__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_152__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_152__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_153__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_153__DOT__shiftRegister_116__DOT__shift_reg_1;
    };
    struct {
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_154__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_154__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_155__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_155__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_156__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_156__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_157__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_157__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_158__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_158__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_159__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_159__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_160__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_160__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_161__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_161__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_162__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_162__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_163__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_163__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_164__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_164__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_165__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_165__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_166__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_166__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_167__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_167__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_168__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_168__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_169__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_169__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_170__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_170__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_171__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_171__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_172__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_172__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_173__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_173__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_174__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_174__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_175__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_175__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_176__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_176__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_177__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_177__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_178__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_178__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_179__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_179__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_180__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_180__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_181__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_181__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_182__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_182__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_183__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_183__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_184__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_184__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_185__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_185__DOT__shiftRegister_116__DOT__shift_reg_1;
    };
    struct {
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_186__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_186__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_187__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_187__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_188__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_188__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_189__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_189__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_190__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_190__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_191__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_191__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_192__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_192__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_193__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_193__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_194__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_194__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_195__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_195__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_196__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_196__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_197__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_197__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_198__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_198__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_199__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_199__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_200__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_200__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_201__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_201__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_202__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_202__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_203__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_203__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_204__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_204__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_205__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_205__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_206__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_206__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_207__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_207__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_208__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_208__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_209__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_209__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_210__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_210__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_211__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_211__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_212__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_212__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_213__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_213__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_214__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_214__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_215__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_215__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_216__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_216__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_217__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_217__DOT__shiftRegister_116__DOT__shift_reg_1;
    };
    struct {
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_218__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_218__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_219__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_219__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_220__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_220__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_221__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_221__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_222__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_222__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_223__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_223__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_224__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_224__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_225__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_225__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_226__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_226__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_227__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_227__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_228__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_228__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_229__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_229__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_230__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_230__DOT__shiftRegister_116__DOT__shift_reg_1;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_231__DOT__shiftRegister_116__DOT__shift_reg_0;
        IData/*31:0*/ SystolicFIR__DOT__systolicCore_231__DOT__shiftRegister_116__DOT__shift_reg_1;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_116__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_116__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_117__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_117__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_118__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_118__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_119__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_119__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_120__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_120__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_121__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_121__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_122__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_122__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_123__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_123__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_124__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_124__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_125__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_125__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_126__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_126__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_127__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_127__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_128__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_128__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_129__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_129__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_130__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_130__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_131__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_131__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_132__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_132__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_133__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_133__DOT__next_adder;
    };
    struct {
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_134__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_134__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_135__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_135__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_136__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_136__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_137__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_137__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_138__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_138__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_139__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_139__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_140__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_140__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_141__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_141__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_142__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_142__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_143__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_143__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_144__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_144__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_145__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_145__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_146__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_146__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_147__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_147__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_148__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_148__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_149__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_149__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_150__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_150__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_151__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_151__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_152__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_152__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_153__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_153__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_154__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_154__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_155__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_155__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_156__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_156__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_157__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_157__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_158__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_158__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_159__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_159__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_160__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_160__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_161__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_161__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_162__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_162__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_163__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_163__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_164__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_164__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_165__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_165__DOT__next_adder;
    };
    struct {
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_166__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_166__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_167__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_167__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_168__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_168__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_169__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_169__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_170__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_170__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_171__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_171__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_172__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_172__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_173__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_173__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_174__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_174__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_175__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_175__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_176__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_176__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_177__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_177__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_178__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_178__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_179__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_179__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_180__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_180__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_181__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_181__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_182__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_182__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_183__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_183__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_184__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_184__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_185__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_185__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_186__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_186__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_187__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_187__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_188__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_188__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_189__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_189__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_190__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_190__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_191__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_191__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_192__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_192__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_193__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_193__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_194__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_194__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_195__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_195__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_196__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_196__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_197__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_197__DOT__next_adder;
    };
    struct {
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_198__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_198__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_199__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_199__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_200__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_200__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_201__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_201__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_202__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_202__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_203__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_203__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_204__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_204__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_205__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_205__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_206__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_206__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_207__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_207__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_208__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_208__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_209__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_209__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_210__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_210__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_211__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_211__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_212__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_212__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_213__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_213__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_214__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_214__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_215__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_215__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_216__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_216__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_217__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_217__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_218__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_218__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_219__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_219__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_220__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_220__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_221__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_221__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_222__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_222__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_223__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_223__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_224__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_224__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_225__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_225__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_226__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_226__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_227__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_227__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_228__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_228__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_229__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_229__DOT__next_adder;
    };
    struct {
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_230__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_230__DOT__next_adder;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_231__DOT__mult;
        QData/*37:0*/ SystolicFIR__DOT__systolicCore_231__DOT__next_adder;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VSystolicFIR__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSystolicFIR);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VSystolicFIR(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VSystolicFIR();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VSystolicFIR__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VSystolicFIR__Syms* symsp, bool first);
  private:
    static QData _change_request(VSystolicFIR__Syms* __restrict vlSymsp);
    static QData _change_request_1(VSystolicFIR__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
    void _ctor_var_reset_1() VL_ATTR_COLD;
  public:
    static void _eval(VSystolicFIR__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VSystolicFIR__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VSystolicFIR__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__15(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__16(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__17(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__18(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__19(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__20(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__21(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__22(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__23(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__24(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__25(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__26(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__27(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__28(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__29(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__30(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _sequent__TOP__31(VSystolicFIR__Syms* __restrict vlSymsp);
    static void _settle__TOP__32(VSystolicFIR__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__3(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__5(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__7(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__2(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__3(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__4(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__5(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__6(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
