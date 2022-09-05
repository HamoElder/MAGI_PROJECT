
#include <stdint.h>
#include <string>
#include <memory>
#include <jni.h>
#include <iostream>

#include "VCombCDMABench.h"
#ifdef TRACE
#include "verilated_vcd_c.h"
#endif
#include "VCombCDMABench__Syms.h"

using namespace std;

class ISignalAccess{
public:
  virtual ~ISignalAccess() {}

  virtual void getAU8(JNIEnv *env, jbyteArray value) {}
  virtual void getAU8_mem(JNIEnv *env, jbyteArray value, size_t index) {}
  virtual void setAU8(JNIEnv *env, jbyteArray value, int length) {}
  virtual void setAU8_mem(JNIEnv *env, jbyteArray value, int length, size_t index) {}

  virtual uint64_t getU64() = 0;
  virtual uint64_t getU64_mem(size_t index) = 0;
  virtual void setU64(uint64_t value) = 0;
  virtual void setU64_mem(uint64_t value, size_t index) = 0;
};

class  CDataSignalAccess : public ISignalAccess{
public:
    CData *raw;
    CDataSignalAccess(CData *raw) : raw(raw){}
    CDataSignalAccess(CData &raw) : raw(addressof(raw)){}
    uint64_t getU64() {return *raw;}
    uint64_t getU64_mem(size_t index) {return raw[index];}
    void setU64(uint64_t value)  {*raw = value; }
    void setU64_mem(uint64_t value, size_t index){raw[index] = value; }
};


class  SDataSignalAccess : public ISignalAccess{
public:
    SData *raw;
    SDataSignalAccess(SData *raw) : raw(raw){}
    SDataSignalAccess(SData &raw) : raw(addressof(raw)){}
    uint64_t getU64() {return *raw;}
    uint64_t getU64_mem(size_t index) {return raw[index];}
    void setU64(uint64_t value)  {*raw = value; }
    void setU64_mem(uint64_t value, size_t index){raw[index] = value; }
};


class  IDataSignalAccess : public ISignalAccess{
public:
    IData *raw;
    IDataSignalAccess(IData *raw) : raw(raw){}
    IDataSignalAccess(IData &raw) : raw(addressof(raw)){}
    uint64_t getU64() {return *raw;}
    uint64_t getU64_mem(size_t index) {return raw[index];}
    void setU64(uint64_t value)  {*raw = value; }
    void setU64_mem(uint64_t value, size_t index){raw[index] = value; }
};


class  QDataSignalAccess : public ISignalAccess{
public:
    QData *raw;
    QDataSignalAccess(QData *raw) : raw(raw){}
    QDataSignalAccess(QData &raw) : raw(addressof(raw)){}
    uint64_t getU64() {return *raw;}
    uint64_t getU64_mem(size_t index) {return raw[index];}
    void setU64(uint64_t value)  {*raw = value; }
    void setU64_mem(uint64_t value, size_t index){raw[index] = value; }
};

class  WDataSignalAccess : public ISignalAccess{
public:
    WData *raw;
    uint32_t width;
    uint32_t wordsCount;
    bool sint;

    WDataSignalAccess(WData *raw, uint32_t width, bool sint) : 
      raw(raw), width(width), wordsCount((width+31)/32), sint(sint) {}

    uint64_t getU64_mem(size_t index) {
      WData *mem_el = &(raw[index*wordsCount]);
      return mem_el[0] + (((uint64_t)mem_el[1]) << 32);
    }

    uint64_t getU64() { return getU64_mem(0); }

    void setU64_mem(uint64_t value, size_t index)  {
      WData *mem_el = &(raw[index*wordsCount]);
      mem_el[0] = value;
      mem_el[1] = value >> 32;
      uint32_t padding = ((value & 0x8000000000000000l) && sint) ? 0xFFFFFFFF : 0;
      for(uint32_t idx = 2;idx < wordsCount;idx++){
        mem_el[idx] = padding;
      }

      if(width%32 != 0) mem_el[wordsCount-1] &= (1l << width%32)-1;
    }

