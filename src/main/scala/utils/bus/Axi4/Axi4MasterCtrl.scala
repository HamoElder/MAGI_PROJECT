package utils.bus.Axi4
/******************************************************************************
 *  This file describes the Axi4Master interface
 *
 *   _________________________________________________________________________
 *  | Global | Write Data | Write Addr | Write Resp | Read Addr  | Read Data  |
 *  |   -    |    w       |    aw      |      b     |     ar     |      r     |
 *  |-------------------------------------------------------------------------|
 *  |  aclk  |  wid       |  *awid     |  *bid      |  *arid     |  rid       |
 *  |  arstn |  wdata     |  awaddr    |  *bresp    |  araddr    |  rdata     |
 *  |        |  *wstrb    |  *awlen    |  buser     |  *arlen    |  rresp     |
 *  |        |  wlast     |  *awsize   |  bvalid    |  *arsize   |  rlast     |
 *  |        |  *wuser    |  *awburst  |  bready    |  *arburst  |  *ruser    |
 *  |        |  wvalid    |  *awlock   |            |  *arlock   |  rvalid    |
 *  |        |  wready    |  *awcache  |            |  *arcache  |  rready    |
 *  |        |            |  awprot    |            |  arprot    |            |
 *  |        |            |  *awqos    |            |  *arqos    |            |
 *  |        |            |  *awregion |            |  *arregion |            |
 *  |        |            |  *awuser   |            |  *aruser   |            |
 *  |        |            |  awvalid   |            |  arvalid   |            |
 *  |        |            |  awready   |            |  arready   |            |
 *  |________|____________|____________|____________|____________|____________|
 *   * Optional signal
 */
import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.{Axi4, Axi4Config}


object Axi4MasterStates extends SpinalEnum {
    val IDLE, AR_ADDR, AW_ADDR, R_DATA, W_DATA, B_RESP, ERROR = newElement()
}

case class Axi4MasterCtrlLiteIO(config: Axi4Config) extends Bundle with IMasterSlave{
    // Global
    val axi4 = Axi4(config)
    val arw_switch = Bool
    val arw_req = Bool
    val axi4_states = Bits(3 bits)
    val axi4_error = Bits(2 bits)
    // AR (Master)
    val awr_addr = config.addressType
    val awr_id    = if(config.useId)              config.idType            else null
    //    val ar_region = if(config.useRegion)          Bits(4 bits)                else null
    val awr_len   = if(config.useLen)             config.lenType                    else null
    val awr_size  = if(config.useSize)            UInt(3 bits)                else null
    val awr_burst = if(config.useBurst)           Bits(2 bits)                else null
    //    val ar_lock   = if(config.useLock)            Bits(1 bits)                else null
    //    val ar_cache  = if(config.useCache)           Bits(4 bits)                else null
    //    val ar_qos    = if(config.useQos)             Bits(4 bits)                else null
    //    val ar_user   = if(config.arUserWidth >= 0)   Bits(config.arUserWidth bits)     else null  // recommends not use

    // W(Master)
    val w_valid = Bool
    val w_ready = Bool
    val w_data = Bits(config.dataWidth bits)
    val w_strb = if(config.useStrb) Bits(config.bytePerWord bits) else null
//    val user = if(config.useWUser) Bits(config.wUserWidth bits)     else null

    // R (Slave)
    val r_ready = Bool
    val r_valid = Bool
    val r_data = Bits(config.dataWidth bits)
//    val r_id   = if(config.useId)   UInt(config.idWidth bits)   else null
//    val r_resp = if(config.useResp) Bits(2 bits)               else null
//    val last = if(config.useLast)  Bool                       else null
//    val user = if(config.useRUser) Bits(config.rUserWidth bits) else null

    override def asMaster(): Unit = {
        master(axi4)
        in(awr_addr, arw_switch, arw_req, w_valid, w_data, w_strb, r_ready)
        out(axi4_states, axi4_error, w_ready, r_data, r_valid)
        inWithNull(awr_id, awr_len, awr_size, awr_burst)
    }

}


