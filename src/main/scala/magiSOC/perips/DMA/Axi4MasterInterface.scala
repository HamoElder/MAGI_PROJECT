package magiSOC.perips.DMA
/******************************************************************************
 *  This file describes the Axi4Master interface
 *
 *   _________________________________________________________________________
 *  | Global | Write Data | Write Addr | Write Resp | Read Addr  | Read Data  |
 *  |   -    |    w       |    aw      |      b     |     ar     |     r      |
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
import spinal.lib.bus.misc.BusSlaveFactory
import spinal.lib.fsm.{EntryPoint, State, StateMachine}
import utils.bus.AxiLite.AxiLite4Config

case class Axi4MasterInterfaceConfig(
                                     cfgDataWidth            : Int,
                                     axiAddressWidth         : Int,
                                     axiDataWidth            : Int,
                                     idWidth                 : Int    = 3,
                                     burstLength             : Int    = 16
                                    ){
    def axi4Config: Axi4Config = Axi4Config(
        addressWidth = axiAddressWidth,
        dataWidth = axiDataWidth,
        idWidth = idWidth,
        useLock = false,
        useRegion = false,
        useCache = false,
        useProt = false,
        useQos = false
    )
    def dmaConfig: DMAUnitConfig = DMAUnitConfig(
        interfaceWidth = 32,
        fifoWidth = 32,
        fifoSize = burstLength * axi4Config.bytePerWord
    )
    def cfgAddressWidth: Int = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(cfgAddressWidth, cfgDataWidth)

    def maximumTransferWidth: Int = 32
    def transferType: UInt = UInt(maximumTransferWidth bits)

    def arID = 0
    def awID = 0
}

case class Axi4MasterInterface(config: Axi4MasterInterfaceConfig) extends Area {
    val axi4Master = Axi4(config.axi4Config)

    val dma_core = DMAUnit(config.dmaConfig)
    // Axi4 Registers
    // AR
    val ar_addr   =                          Reg(config.axi4Config.addressType)
    val ar_valid  =                          Reg(Bool) init(False)
    val ar_len    = if(config.axi4Config.useLen)        Reg(config.axi4Config.lenType)      else null
    val ar_size   = if(config.axi4Config.useSize)       Reg(UInt(3 bits))             else null
    val ar_burst  = if(config.axi4Config.useBurst)      Reg(Bits(2 bits))             else null
    // AW
    val aw_addr   =                          Reg(config.axi4Config.addressType)
    val aw_valid  =                          Reg(Bool) init(False)
    val aw_len    = if(config.axi4Config.useLen)        Reg(config.axi4Config.lenType)                  else null
    val aw_size   = if(config.axi4Config.useSize)       Reg(UInt(3 bits))              else null
    val aw_burst  = if(config.axi4Config.useBurst)      Reg(Bits(2 bits))              else null
    // R
    val r_ready = Reg(Bool()) init(False)
    // W
//    val w_data =                             Reg(Bits(config.dataWidth bits))
//    val w_valid =                            Reg(Bool) init(False)
//    val w_ready =                            Reg(Bool) init(False)
//    val w_strb = if(config.useStrb)          Reg(Bits(config.bytePerWord bits))    else null
//    val w_last = if(config.useLast)          Reg(Bool) init(False)                 else null
    // B
//    val b_id      = if(config.useId)         Reg(UInt(config.idWidth bits))        else null
//    val b_ready   =  Reg(Bool) init(False)

    val dma_recv_en = Reg(Bool()) init(False)

    // Registers
    val DMA_READ_SIZE = Reg(UInt(3 bits)) init(2)
    val DMA_READ_INC_MODE = Reg(Bits(2 bits)) init(B"00")
    val DMA_READ_BASE_ADDR = Reg(config.axi4Config.addressType) init(0)
    val DMA_READ_TRANSFER_NUM = Reg(config.transferType)

    val DMA_WRITE_SIZE = Reg(UInt(3 bits)) init(2)
    val DMA_WRITE_INC_MODE = Reg(Bits(2 bits)) init(B"00")
    val DMA_WRITE_BASE_ADDR = Reg(config.axi4Config.addressType) init(0)
    val DMA_WRITE_TRANSFER_NUM = Reg(config.transferType)

    val DMA_ENABLE = Reg(Bool) init(False)
    val DMA_RESET = Reg(Bool) init(True)
    val DMA_PENDING = Reg(Bool) init(False)
    val DMA_FINISH = Reg(Bool) init(False)
    // Connection
    dma_core.io.dma_flush := DMA_RESET
    dma_core.io.dma_recv_size := DMA_READ_SIZE
    dma_core.io.dma_recv_en := dma_recv_en

    if(config.axi4Config.useId) axi4Master.readCmd.id := config.arID
    if(config.axi4Config.useId) axi4Master.writeCmd.id := config.awID
    axi4Master.readCmd.addr := ar_addr
    axi4Master.readCmd.valid := ar_valid
    axi4Master.readCmd.len := ar_len
    axi4Master.readCmd.size := ar_size
    axi4Master.readCmd.burst := ar_burst

    axi4Master.readRsp.ready := r_ready & dma_core.io.dma_recv.ready
    dma_core.io.dma_recv.valid := axi4Master.readRsp.valid
    dma_core.io.dma_recv.payload := axi4Master.readRsp.payload.data

    // local parameters
    val ar_addr_end = Reg(config.axi4Config.addressType)
    val read_4K_edge = (ar_addr(12 until config.axiAddressWidth) + 1).resize(config.axiAddressWidth) |<< 12

    val ar_addr_step = (U(1, 8 bits)  |<< ar_size).resized
    val read_burst_edge = config.burstLength * ar_addr_step.resize(config.axiAddressWidth)
    val read_transfer_times = Reg(config.transferType)
    val read_transfer_beats = Reg(UInt(8 bits))
    ///////////////////////////////////
    val aw_addr_end = Reg(config.axi4Config.addressType)
    val write_4K_edge = (aw_addr(12 until config.axiAddressWidth) + 1).resize(config.axiAddressWidth) |<< 12


    val axi4DMA = new StateMachine{
        val common_counter = Reg(UInt(8 bits)) init(0)

        // TODO: Unaligned Transfer And Narrow Transfer

        val IDLE : State = new State with EntryPoint{
            whenIsActive{
                when(DMA_ENABLE){
                    ar_addr := DMA_READ_BASE_ADDR
                    ar_size := DMA_READ_SIZE
                    ar_burst := DMA_READ_INC_MODE

                    ar_addr_end := read_burst_edge
                    read_transfer_times := DMA_READ_TRANSFER_NUM

                    aw_addr := DMA_WRITE_BASE_ADDR
                    aw_size := DMA_WRITE_SIZE
                    aw_burst := DMA_WRITE_INC_MODE

                    ar_addr_end := read_burst_edge
                    read_transfer_times := DMA_READ_TRANSFER_NUM

                    common_counter := 0
                    DMA_PENDING := True
                    goto(R_ADDR_CHECK)
                }
            }
        }
        val R_ADDR_CHECK: State = new State{
            whenIsActive{
                when(common_counter === 0){
                    common_counter := common_counter + 1
                    ar_addr_end := (ar_addr_end < read_4K_edge) ? ar_addr_end | read_4K_edge
                }.otherwise{
                    common_counter := 0
                    ar_addr_end := (ar_addr_end < (read_transfer_times |<< ar_size)) ? ar_addr_end | (read_transfer_times |<< ar_size)
                    goto(AR_SHAKE)
                }
            }
        }
        val AR_SHAKE: State = new State{
            whenIsActive{
                ar_len := (ar_addr_end - ar_addr) |>> ar_size
                when(axi4Master.readCmd.fire){
                    ar_valid := False
                    r_ready := True
                    dma_recv_en := True
                    goto(R_SHAKE)
                }.otherwise{
                    ar_valid := True
                }
            }
        }
        val R_SHAKE: State = new State{
            whenIsActive{
                when(axi4Master.readRsp.fire){
                    ar_addr := ar_addr + ar_addr_step
                    read_transfer_times := read_transfer_times - 1
                }
                when((ar_addr + ar_addr_step) === ar_addr_end){
                    dma_recv_en := False
                    r_ready := False
                    goto(R_ARBITRATE)
                }
            }
        }
        val R_ARBITRATE : State = new State{

            goto(IDLE)
        }
//        val W_ADDR_CHECK: State = new State{
//
//        }
//        val AW_SHAKE: State = new State{
//
//        }
//        val W_SHAKE: State = new State{
//
//        }
//        val B_SHAKE: State = new State{
//
//        }
        val FINISH: State = new State{

        }
    }

    // Bus interface function module
    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt) = new Area {
        busCtrl.createReadAndWrite(DMA_ENABLE, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "DMA Enable (1 bits)")
        busCtrl.createWriteOnly(DMA_RESET, address = baseAddress + 0x00, bitOffset = 1,
            documentation = "DMA Reset Active High (1 bits)")
        busCtrl.createReadOnly(DMA_PENDING, address = baseAddress + 0x00, bitOffset = 2,
            documentation = "DMA Pending State (1 bits)")
        busCtrl.createReadOnly(DMA_FINISH, address = baseAddress + 0x00, bitOffset = 3,
            documentation = "DMA Finished (1 bits)")

        busCtrl.createReadAndWrite(DMA_READ_SIZE,  address = baseAddress + 0x04, bitOffset = 0,
            documentation = "DMA Read Channel Width or Burst Size(3 bits)")
        busCtrl.createReadAndWrite(DMA_READ_INC_MODE, address = baseAddress + 0x08, bitOffset = 0,
            documentation = "DMA Read Channel Increment Mode or Burst Type (2 bits)")
        busCtrl.createReadAndWrite(DMA_READ_BASE_ADDR, address = baseAddress + 0x0C, bitOffset = 0,
            documentation = "DMA Read Channel Peripheral Addr (32 bits)")
        busCtrl.createReadAndWrite(DMA_READ_TRANSFER_NUM, address = baseAddress + 0x10, bitOffset = 0,
            documentation = "DMA Read Channel Number of Data to Transfer (32 bits)")

        busCtrl.createReadAndWrite(DMA_WRITE_SIZE,  address = baseAddress + 0x14, bitOffset = 0,
            documentation = "DMA Write Channel Width or Burst Size(3 bits)")
        busCtrl.createReadAndWrite(DMA_WRITE_INC_MODE, address = baseAddress + 0x18, bitOffset = 0,
            documentation = "DMA Write Channel Increment Mode or Burst Type (2 bits)")
        busCtrl.createReadAndWrite(DMA_WRITE_BASE_ADDR, address = baseAddress + 0x1C, bitOffset = 0,
            documentation = "DMA Write Channel Peripheral Addr (32 bits)")
        busCtrl.createReadAndWrite(DMA_WRITE_TRANSFER_NUM, address = baseAddress + 0x20, bitOffset = 0,
            documentation = "DMA Write Channel Number of Data to Transfer (32 bits)")
    }

}