    void setU64(uint64_t value)  {
      setU64_mem(value, 0);
    }
    
    void getAU8_mem(JNIEnv *env, jbyteArray value, size_t index) {
      WData *mem_el = &(raw[index*wordsCount]);
      uint32_t byteCount = wordsCount*4;
      uint32_t shift = 32-(width % 32);
      uint32_t backup = mem_el[wordsCount-1];
      uint8_t values[byteCount + !sint];
      if(sint && shift != 32) mem_el[wordsCount-1] = (((int32_t)backup) << shift) >> shift;
      for(uint32_t idx = 0;idx < byteCount;idx++){
        values[idx + !sint] = ((uint8_t*)mem_el)[byteCount-idx-1];
      }
      (env)->SetByteArrayRegion ( value, 0, byteCount + !sint, reinterpret_cast<jbyte*>(values));
      mem_el[wordsCount-1] = backup;
    }
  
    void getAU8(JNIEnv *env, jbyteArray value) {
      getAU8_mem(env, value, 0);
    }

    void setAU8_mem(JNIEnv *env, jbyteArray jvalue, int length, size_t index) {
      WData *mem_el = &(raw[index*wordsCount]);
      jbyte value[length];
      (env)->GetByteArrayRegion( jvalue, 0, length, value);
      uint32_t padding = (value[0] & 0x80 && sint) != 0 ? 0xFFFFFFFF : 0;
      for(uint32_t idx = 0;idx < wordsCount;idx++){
        mem_el[idx] = padding;
      }
      uint32_t capedLength = length > 4*wordsCount ? 4*wordsCount : length;
      for(uint32_t idx = 0;idx < capedLength;idx++){
        ((uint8_t*)mem_el)[idx] = value[length-idx-1];
      }
      if(width%32 != 0) mem_el[wordsCount-1] &= (1l << width%32)-1;
    }

    void setAU8(JNIEnv *env, jbyteArray jvalue, int length) {
      setAU8_mem(env, jvalue, length, 0);
    }
};

class Wrapper_1;
thread_local Wrapper_1 *simHandle1;

#include <chrono>
using namespace std::chrono;

class Wrapper_1{
public:
    uint64_t time;
    high_resolution_clock::time_point lastFlushAt;
    uint32_t timeCheck;
    bool waveEnabled;
    VCombCDMABench top;
    ISignalAccess *signalAccess[84];
    #ifdef TRACE
	  VerilatedVcdC tfp;
	  #endif
    string name;

