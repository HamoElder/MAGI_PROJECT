package magiRF.packages.CyclicPrefix

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}

case class AxiLite4CyclicPrefixConfig(
                                         dataWidth: Int,
                                         maxCpLength: Int,
                                         maxDataLength: Int,
                                         cfgDataWidth: Int = 32
                                     ) {
    def addressWidth = 8

    def cpConfig: CpConfig = CpConfig(dataWidth, maxCpLength, maxDataLength)

    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)

  override def equals(that: Any): Boolean = that == this
}

case class AxiLite4CyclicPrefix(config: AxiLite4CyclicPrefixConfig) extends Component {
    val io = new Bundle {
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))

        val raw_data = slave(Stream(config.cpConfig.dataType))
        val result = master(Flow(config.cpConfig.dataType))

        val rf_clk = in(Bool())
        val rf_resetn = in(Bool())
    }

    noIoPrefix()
    AxiLite4SpecRenamer(io.axil4Ctrl)
    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    val rfClockDomain: ClockDomain = ClockDomain(
        clock = io.rf_clk,
        reset = io.rf_resetn,
        config = ClockDomainConfig(
            clockEdge = RISING,
            resetKind = SYNC,
            resetActiveLevel = LOW
        )
    )
    val rfClockArea = new ClockingArea(rfClockDomain) {
        val cp_core = CyclicPrefix(config.cpConfig)
        cp_core.io.raw_data << io.raw_data
        io.result << cp_core.io.result
    }
    val _ = rfClockArea.cp_core.driveFrom(axil4busCtrl, 0x00, this.clockDomain, rfClockDomain)

    axil4busCtrl.printDataModel()
}

object AxiLite4CyclicPrefixDDSBench {
    def main(args: Array[String]): Unit = {
        val axil4_cp_config = AxiLite4CyclicPrefixConfig(16, 16, 64, 32)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/AxiLite4CyclicPrefix").generateSystemVerilog(new AxiLite4CyclicPrefix(axil4_cp_config)).printPruned()
    }
}

object AxiLite4CyclicPrefixSimApp extends App {

    import spinal.core.sim._
    import utils.bus.AxiLite.sim.AxiLite4Driver
    import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
    import scala.util.Random

    val cp_config = AxiLite4CyclicPrefixConfig(16, 16, 64, 32)
    SimConfig
        .withWave
        .allOptimisation
        .doSim(new AxiLite4CyclicPrefix(cp_config)) { dut =>
            dut.clockDomain.forkStimulus(7)
            dut.rfClockDomain.forkStimulus(3)
            val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)

            dut.io.raw_data.valid #= false
            dut.io.raw_data.last #= false
            dut.io.raw_data.payload.fragment.cha_i #= 0
            dut.io.raw_data.payload.fragment.cha_q #= 0
            dut.rfClockDomain.waitSampling(20)
            aliteDrv.reset()
            aliteDrv.write(0x00, 16)
            aliteDrv.write(0x04, 64)
            for (cnt <- 0 until 15) {
                for (idx <- 0 until 63) {
                    dut.io.raw_data.payload.fragment.cha_i #= idx
                    dut.io.raw_data.payload.fragment.cha_q #= idx + 1
                    dut.io.raw_data.valid #= true
                    dut.rfClockDomain.waitSampling(1)
                }
                dut.io.raw_data.valid #= false
                dut.rfClockDomain.waitSampling(3)
                dut.io.raw_data.valid #= true
                dut.io.raw_data.payload.fragment.cha_i #= 1024
                dut.io.raw_data.payload.fragment.cha_q #= 1024
                dut.io.raw_data.last #= true
                dut.rfClockDomain.waitSampling(1)
                dut.io.raw_data.valid #= false
                dut.io.raw_data.last #= false
                dut.rfClockDomain.waitSampling(7)
            }
            dut.io.raw_data.valid #= false
            dut.rfClockDomain.waitSampling(1000)
        }
}
