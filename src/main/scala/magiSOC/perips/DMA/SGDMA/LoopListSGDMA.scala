package magiSOC.perips.DMA.SGDMA

import magiSOC.perips.DMA.BlockDMA.{BDMAConfig, BDMAControlChannel, BDMACore}
import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.{Axi4, Axi4SpecRenamer}
import spinal.lib.bus.regif.BusInterface
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4SpecRenamer}


case class LLSGDMAConfig(
                              cfgDataWidth   : Int = 32,
                              sgListSize     : Int = 32,

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
    def addressWidth = 8
    def sgLinkedListDepth: Int = sgListSize
    def sgLinkedListCursorDataType: UInt = UInt(log2Up(sgLinkedListDepth) bits)
    val bdmaConfig: BDMAConfig = BDMAConfig(axi4AddrWidth, axi4DataWidth, axi4MaxBurstLen, axi4IDWidth, axis4StrbEn, axis4KeepEn,
        axis4IDEn, axis4LastEn, bytesLimit, outStandingLen, endianness)
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)
}

case class LLSGDMAControlReg(config: BDMAConfig) extends Bundle{
    val desc_start_addr = config.axi4Config.addressType
    val desc_total_bytes = config.bytesCntDataType
    val desc_burst = Bits(2 bits)
    val desc_id = config.axi4Config.idType
    val desc_is_s2m = Bool()
}


case class LoopListSGDMA(config: LLSGDMAConfig) extends Component {
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
        val axi4S2M = master(Axi4(config.bdmaConfig.axi4Config))
        val axi4M2S = master(Axi4(config.bdmaConfig.axi4Config))

        val dataS2M = slave(AxiStream4(config.bdmaConfig.axisConfig))
        val dataM2S = master(AxiStream4(config.bdmaConfig.axisConfig))
    }
    noIoPrefix()
    Axi4SpecRenamer(io.axi4M2S)
    Axi4SpecRenamer(io.axi4S2M)
    AxiStream4SpecRenamer(io.dataS2M)
    AxiStream4SpecRenamer(io.dataM2S)
    AxiLite4SpecRenamer(io.axil4Ctrl)

    val bdma_linked_list = Mem(LLSGDMAControlReg(config.bdmaConfig), config.sgLinkedListDepth)
    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    val bdma_cursor_limit = config.sgLinkedListCursorDataType
    val bdma_enable = Bool()

    val bdma_linked_list_write_addr = config.sgLinkedListCursorDataType
    val bdma_linked_list_write_data = LLSGDMAControlReg(config.bdmaConfig)
    val bdma_linked_list_write_enable = Bool()

    axil4busCtrl.driveAndRead(bdma_enable, address = 0x00, bitOffset = 0,
        documentation = s"LoopList SGDMA Enable Reg. (1 bits)") init(False)
    axil4busCtrl.driveAndRead(bdma_linked_list_write_enable, address = 0x00, bitOffset = 1,
        documentation = s"LoopList SGDMA Men Write Enable Reg. (1 bits)") init(False)
    axil4busCtrl.driveAndRead(bdma_cursor_limit, address = 0x04, bitOffset = 0,
        documentation = s"LoopList SGDMA Cursor Limit Reg. (${config.sgLinkedListCursorDataType.getBitsWidth} bits)") init(0)
    axil4busCtrl.driveAndRead(bdma_linked_list_write_addr, address = 0x08, bitOffset = 0,
        documentation = s"LoopList SGDMA Men Write Addr Reg. (${bdma_linked_list_write_addr.getBitsWidth} bits)") init(0)
    axil4busCtrl.driveAndRead(bdma_linked_list_write_data.desc_start_addr, address = 0x0C, bitOffset = 0,
        documentation = s"LoopList SGDMA Men Write Data Start Addr Reg. (${bdma_linked_list_write_data.desc_start_addr.getBitsWidth} bits)") init(0)
    axil4busCtrl.driveAndRead(bdma_linked_list_write_data.desc_total_bytes, address = 0x10, bitOffset = 0,
        documentation = s"LoopList SGDMA Men Write Data Total Bytes Reg. (${bdma_linked_list_write_data.desc_total_bytes.getBitsWidth} bits)") init(0)
    axil4busCtrl.driveAndRead(bdma_linked_list_write_data.desc_id, address = 0x14, bitOffset = 0,
        documentation = s"LoopList SGDMA Men Write Data ID Reg. (${bdma_linked_list_write_data.desc_id.getBitsWidth} bits)") init(0)
    axil4busCtrl.driveAndRead(bdma_linked_list_write_data.desc_burst, address = 0x18, bitOffset = 0,
        documentation = s"LoopList SGDMA Men Write Data Burst Type Reg. (${bdma_linked_list_write_data.desc_burst.getBitsWidth} bits)") init(0)
    axil4busCtrl.driveAndRead(bdma_linked_list_write_data.desc_is_s2m, address = 0x1C, bitOffset = 0,
        documentation = s"LoopList SGDMA Men Write Data s2m or m2s Type Reg. (${bdma_linked_list_write_data.desc_is_s2m.getBitsWidth} bits)") init(False)

    bdma_linked_list.write(bdma_linked_list_write_addr, bdma_linked_list_write_data, bdma_linked_list_write_enable)
    val bdma_cursor = Reg(config.sgLinkedListCursorDataType) init(0)
    val bdma_core = new BDMACore(config.bdmaConfig)
    val bdma_reset = Reg(Bool()) init(False)
    val sgdma_ctrl = bdma_linked_list.readSync(bdma_cursor)
    when(!bdma_enable){
        bdma_cursor := 0
    }.elsewhen(bdma_core.io.cchS2M.fire || bdma_core.io.cchM2S.fire){
        bdma_cursor := (bdma_cursor === bdma_cursor_limit) ? U(0) | bdma_cursor + 1
    }
    when(bdma_core.io.intrM2S || bdma_core.io.intrS2M){
        bdma_reset := True
    }.otherwise{
        bdma_reset := False
    }

    bdma_core.io.cchM2S.valid := bdma_enable && (~sgdma_ctrl.desc_is_s2m)
    bdma_core.io.cchM2S.desc_start_addr := sgdma_ctrl.desc_start_addr
    bdma_core.io.cchM2S.desc_total_bytes := sgdma_ctrl.desc_total_bytes
    bdma_core.io.cchM2S.desc_burst := sgdma_ctrl.desc_burst
    bdma_core.io.cchM2S.desc_id := sgdma_ctrl.desc_id
    bdma_core.io.cchM2S.desc_reset := bdma_reset

    bdma_core.io.cchS2M.valid := bdma_enable && sgdma_ctrl.desc_is_s2m
    bdma_core.io.cchS2M.desc_start_addr := sgdma_ctrl.desc_start_addr
    bdma_core.io.cchS2M.desc_total_bytes := sgdma_ctrl.desc_total_bytes
    bdma_core.io.cchS2M.desc_burst := sgdma_ctrl.desc_burst
    bdma_core.io.cchS2M.desc_id := sgdma_ctrl.desc_id
    bdma_core.io.cchS2M.desc_reset := bdma_reset

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

}


object LoopListSGDMABench{
    def main(args: Array[String]): Unit = {
        val ll_sgdma_config = LLSGDMAConfig(axi4DataWidth = 32)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            defaultClockDomainFrequency = FixedFrequency(100 MHz), targetDirectory = "rtl/LoopListSGDMA").
            generateSystemVerilog(new LoopListSGDMA(ll_sgdma_config)).printPruned()
    }
}