    Wrapper_1(const char * name){
      simHandle1 = this;
      time = 0;
      timeCheck = 0;
      lastFlushAt = high_resolution_clock::now();
      waveEnabled = true;
      signalAccess[0] = new CDataSignalAccess( top.axil4Ctrl_spread_aw_valid );
      signalAccess[1] = new CDataSignalAccess( top.axil4Ctrl_spread_aw_ready );
      signalAccess[2] = new CDataSignalAccess( top.axil4Ctrl_spread_aw_payload_addr );
      signalAccess[3] = new CDataSignalAccess( top.axil4Ctrl_spread_aw_payload_prot );
      signalAccess[4] = new CDataSignalAccess( top.axil4Ctrl_spread_w_valid );
      signalAccess[5] = new CDataSignalAccess( top.axil4Ctrl_spread_w_ready );
      signalAccess[6] = new IDataSignalAccess( top.axil4Ctrl_spread_w_payload_data );
      signalAccess[7] = new CDataSignalAccess( top.axil4Ctrl_spread_w_payload_strb );
      signalAccess[8] = new CDataSignalAccess( top.axil4Ctrl_spread_b_valid );
      signalAccess[9] = new CDataSignalAccess( top.axil4Ctrl_spread_b_ready );
      signalAccess[10] = new CDataSignalAccess( top.axil4Ctrl_spread_b_payload_resp );
      signalAccess[11] = new CDataSignalAccess( top.axil4Ctrl_spread_ar_valid );
      signalAccess[12] = new CDataSignalAccess( top.axil4Ctrl_spread_ar_ready );
      signalAccess[13] = new CDataSignalAccess( top.axil4Ctrl_spread_ar_payload_addr );
      signalAccess[14] = new CDataSignalAccess( top.axil4Ctrl_spread_ar_payload_prot );
      signalAccess[15] = new CDataSignalAccess( top.axil4Ctrl_spread_r_valid );
      signalAccess[16] = new CDataSignalAccess( top.axil4Ctrl_spread_r_ready );
      signalAccess[17] = new IDataSignalAccess( top.axil4Ctrl_spread_r_payload_data );
      signalAccess[18] = new CDataSignalAccess( top.axil4Ctrl_spread_r_payload_resp );
      signalAccess[19] = new CDataSignalAccess( top.axil4Ctrl_despread_aw_valid );
      signalAccess[20] = new CDataSignalAccess( top.axil4Ctrl_despread_aw_ready );
      signalAccess[21] = new CDataSignalAccess( top.axil4Ctrl_despread_aw_payload_addr );
      signalAccess[22] = new CDataSignalAccess( top.axil4Ctrl_despread_aw_payload_prot );
      signalAccess[23] = new CDataSignalAccess( top.axil4Ctrl_despread_w_valid );
      signalAccess[24] = new CDataSignalAccess( top.axil4Ctrl_despread_w_ready );
      signalAccess[25] = new IDataSignalAccess( top.axil4Ctrl_despread_w_payload_data );
      signalAccess[26] = new CDataSignalAccess( top.axil4Ctrl_despread_w_payload_strb );
      signalAccess[27] = new CDataSignalAccess( top.axil4Ctrl_despread_b_valid );
      signalAccess[28] = new CDataSignalAccess( top.axil4Ctrl_despread_b_ready );
      signalAccess[29] = new CDataSignalAccess( top.axil4Ctrl_despread_b_payload_resp );
      signalAccess[30] = new CDataSignalAccess( top.axil4Ctrl_despread_ar_valid );
      signalAccess[31] = new CDataSignalAccess( top.axil4Ctrl_despread_ar_ready );
      signalAccess[32] = new CDataSignalAccess( top.axil4Ctrl_despread_ar_payload_addr );
      signalAccess[33] = new CDataSignalAccess( top.axil4Ctrl_despread_ar_payload_prot );
      signalAccess[34] = new CDataSignalAccess( top.axil4Ctrl_despread_r_valid );
      signalAccess[35] = new CDataSignalAccess( top.axil4Ctrl_despread_r_ready );
      signalAccess[36] = new IDataSignalAccess( top.axil4Ctrl_despread_r_payload_data );
      signalAccess[37] = new CDataSignalAccess( top.axil4Ctrl_despread_r_payload_resp );
      signalAccess[38] = new CDataSignalAccess( top.base_iq_in_valid );
      signalAccess[39] = new CDataSignalAccess( top.base_iq_in_ready );
      signalAccess[40] = new SDataSignalAccess( top.base_iq_in_payload_0_cha_i );
      signalAccess[41] = new SDataSignalAccess( top.base_iq_in_payload_0_cha_q );
      signalAccess[42] = new SDataSignalAccess( top.base_iq_in_payload_1_cha_i );
      signalAccess[43] = new SDataSignalAccess( top.base_iq_in_payload_1_cha_q );
      signalAccess[44] = new SDataSignalAccess( top.base_iq_in_payload_2_cha_i );
      signalAccess[45] = new SDataSignalAccess( top.base_iq_in_payload_2_cha_q );
      signalAccess[46] = new SDataSignalAccess( top.base_iq_in_payload_3_cha_i );
      signalAccess[47] = new SDataSignalAccess( top.base_iq_in_payload_3_cha_q );
      signalAccess[48] = new SDataSignalAccess( top.base_iq_in_payload_4_cha_i );
      signalAccess[49] = new SDataSignalAccess( top.base_iq_in_payload_4_cha_q );
      signalAccess[50] = new SDataSignalAccess( top.base_iq_in_payload_5_cha_i );
      signalAccess[51] = new SDataSignalAccess( top.base_iq_in_payload_5_cha_q );
      signalAccess[52] = new SDataSignalAccess( top.base_iq_in_payload_6_cha_i );
      signalAccess[53] = new SDataSignalAccess( top.base_iq_in_payload_6_cha_q );
      signalAccess[54] = new SDataSignalAccess( top.base_iq_in_payload_7_cha_i );
      signalAccess[55] = new SDataSignalAccess( top.base_iq_in_payload_7_cha_q );
      signalAccess[56] = new CDataSignalAccess( top.base_sub_iqs_0_valid );
      signalAccess[57] = new SDataSignalAccess( top.base_sub_iqs_0_payload_cha_i );
      signalAccess[58] = new SDataSignalAccess( top.base_sub_iqs_0_payload_cha_q );
      signalAccess[59] = new CDataSignalAccess( top.base_sub_iqs_1_valid );
      signalAccess[60] = new SDataSignalAccess( top.base_sub_iqs_1_payload_cha_i );
      signalAccess[61] = new SDataSignalAccess( top.base_sub_iqs_1_payload_cha_q );
      signalAccess[62] = new CDataSignalAccess( top.base_sub_iqs_2_valid );
      signalAccess[63] = new SDataSignalAccess( top.base_sub_iqs_2_payload_cha_i );
      signalAccess[64] = new SDataSignalAccess( top.base_sub_iqs_2_payload_cha_q );
      signalAccess[65] = new CDataSignalAccess( top.base_sub_iqs_3_valid );
      signalAccess[66] = new SDataSignalAccess( top.base_sub_iqs_3_payload_cha_i );
      signalAccess[67] = new SDataSignalAccess( top.base_sub_iqs_3_payload_cha_q );
      signalAccess[68] = new CDataSignalAccess( top.base_sub_iqs_4_valid );
      signalAccess[69] = new SDataSignalAccess( top.base_sub_iqs_4_payload_cha_i );
      signalAccess[70] = new SDataSignalAccess( top.base_sub_iqs_4_payload_cha_q );
      signalAccess[71] = new CDataSignalAccess( top.base_sub_iqs_5_valid );
      signalAccess[72] = new SDataSignalAccess( top.base_sub_iqs_5_payload_cha_i );
      signalAccess[73] = new SDataSignalAccess( top.base_sub_iqs_5_payload_cha_q );
      signalAccess[74] = new CDataSignalAccess( top.base_sub_iqs_6_valid );
      signalAccess[75] = new SDataSignalAccess( top.base_sub_iqs_6_payload_cha_i );
      signalAccess[76] = new SDataSignalAccess( top.base_sub_iqs_6_payload_cha_q );
      signalAccess[77] = new CDataSignalAccess( top.base_sub_iqs_7_valid );
      signalAccess[78] = new SDataSignalAccess( top.base_sub_iqs_7_payload_cha_i );
      signalAccess[79] = new SDataSignalAccess( top.base_sub_iqs_7_payload_cha_q );
      signalAccess[80] = new CDataSignalAccess( top.rf_clk );
      signalAccess[81] = new CDataSignalAccess( top.rf_resetn );
      signalAccess[82] = new CDataSignalAccess( top.clk );
      signalAccess[83] = new CDataSignalAccess( top.reset );

      #ifdef TRACE
      Verilated::traceEverOn(true);
      top.trace(&tfp, 99);
      tfp.open((std::string("/mnt/BackUp/IdeaProjects/MAGI_PROJECT/./simWorkspace/CombCDMABench/") + name + ".vcd").c_str());
      #endif
      this->name = name;
    }

