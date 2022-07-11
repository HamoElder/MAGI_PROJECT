
#include <stdint.h>
#include <string>
#include <memory>
#include <jni.h>
#include <iostream>

#include "VAxiLite4SGDMA.h"
#ifdef TRACE
#include "verilated_vcd_c.h"
#endif
#include "VAxiLite4SGDMA__Syms.h"

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
    VAxiLite4SGDMA top;
    ISignalAccess *signalAccess[111];
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
      signalAccess[0] = new CDataSignalAccess( top.axil4Ctrl_awvalid );
      signalAccess[1] = new CDataSignalAccess( top.axil4Ctrl_awready );
      signalAccess[2] = new CDataSignalAccess( top.axil4Ctrl_awaddr );
      signalAccess[3] = new CDataSignalAccess( top.axil4Ctrl_awprot );
      signalAccess[4] = new CDataSignalAccess( top.axil4Ctrl_wvalid );
      signalAccess[5] = new CDataSignalAccess( top.axil4Ctrl_wready );
      signalAccess[6] = new IDataSignalAccess( top.axil4Ctrl_wdata );
      signalAccess[7] = new CDataSignalAccess( top.axil4Ctrl_wstrb );
      signalAccess[8] = new CDataSignalAccess( top.axil4Ctrl_bvalid );
      signalAccess[9] = new CDataSignalAccess( top.axil4Ctrl_bready );
      signalAccess[10] = new CDataSignalAccess( top.axil4Ctrl_bresp );
      signalAccess[11] = new CDataSignalAccess( top.axil4Ctrl_arvalid );
      signalAccess[12] = new CDataSignalAccess( top.axil4Ctrl_arready );
      signalAccess[13] = new CDataSignalAccess( top.axil4Ctrl_araddr );
      signalAccess[14] = new CDataSignalAccess( top.axil4Ctrl_arprot );
      signalAccess[15] = new CDataSignalAccess( top.axil4Ctrl_rvalid );
      signalAccess[16] = new CDataSignalAccess( top.axil4Ctrl_rready );
      signalAccess[17] = new IDataSignalAccess( top.axil4Ctrl_rdata );
      signalAccess[18] = new CDataSignalAccess( top.axil4Ctrl_rresp );
      signalAccess[19] = new CDataSignalAccess( top.axil4SG_awvalid );
      signalAccess[20] = new CDataSignalAccess( top.axil4SG_awready );
      signalAccess[21] = new IDataSignalAccess( top.axil4SG_awaddr );
      signalAccess[22] = new CDataSignalAccess( top.axil4SG_awprot );
      signalAccess[23] = new CDataSignalAccess( top.axil4SG_wvalid );
      signalAccess[24] = new CDataSignalAccess( top.axil4SG_wready );
      signalAccess[25] = new IDataSignalAccess( top.axil4SG_wdata );
      signalAccess[26] = new CDataSignalAccess( top.axil4SG_wstrb );
      signalAccess[27] = new CDataSignalAccess( top.axil4SG_bvalid );
      signalAccess[28] = new CDataSignalAccess( top.axil4SG_bready );
      signalAccess[29] = new CDataSignalAccess( top.axil4SG_bresp );
      signalAccess[30] = new CDataSignalAccess( top.axil4SG_arvalid );
      signalAccess[31] = new CDataSignalAccess( top.axil4SG_arready );
      signalAccess[32] = new IDataSignalAccess( top.axil4SG_araddr );
      signalAccess[33] = new CDataSignalAccess( top.axil4SG_arprot );
      signalAccess[34] = new CDataSignalAccess( top.axil4SG_rvalid );
      signalAccess[35] = new CDataSignalAccess( top.axil4SG_rready );
      signalAccess[36] = new IDataSignalAccess( top.axil4SG_rdata );
      signalAccess[37] = new CDataSignalAccess( top.axil4SG_rresp );
      signalAccess[38] = new CDataSignalAccess( top.axi4S2M_arvalid );
      signalAccess[39] = new CDataSignalAccess( top.axi4S2M_arready );
      signalAccess[40] = new IDataSignalAccess( top.axi4S2M_araddr );
      signalAccess[41] = new CDataSignalAccess( top.axi4S2M_arid );
      signalAccess[42] = new CDataSignalAccess( top.axi4S2M_arlen );
      signalAccess[43] = new CDataSignalAccess( top.axi4S2M_arsize );
      signalAccess[44] = new CDataSignalAccess( top.axi4S2M_arburst );
      signalAccess[45] = new CDataSignalAccess( top.axi4S2M_awvalid );
      signalAccess[46] = new CDataSignalAccess( top.axi4S2M_awready );
      signalAccess[47] = new IDataSignalAccess( top.axi4S2M_awaddr );
      signalAccess[48] = new CDataSignalAccess( top.axi4S2M_awid );
      signalAccess[49] = new CDataSignalAccess( top.axi4S2M_awlen );
      signalAccess[50] = new CDataSignalAccess( top.axi4S2M_awsize );
      signalAccess[51] = new CDataSignalAccess( top.axi4S2M_awburst );
      signalAccess[52] = new CDataSignalAccess( top.axi4S2M_wvalid );
      signalAccess[53] = new CDataSignalAccess( top.axi4S2M_wready );
      signalAccess[54] = new IDataSignalAccess( top.axi4S2M_wdata );
      signalAccess[55] = new CDataSignalAccess( top.axi4S2M_wstrb );
      signalAccess[56] = new CDataSignalAccess( top.axi4S2M_wlast );
      signalAccess[57] = new CDataSignalAccess( top.axi4S2M_rvalid );
      signalAccess[58] = new CDataSignalAccess( top.axi4S2M_rready );
      signalAccess[59] = new IDataSignalAccess( top.axi4S2M_rdata );
      signalAccess[60] = new CDataSignalAccess( top.axi4S2M_rid );
      signalAccess[61] = new CDataSignalAccess( top.axi4S2M_rresp );
      signalAccess[62] = new CDataSignalAccess( top.axi4S2M_rlast );
      signalAccess[63] = new CDataSignalAccess( top.axi4S2M_bvalid );
      signalAccess[64] = new CDataSignalAccess( top.axi4S2M_bready );
      signalAccess[65] = new CDataSignalAccess( top.axi4S2M_bid );
      signalAccess[66] = new CDataSignalAccess( top.axi4S2M_bresp );
      signalAccess[67] = new CDataSignalAccess( top.axi4M2S_arvalid );
      signalAccess[68] = new CDataSignalAccess( top.axi4M2S_arready );
      signalAccess[69] = new IDataSignalAccess( top.axi4M2S_araddr );
      signalAccess[70] = new CDataSignalAccess( top.axi4M2S_arid );
      signalAccess[71] = new CDataSignalAccess( top.axi4M2S_arlen );
      signalAccess[72] = new CDataSignalAccess( top.axi4M2S_arsize );
      signalAccess[73] = new CDataSignalAccess( top.axi4M2S_arburst );
      signalAccess[74] = new CDataSignalAccess( top.axi4M2S_awvalid );
      signalAccess[75] = new CDataSignalAccess( top.axi4M2S_awready );
      signalAccess[76] = new IDataSignalAccess( top.axi4M2S_awaddr );
      signalAccess[77] = new CDataSignalAccess( top.axi4M2S_awid );
      signalAccess[78] = new CDataSignalAccess( top.axi4M2S_awlen );
      signalAccess[79] = new CDataSignalAccess( top.axi4M2S_awsize );
      signalAccess[80] = new CDataSignalAccess( top.axi4M2S_awburst );
      signalAccess[81] = new CDataSignalAccess( top.axi4M2S_wvalid );
      signalAccess[82] = new CDataSignalAccess( top.axi4M2S_wready );
      signalAccess[83] = new IDataSignalAccess( top.axi4M2S_wdata );
      signalAccess[84] = new CDataSignalAccess( top.axi4M2S_wstrb );
      signalAccess[85] = new CDataSignalAccess( top.axi4M2S_wlast );
      signalAccess[86] = new CDataSignalAccess( top.axi4M2S_rvalid );
      signalAccess[87] = new CDataSignalAccess( top.axi4M2S_rready );
      signalAccess[88] = new IDataSignalAccess( top.axi4M2S_rdata );
      signalAccess[89] = new CDataSignalAccess( top.axi4M2S_rid );
      signalAccess[90] = new CDataSignalAccess( top.axi4M2S_rresp );
      signalAccess[91] = new CDataSignalAccess( top.axi4M2S_rlast );
      signalAccess[92] = new CDataSignalAccess( top.axi4M2S_bvalid );
      signalAccess[93] = new CDataSignalAccess( top.axi4M2S_bready );
      signalAccess[94] = new CDataSignalAccess( top.axi4M2S_bid );
      signalAccess[95] = new CDataSignalAccess( top.axi4M2S_bresp );
      signalAccess[96] = new CDataSignalAccess( top.dataS2M_tvalid );
      signalAccess[97] = new CDataSignalAccess( top.dataS2M_tready );
      signalAccess[98] = new IDataSignalAccess( top.dataS2M_tdata );
      signalAccess[99] = new CDataSignalAccess( top.dataS2M_tstrb );
      signalAccess[100] = new CDataSignalAccess( top.dataS2M_tkeep );
      signalAccess[101] = new CDataSignalAccess( top.dataS2M_tlast );
      signalAccess[102] = new CDataSignalAccess( top.dataM2S_tvalid );
      signalAccess[103] = new CDataSignalAccess( top.dataM2S_tready );
      signalAccess[104] = new IDataSignalAccess( top.dataM2S_tdata );
      signalAccess[105] = new CDataSignalAccess( top.dataM2S_tstrb );
      signalAccess[106] = new CDataSignalAccess( top.dataM2S_tkeep );
      signalAccess[107] = new CDataSignalAccess( top.dataM2S_tlast );
      signalAccess[108] = new CDataSignalAccess( top.intr );
      signalAccess[109] = new CDataSignalAccess( top.clk );
      signalAccess[110] = new CDataSignalAccess( top.reset );

      #ifdef TRACE
      Verilated::traceEverOn(true);
      top.trace(&tfp, 99);
      tfp.open((std::string("/home/missdown/IdeaProjects/MAGI_PROJECT/./simWorkspace/AxiLite4SGDMA/") + name + ".vcd").c_str());
      #endif
      this->name = name;
    }

    virtual ~Wrapper_1(){
      for(int idx = 0;idx < 111;idx++){
          delete signalAccess[idx];
      }

      #ifdef TRACE
      if(waveEnabled) tfp.dump((vluint64_t)time);
      tfp.close();
      #endif
      #ifdef COVERAGE
      VerilatedCov::write((("/home/missdown/IdeaProjects/MAGI_PROJECT/./simWorkspace/AxiLite4SGDMA/") + name + ".dat").c_str());
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
     