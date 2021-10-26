package magiRF.modules.Modem.DDS

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.common.ClkCrossing.ClkCrossing

case class AxiLite4DDSConfig(
                                dataWidth          : Int,
                                phaseWidth         : Int,
                                channelsNum        : Int             = 2,
                                cfgDataWidth       : Int             = 32,
                                frequency          : HertzNumber     = 1 Hz,
                                usePhaseChannel    : Boolean         = false,
                                usePhaseIncProg    : Boolean         = false,
                                usePhaseOffsetProg : Boolean         = false)
                            {

    def addressWidth = 8
    def ddsConfig: DDS_Config = DDS_Config(dataWidth, phaseWidth, useRam = true,
        frequency = frequency, usePhaseChannel= usePhaseChannel,
        usePhaseIncProg = usePhaseIncProg, usePhaseOffsetProg= usePhaseOffsetProg)
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)

}

case class AxiLite4DDS(config : AxiLite4DDSConfig) extends Component{
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
        val data = Vec(master(Flow(config.ddsConfig.dataType)), config.channelsNum)
        val phase = if(config.usePhaseChannel) Vec(master(Flow(config.ddsConfig.phaseType)), config.channelsNum) else null

        val rf_clk = in Bool()
        val rf_resetn = in Bool()
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
    val global_en_cross = ClkCrossing(this.clockDomain, rfClockDomain, global_en)
    for(idx <- 0 until config.channelsNum){
        val rfClockArea = new ClockingArea(rfClockDomain) {
            val dds_core = DDS(config.ddsConfig)
            io.data(idx).payload := dds_core.io.data.payload
            io.data(idx).valid := dds_core.io.data.valid
            if(config.usePhaseChannel){
                io.phase(idx).payload := dds_core.io.phase.payload
                io.phase(idx).valid := dds_core.io.phase.valid
            }
            dds_core.io.sync_en := global_en_cross
        }
        val _ = rfClockArea.dds_core.driveFrom(axil4busCtrl, 0x20 * idx, this.clockDomain, rfClockDomain)

    }
    axil4busCtrl.printDataModel()

}

object AxiLite4DDSBench {
    def main(args: Array[String]): Unit = {
        val axi4ddsConfig = AxiLite4DDSConfig(16, 11, 2, 32, 1 Hz, usePhaseChannel = false, usePhaseIncProg = true, usePhaseOffsetProg = true)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/AxiLite4DDS").generateSystemVerilog(new AxiLite4DDS(axi4ddsConfig)).printPruned()
    }
}

//Sim

object AxiLite4DDSSimApp extends App{
    import spinal.core.sim._
    import utils.bus.AxiLite.sim.AxiLite4Driver
    import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
    import scala.util.Random

    val axi4ddsConfig = AxiLite4DDSConfig(24, 10, 2, 32, 1 Hz, usePhaseChannel = true, usePhaseIncProg = true, usePhaseOffsetProg = true)
    SimConfig.withWave.doSim(new AxiLite4DDS(axi4ddsConfig)){ dut =>
        dut.clockDomain.forkStimulus(10)
        dut.rfClockDomain.forkStimulus(3)
//        SimTimeout(10*50000)

        val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
        aliteDrv.reset()
        dut.clockDomain.waitSampling(10)
//        aliteDrv.write(0x14, 0x4)
//        dut.io.dataOut.ready #= true
//        StreamReadyRandomizer(dut.io.dataOut, dut.clockDomain)
        aliteDrv.write(0x00, 0x2)
        aliteDrv.write(0x20, 0x2)
        aliteDrv.write(0x40, 0x2)
        aliteDrv.write(0x00, 0x3)
        dut.clockDomain.waitSampling(1000)
        aliteDrv.write(0x14, 0x4)
        aliteDrv.write(0x20, 0x0)
//        aliteDrv.write(0x04, 1023)
//        aliteDrv.write(0x0, 1)

        dut.clockDomain.waitSampling(10000)
    }
}