    virtual ~Wrapper_1(){
      for(int idx = 0;idx < 84;idx++){
          delete signalAccess[idx];
      }

      #ifdef TRACE
      if(waveEnabled) tfp.dump((vluint64_t)time);
      tfp.close();
      #endif
      #ifdef COVERAGE
      VerilatedCov::write((("/mnt/BackUp/IdeaProjects/MAGI_PROJECT/./simWorkspace/CombCDMABench/") + name + ".dat").c_str());
      #endif
    }

};

double sc_time_stamp () {
  return simHandle1->time;
}


#ifdef __cplusplus
extern "C" {
#endif
#include <stdio.h>
#include <stdint.h>

#define API __attribute__((visibility("default")))


JNIEXPORT Wrapper_1 * API JNICALL Java_wrapper_1verilator_VerilatorNative_newHandle_11
  (JNIEnv * env, jobject obj, jstring name, jint seedValue){
    #if defined(_WIN32) && !defined(__CYGWIN__)
    srand(seedValue);
    #else
    srand48(seedValue);
    #endif
    Verilated::randReset(2);
    const char* ch = env->GetStringUTFChars(name, 0);
    Wrapper_1 *handle = new Wrapper_1(ch);
    env->ReleaseStringUTFChars(name, ch);
    return handle;
}

JNIEXPORT jboolean API JNICALL Java_wrapper_1verilator_VerilatorNative_eval_11
  (JNIEnv *, jobject, Wrapper_1 *handle){
   handle->top.eval();
   return Verilated::gotFinish();
}


JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_sleep_11
  (JNIEnv *, jobject, Wrapper_1 *handle, uint64_t cycles){
  #ifdef TRACE
  if(handle->waveEnabled) {
    handle->tfp.dump((vluint64_t)handle->time);
  }
  handle->timeCheck++;
  if(handle->timeCheck > 10000){
    handle->timeCheck = 0;
    high_resolution_clock::time_point timeNow = high_resolution_clock::now();
    duration<double, std::milli> time_span = timeNow - handle->lastFlushAt;
    if(time_span.count() > 1e3){
      handle->lastFlushAt = timeNow;
      handle->tfp.flush();
    }
  }
  #endif
  handle->time += cycles;
}

JNIEXPORT jlong API JNICALL Java_wrapper_1verilator_VerilatorNative_getU64_11
  (JNIEnv *, jobject, Wrapper_1 *handle, int id){
  return handle->signalAccess[id]->getU64();
}

JNIEXPORT jlong API JNICALL Java_wrapper_1verilator_VerilatorNative_getU64mem_11
  (JNIEnv *, jobject, Wrapper_1 *handle, int id, uint64_t index){
  return handle->signalAccess[id]->getU64_mem(index);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_setU64_11
  (JNIEnv *, jobject, Wrapper_1 *handle, int id, uint64_t value){
  handle->signalAccess[id]->setU64(value);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_setU64mem_11
  (JNIEnv *, jobject, Wrapper_1 *handle, int id, uint64_t value, uint64_t index){
  handle->signalAccess[id]->setU64_mem(value, index);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_deleteHandle_11
  (JNIEnv *, jobject, Wrapper_1 * handle){
  delete handle;
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_getAU8_11
  (JNIEnv * env, jobject obj, Wrapper_1 * handle, jint id, jbyteArray value){
  handle->signalAccess[id]->getAU8(env, value);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_getAU8mem_11
  (JNIEnv * env, jobject obj, Wrapper_1 * handle, jint id, jbyteArray value, uint64_t index){
  handle->signalAccess[id]->getAU8_mem(env, value, index);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_setAU8_11
  (JNIEnv * env, jobject obj, Wrapper_1 * handle, jint id, jbyteArray value, jint length){
  handle->signalAccess[id]->setAU8(env, value, length);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_setAU8mem_11
  (JNIEnv * env, jobject obj, Wrapper_1 * handle, jint id, jbyteArray value, jint length, uint64_t index){
  handle->signalAccess[id]->setAU8_mem(env, value, length, index);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_enableWave_11
  (JNIEnv *, jobject, Wrapper_1 * handle){
  handle->waveEnabled = true;
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_disableWave_11
  (JNIEnv *, jobject, Wrapper_1 * handle){
  handle->waveEnabled = false;
}

#ifdef __cplusplus
}
#endif
     