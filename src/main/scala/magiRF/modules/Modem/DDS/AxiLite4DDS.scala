package magiRF.modules.Modem.DDS

import Misc.regFileGen.{genRegFileByMarkdown, regInsert}
import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.common.ClkCrossing.FFSynchronizer

case class AxiLite4DDSConfig(
                                dataWidth          : Int,
                                phaseWidth         : Int,
                                channelsNum        : Int             = 2,
                                cfgDataWidth       : Int             = 32,
                                frequency          : HertzNumber     = 1 Hz,
                                usePhaseChannel    : Boolean         = false,
                                usePhaseIncProg    : Boolean         = false,
                                usePhaseOffsetProg : Boolean         = false,
                                useSysRef          : Boolean         = false)
                            {

    def addressWidth = 8
    def ddsConfig: DDS_Config = DDS_Config(dataWidth, phaseWidth, useRam = true,
        frequency = frequency, usePhaseChannel= usePhaseChannel,
        usePhaseIncProg = usePhaseIncProg, usePhaseOffsetProg= usePhaseOffsetProg, useSysRef = useSysRef)
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)

}

case class AxiLite4DDS(config : AxiLite4DDSConfig) extends Component{
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
        val data = Vec(master(Stream(config.ddsConfig.dataType)), config.channelsNum)
        val phase = if(config.usePhaseChannel) Vec(master(Flow(config.ddsConfig.phaseType)), config.channelsNum) else null
        val sysref = if(config.useSysRef) in(Bool()) else null
        val rf_clk = in(Bool())
        val rf_resetn = in(Bool())
    }
    noIoPrefix()
    AxiLite4SpecRenamer(io.axil4Ctrl)

    val global_en = Bool()
    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")

    axil4busCtrl.driveAndRead(global_en, 0x00, 0, documentation = "DDS Global Enable") init(False)
    val rfClockDomain: ClockDomain = ClockDomain(
        clock = io.rf_clk,
        reset = io.rf_resetn,
        config = ClockDomainConfig(
            clockEdge = RISING,
            resetKind = SYNC,
            resetActiveLevel = LOW
        )
    )
    val global_en_cross = FFSynchronizer(this.clockDomain, rfClockDomain, global_en)
    for(idx <- 0 until config.channelsNum){
        val rfClockArea = new ClockingArea(rfClockDomain) {
            val dds_core = DDS(config.ddsConfig)
            io.data(idx).payload := dds_core.io.data.payload
            io.data(idx).valid := dds_core.io.data.valid
            dds_core.io.data.ready := io.data(idx).ready
            if(config.usePhaseChannel){
                io.phase(idx).payload := dds_core.io.phase.payload
                io.phase(idx).valid := dds_core.io.phase.valid
            }
            dds_core.io.sync_en := global_en_cross
            if(config.useSysRef) {dds_core.io.sysref := RegNext(io.sysref)init(False)}
        }
        val _ = rfClockArea.dds_core.driveFrom(axil4busCtrl, 0x20 * idx, idx, this.clockDomain, rfClockDomain)

    }
    axil4busCtrl.printDataModel()
//    axil4busCtrl.addDataModel("AxiLite4DDS", 0x00)
//    addPrePopTask(()=>genRegFileByMarkdown())
}

object AxiLite4DDSBench {
    def main(args: Array[String]): Unit = {
        val axi4ddsConfig = AxiLite4DDSConfig(32, 8, 8, 32, 1 Hz, usePhaseChannel = false, usePhaseIncProg = false, usePhaseOffsetProg = false, useSysRef = false)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/AxiLite4DDS").generateSystemVerilog(new AxiLite4DDS(axi4ddsConfig)).printPruned()
    }
}