case class Axi4MasterCtrlLite(config : Axi4Config) extends Component {
    val io = master(Axi4MasterCtrlLiteIO(config))

    noIoPrefix()
    val axi4_error   =                            Reg(Bits(2 bits))
    // AR
    val ar_addr   =                               Reg(config.addressType)
    val ar_valid  =                               Reg(Bool) init(False)
    val ar_id     = if(config.useId)   Reg(config.idType)            else null
    val ar_len    = if(config.useLen)  Reg(config.lenType)                    else null
    val ar_size   = if(config.useSize) Reg(UInt(3 bits))                else null
    val ar_burst  = if(config.useBurst)Reg(Bits(2 bits))                else null
    // AW
    val aw_addr   =                               Reg(config.addressType)
    val aw_valid  =                               Reg(Bool) init(False)
    val aw_id     = if(config.useId)   Reg(config.idType)            else null
    val aw_len    = if(config.useLen)  Reg(config.lenType)                     else null
    val aw_size   = if(config.useSize) Reg(UInt(3 bits))                else null
    val aw_burst  = if(config.useBurst)Reg(Bits(2 bits))                else null
    // R
    val r_id      = if(config.useId)   Reg(UInt(config.idWidth bits))         else null
    val r_resp    = if(config.useResp) Reg(Bits(2 bits))                else null
    // W
    val w_data = Reg(Bits(config.dataWidth bits))
    val w_valid = Reg(Bool) init(False)
    val w_ready = Reg(Bool) init(False)
    val w_strb = if(config.useStrb) Reg(Bits(config.bytePerWord bits))    else null
    val w_last = if(config.useLast)  Reg(Bool) init(False)                            else null
    // B
    val b_id      = if(config.useId)   Reg(UInt(config.idWidth bits))          else null
    val b_ready   =  Reg(Bool) init(False)
    // Connection
    // AR
    io.axi4.readCmd.valid := ar_valid
    io.axi4.writeCmd.valid := aw_valid
    io.axi4.writeData.valid := w_valid
    /**
     * Payload for aw channel
     */
    io.axi4.readCmd.addr := ar_addr
    io.axi4.readCmd.id := ar_id
    io.axi4.readCmd.len := ar_len
    io.axi4.readCmd.size := ar_size
    io.axi4.readCmd.burst := ar_burst
    // AW
    io.axi4.writeCmd.addr := aw_addr
    io.axi4.writeCmd.id := aw_id
    io.axi4.writeCmd.len := aw_len
    io.axi4.writeCmd.size := aw_size
    io.axi4.writeCmd.burst := aw_burst
    // W
    io.axi4.writeData.data := w_data
    io.axi4.writeData.strb := w_strb
    io.axi4.writeData.last := w_last
    // R
    io.r_data := io.axi4.readRsp.data
    io.r_valid := io.axi4.readRsp.valid
    io.axi4.readRsp.ready := io.r_ready
    // B
    io.axi4.writeRsp.ready := b_ready
    // Out
    io.w_ready := w_ready

    val burst_length = Reg(config.lenType)
    val trans_length = Reg(config.lenType)
    val length_equal = (burst_length === trans_length)
    // States Machine

    import Axi4MasterStates._
    val fsm_state = Reg(Axi4MasterStates()) init(IDLE)
//    fsm_state := IDLE
    // TODO: Add timeout reset method

    // Global
    io.axi4_states := fsm_state.asBits
    io.axi4_error := axi4_error

    switch(fsm_state){
        is(IDLE){
            when(io.arw_req === True){
                fsm_state := io.arw_switch ? AR_ADDR | AW_ADDR
            }
            trans_length := 0

            ar_valid := False
            aw_valid := False
        }
        is(AR_ADDR){
            when(io.axi4.readCmd.fire){
                fsm_state := R_DATA
                burst_length := ar_len
                trans_length := 1

                ar_valid := False
            }.otherwise{
                ar_valid := True
            }
        }
        is(AW_ADDR){
            when(io.axi4.writeCmd.fire){
                fsm_state := W_DATA
                burst_length := aw_len
                trans_length := 1

                aw_valid := False
            }.otherwise{
                aw_valid := True
            }
        }
        is(R_DATA){
            when(io.axi4.readRsp.fire){
                trans_length := trans_length + 1
            }
            when(trans_length === burst_length){
                fsm_state := IDLE
            }
        }
        is(W_DATA){
            when(io.axi4.writeData.fire){
                trans_length := trans_length + 1
            }
            when(trans_length === burst_length){
                fsm_state := B_RESP
            }
        }
        is(B_RESP){
            when(io.axi4.writeRsp.fire){
                when(io.axi4.writeRsp.resp === Axi4.resp.OKAY ||
                    io.axi4.writeRsp.resp === Axi4.resp.EXOKAY){
                    fsm_state := IDLE
                }.otherwise{
                    fsm_state := ERROR
                    axi4_error := io.axi4.writeRsp.resp
                }
            }
        }
        is(ERROR){
            when(io.arw_req === True){
                fsm_state := IDLE
                axi4_error := 0
            }
        }
    }

    switch(fsm_state){
        is(IDLE){
            ar_addr := 0
            aw_addr := 0

            b_ready := False
        }
        is(AR_ADDR){
            ar_id := io.awr_id
            ar_addr := io.awr_addr
            ar_len := io.awr_len
            ar_size := io.awr_size
            ar_burst := io.awr_burst
        }
        is(AW_ADDR){
            aw_id := io.awr_id
            aw_addr := io.awr_addr
            aw_len := io.awr_len
            aw_size := io.awr_size
            aw_burst := io.awr_burst
        }
        is(R_DATA){

            r_id := io.axi4.readRsp.id
            r_resp := io.axi4.readRsp.resp
        }
        is(W_DATA){
            w_valid := io.w_valid

            w_ready := io.axi4.writeData.ready
            w_data := io.w_data
            w_strb := io.w_strb
            w_last := length_equal
        }
        is(B_RESP){
            w_valid := False
            w_ready := False
            w_last := False

            b_id := io.axi4.writeRsp.id
            b_ready := True
        }
        is(ERROR){
            b_ready := False
        }

    }

}

