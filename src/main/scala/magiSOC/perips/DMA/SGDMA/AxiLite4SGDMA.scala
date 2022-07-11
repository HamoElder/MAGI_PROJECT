package magiSOC.perips.DMA.SGDMA

import magiSOC.perips.DMA.BlockDMA.{BDMAConfig, BDMACore}
import spinal.lib._
import spinal.core._
import spinal.lib.bus.amba4.axi.{Axi4, Axi4SpecRenamer}
import spinal.lib.fsm._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4SpecRenamer}

import java.awt.Taskbar
import java.lang.Package

case class AxiLite4SGDMAConfig(
                                  sgAddrWidth    : Int = 32,
                                  sgDataWidth    : Int = 32,
                                  baseAddress    : BigInt = 0,

                                  axi4AddrWidth  : Int = 32,
                                  axi4DataWidth  : Int = 32,
                                  axi4MaxBurstLen: Int = 16,
                                  axi4IDWidth    : Int = 4,

                                  axis4StrbEn    : Boolean = true,
                                  axis4KeepEn    : Boolean = true,
                                  axis4IDEn      : Boolean = false,
                                  axis4LastEn    : Boolean = true,

                                  axil4DataWidth : Int     = 32,
                                  bytesLimit     : BigInt  = 1 GiB,
                                  outStandingLen : Int     = 2,
                                  endianness     : Endianness = LITTLE
                              ){
    require(sgDataWidth == 32 || sgDataWidth == 64, "Data width must be 32 or 64")
    def sgAddrDataType: UInt = UInt(sgAddrWidth bits)
    def sgDataType: Bits = Bits(sgDataWidth bits)

    def bdmaConfig: BDMAConfig = BDMAConfig(axi4AddrWidth, axi4DataWidth, axi4MaxBurstLen, axi4IDWidth, axis4StrbEn, axis4KeepEn,
        axis4IDEn, axis4LastEn, bytesLimit, outStandingLen, endianness)
    def addressWidth = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, axil4DataWidth)
    def axiLite4SGConfig: AxiLite4Config = AxiLite4Config(sgAddrWidth, sgDataWidth)
}

object SGDMAStates extends SpinalEnum {
    val INIT, AXIL4_AR_REQ, CHECK_PREAMBLE, GET_ADDR, GET_BYTES, PUSH_REQ, SGHALT = newElement()
}

object SGDMAErrorStates extends SpinalEnum {
    val NONE, PREAMBLE_ERR= newElement()
}
/** 32 bits
 * Symbol(16 bits) | desc_burst(2 bits)|desc_id(8 bits)|type(1 bits)|is_finish(1 bits)
 * start_addr(axi4AddrWidth bits)
 * desc_total_bytes(axi4DataWidth bits)
 */