object Axi4MasterCtrlStreamLiteBench{
    def main(args: Array[String]): Unit ={
        def axi4Config: Axi4Config = Axi4Config(
            addressWidth = 32,
            dataWidth = 32,
            idWidth = 3,
            useLock = false,
            useRegion = false,
            useCache = false,
            useProt = false,
            useQos = false
        )
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new Axi4MasterCtrlLite(axi4Config)).printPruned()
    }
}


//Sim

object Axi4MasterCtrlStreamLiteSimApp extends App{
    import spinal.core.sim._
    import utils.bus.AxiLite.sim.AxiLite4Driver
    import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
    import scala.util.Random

    def axi4Config: Axi4Config = Axi4Config(
        addressWidth = 32,
        dataWidth = 32,
        idWidth = 3,
        useLock = false,
        useRegion = false,
        useCache = false,
        useProt = false,
        useQos = false
    )
    SimConfig
        .withWave
        .allOptimisation
        .doSim(Axi4MasterCtrlLite(axi4Config)){ dut =>
            dut.clockDomain.forkStimulus(5)
            SimTimeout(10*5000)
            dut.io.arw_switch #= false
            dut.io.arw_req #= false
            dut.io.axi4.aw.ready #= false
            dut.io.awr_id #= 0
            dut.io.awr_len #= 16
            dut.io.axi4.w.ready #= true
            dut.io.axi4.b.resp #= 0

            dut.clockDomain.waitSampling(10)
            dut.io.awr_addr #= 0x10001fff
            dut.io.awr_size #= 5
            dut.io.awr_burst #= 1
            dut.clockDomain.waitSampling()
            dut.io.arw_req #= true
            dut.clockDomain.waitSampling()

            dut.io.axi4.aw.ready #= true
            dut.clockDomain.waitSampling(2)
            dut.io.axi4.aw.ready #= false
            dut.io.arw_req #= false
            dut.io.w_data #= 0
            dut.clockDomain.waitSampling()

            for(i <- 0 until 100){

                dut.io.w_valid.randomize()
                dut.io.w_data #= i
                dut.io.w_strb #= 15

//                dut.io.w_ready
                dut.clockDomain.waitSampling()
            }
            dut.io.axi4.b.valid #= true
            dut.clockDomain.waitSampling(10)

    }
}