case class AxiLite4SGDMA(config: AxiLite4SGDMAConfig) extends Component {
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
        val axil4SG = master(AxiLite4(config.axiLite4SGConfig))
        val axi4S2M = master(Axi4(config.bdmaConfig.axi4Config))
        val axi4M2S = master(Axi4(config.bdmaConfig.axi4Config))

        val dataS2M = slave(AxiStream4(config.bdmaConfig.axisConfig))
        val dataM2S = master(AxiStream4(config.bdmaConfig.axisConfig))

        val intr = out(Bool())
    }
    noIoPrefix()
    Axi4SpecRenamer(io.axi4M2S)
    Axi4SpecRenamer(io.axi4S2M)
    AxiStream4SpecRenamer(io.dataS2M)
    AxiStream4SpecRenamer(io.dataM2S)
    AxiLite4SpecRenamer(io.axil4Ctrl)
    AxiLite4SpecRenamer(io.axil4SG)

    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    val sgdma_enable = Bool()
    val sgdma_reset = Bool()
    val sgdma_error = Reg(SGDMAErrorStates())
    val sg_linked_list_address_startup = config.sgAddrDataType
    val sg_linked_list_address_cursor = Reg(config.sgAddrDataType)

    axil4busCtrl.driveAndRead(sgdma_enable, address = config.baseAddress + 0x00, bitOffset = 0,
        documentation = s"AxiLite4 SGDMA Enable Reg. (1 bits)") init(False)
    axil4busCtrl.driveAndRead(sgdma_reset, address = config.baseAddress + 0x00, bitOffset = 1,
        documentation = s"AxiLite4 SGDMA Reset Reg. (1 bits)") init(False)
    axil4busCtrl.read(io.intr, address = config.baseAddress + 0x00, bitOffset = 2,
        documentation = s"AxiLite4 SGDMA Interrupt Indicator. (1 bits)")
    axil4busCtrl.driveAndRead(sg_linked_list_address_startup, address = config.baseAddress + 0x04, bitOffset = 0,
        documentation = s"AxiLite4 SGDMA Linked List StartUp Address Reg. (${sg_linked_list_address_startup.getBitsWidth} bits)") init(0)
    axil4busCtrl.read(sg_linked_list_address_cursor, address = config.baseAddress + 0x08, bitOffset = 0,
        documentation = s"AxiLite4 SGDMA Linked List Address Cursor Indicator. (${sg_linked_list_address_cursor.getBitsWidth} bits)")
    axil4busCtrl.read(sgdma_error.asBits, address = config.baseAddress + 0x0C, bitOffset = 0,
        documentation = s"AxiLite4 SGDMA Error Indicator. (${sgdma_error.getBitsWidth} bits)")
    val bdma_core = new BDMACore(config.bdmaConfig)

    val desc_start_addr = Reg(config.bdmaConfig.axi4Config.addressType)
    val desc_total_bytes = Reg(config.bdmaConfig.bytesCntDataType)
    val desc_burst = Reg(Bits(2 bits))
    val desc_id = Reg(config.bdmaConfig.axi4Config.idType)
    val desc_is_s2m = Reg(Bool())
    val is_finish = Reg(Bool())
    /* FSM State 1 */
    val sgdma_next_state = SGDMAStates()
    val sgdma_current_states = RegNext(sgdma_next_state) init(SGDMAStates.INIT)
    /* FSM State 2 */
    val dual_next_state = Reg(SGDMAStates())
    switch(sgdma_current_states){
        is(SGDMAStates.INIT){
            when(sgdma_enable){
                sgdma_next_state := SGDMAStates.AXIL4_AR_REQ
            }.otherwise{
                sgdma_next_state := SGDMAStates.INIT
            }
        }
        is(SGDMAStates.AXIL4_AR_REQ){
            when(io.axil4SG.ar.fire){
                sgdma_next_state := dual_next_state
            }.otherwise{
                sgdma_next_state := SGDMAStates.AXIL4_AR_REQ
            }
        }
        is(SGDMAStates.CHECK_PREAMBLE){
            when(io.axil4SG.r.fire){
                sgdma_next_state := SGDMAStates.AXIL4_AR_REQ
            }.otherwise{
                sgdma_next_state := SGDMAStates.CHECK_PREAMBLE
            }
        }
        is(SGDMAStates.GET_ADDR){
            when(io.axil4SG.r.fire){
                sgdma_next_state := SGDMAStates.AXIL4_AR_REQ
            }.otherwise{
                sgdma_next_state := SGDMAStates.GET_ADDR
            }
        }
        is(SGDMAStates.GET_BYTES){
            when(io.axil4SG.r.fire){
                sgdma_next_state := SGDMAStates.AXIL4_AR_REQ
            }.otherwise{
                sgdma_next_state := SGDMAStates.GET_BYTES
            }
        }
        is(SGDMAStates.PUSH_REQ){
            when(bdma_core.io.cchM2S.fire || bdma_core.io.cchS2M.fire){
                sgdma_next_state := is_finish ? SGDMAStates.SGHALT | SGDMAStates.AXIL4_AR_REQ
            }.otherwise{
                sgdma_next_state := SGDMAStates.PUSH_REQ
            }
        }
        is(SGDMAStates.SGHALT){
            when(sgdma_reset){
                sgdma_next_state := SGDMAStates.INIT
            }.otherwise{
                sgdma_next_state := SGDMAStates.SGHALT
            }
        }

    }
    /* FSM State 3 */
    switch(sgdma_current_states){
        is(SGDMAStates.INIT){
            sg_linked_list_address_cursor := sg_linked_list_address_startup
            is_finish := False
            sgdma_error := SGDMAErrorStates.NONE
            dual_next_state := SGDMAStates.CHECK_PREAMBLE
        }
        is(SGDMAStates.AXIL4_AR_REQ){
            when(io.axil4SG.ar.fire){
                sg_linked_list_address_cursor := sg_linked_list_address_cursor + config.axiLite4SGConfig.bytePerWord
            }
        }
        is(SGDMAStates.CHECK_PREAMBLE){
            when(io.axil4SG.r.fire){
                when(io.axil4SG.r.data(31 downto 16) === B"16'x5555"){
                    dual_next_state := SGDMAStates.GET_ADDR
                }.otherwise{
                    dual_next_state := SGDMAStates.SGHALT
                    sgdma_error := SGDMAErrorStates.PREAMBLE_ERR
                }
                is_finish := io.axil4SG.r.data(0)
                desc_is_s2m := io.axil4SG.r.data(1)
                desc_id := io.axil4SG.r.data(9 downto 2).asUInt.resized
                desc_burst := io.axil4SG.r.data(11 downto 10)
            }
        }
        is(SGDMAStates.GET_ADDR){
            when(io.axil4SG.r.fire){
                desc_start_addr := io.axil4SG.r.data.asUInt.resized
            }
            dual_next_state := SGDMAStates.GET_BYTES
        }
        is(SGDMAStates.GET_BYTES){
            when(io.axil4SG.r.fire){
                desc_total_bytes := io.axil4SG.r.data.asUInt.resized
            }
            dual_next_state := SGDMAStates.PUSH_REQ
        }

    }

    // bdma_connection
    bdma_core.io.cchM2S.valid := (sgdma_current_states === SGDMAStates.PUSH_REQ) && (~desc_is_s2m)
    bdma_core.io.cchM2S.desc_start_addr := desc_start_addr
    bdma_core.io.cchM2S.desc_total_bytes := desc_total_bytes
    bdma_core.io.cchM2S.desc_burst := desc_burst
    bdma_core.io.cchM2S.desc_id := desc_id
    bdma_core.io.cchM2S.desc_reset := sgdma_reset

    bdma_core.io.cchS2M.valid := (sgdma_current_states === SGDMAStates.PUSH_REQ) && desc_is_s2m
    bdma_core.io.cchS2M.desc_start_addr := desc_start_addr
    bdma_core.io.cchS2M.desc_total_bytes := desc_total_bytes
    bdma_core.io.cchS2M.desc_burst := desc_burst
    bdma_core.io.cchS2M.desc_id := desc_id
    bdma_core.io.cchS2M.desc_reset := sgdma_reset

    io.axi4S2M.aw << bdma_core.io.axi4S2M.aw
    io.axi4S2M.ar << bdma_core.io.axi4S2M.ar
    io.axi4S2M.r >> bdma_core.io.axi4S2M.r
    io.axi4S2M.w << bdma_core.io.axi4S2M.w
    io.axi4S2M.b >> bdma_core.io.axi4S2M.b

    io.axi4M2S.aw << bdma_core.io.axi4M2S.aw
    io.axi4M2S.ar << bdma_core.io.axi4M2S.ar
    io.axi4M2S.r >> bdma_core.io.axi4M2S.r
    io.axi4M2S.w << bdma_core.io.axi4M2S.w
    io.axi4M2S.b >> bdma_core.io.axi4M2S.b

    io.dataS2M >> bdma_core.io.dataS2M
    io.dataM2S << bdma_core.io.dataM2S


    io.axil4SG.ar.setPermissions(B(0))
    io.axil4SG.ar.addr := sg_linked_list_address_cursor
    io.axil4SG.ar.valid := sgdma_current_states === SGDMAStates.AXIL4_AR_REQ

    io.axil4SG.r.ready := (sgdma_current_states === SGDMAStates.GET_ADDR) || (sgdma_current_states === SGDMAStates.CHECK_PREAMBLE) || (sgdma_current_states === SGDMAStates.GET_BYTES)
    // Without Using Write Channel
    io.axil4SG.aw.valid := False
    io.axil4SG.aw.addr := 0
    io.axil4SG.aw.setPermissions(B(0))

    io.axil4SG.w.valid := False
    io.axil4SG.w.data := 0
    io.axil4SG.w.strb := 0

    io.axil4SG.b.ready := False

    // interrupt
    io.intr := sgdma_current_states === SGDMAStates.SGHALT
}


object AxiLite4SGDMABench{
    def main(args: Array[String]): Unit = {
        val axil4_sgdma_config = AxiLite4SGDMAConfig()
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            defaultClockDomainFrequency = FixedFrequency(100 MHz), targetDirectory = "rtl/AxiLite4SGDMA").
            generateSystemVerilog(new AxiLite4SGDMA(axil4_sgdma_config)).printPruned()
    }
}