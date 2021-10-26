package magiSOC.perips.Timer

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}


case class AxiLite4TimerConfig(
                                  dividerAWidth    : Int = 4,
                                  dividerBWidth    : Int = 16,
                                  filterWidth      : Int = 4,
                                  timerWidth       : Int = 16,
                                  cfgDataWidth     : Int = 32,
                                  useInputCapture  : Boolean = false,
                                  useOutputCompare : Boolean = false
                              ){
    def cfgAddressWidth: Int = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(cfgAddressWidth, cfgDataWidth)
    def timerAConfig: timerConfig = timerConfig(dividerAWidth, dividerBWidth, filterWidth, timerWidth, useInputCapture, useOutputCompare)
}

case class AxiLite4Timer(config : AxiLite4TimerConfig) extends Component {
    val io = new Bundle{
        val axil4Ctrl =  slave(AxiLite4(config.axiLite4Config))
        val timer_interrupt = out Bool()

        val ic_a = config.useInputCapture.generate(in Bool())
        val ic_b = config.useInputCapture.generate(in Bool())
        val oc = config.useOutputCompare.generate(out Bool())
        val oc_n = config.useOutputCompare.generate(out Bool())
    }
    noIoPrefix()
    AxiLite4SpecRenamer(io.axil4Ctrl)
    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")

    val timer_module = Timer(config.timerAConfig)
    timer_module.driveFrom(axil4busCtrl, 0x00)

    io.timer_interrupt := timer_module.io.interrupt

    if(config.useInputCapture){
        timer_module.io.ic_a := io.ic_a
        timer_module.io.ic_b := io.ic_b
    }
    if(config.useOutputCompare){
        io.oc := timer_module.io.oc
        io.oc_n := timer_module.io.oc_n
    }
    axil4busCtrl.printDataModel()
}


object AxiLite4TimerBench {
    def main(args: Array[String]) {
        val axil4_timer_config = AxiLite4TimerConfig(useInputCapture = false, useOutputCompare = true)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/AxiLite4Timer").generateSystemVerilog(new AxiLite4Timer(axil4_timer_config)).printPruned()
    }
}

//Sim

object AxiLite4TimerBenchSimApp extends App{
    import spinal.core.sim._
    import utils.bus.AxiLite.sim.AxiLite4Driver
    import scala.util.Random

    val axil4_timer_config = AxiLite4TimerConfig(useInputCapture = false, useOutputCompare = true)
    SimConfig.withWave.doSim(new AxiLite4Timer(axil4_timer_config)){ dut =>
        dut.clockDomain.forkStimulus(5)

        val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
        aliteDrv.reset()

        aliteDrv.write(0x04, 30000)
        aliteDrv.write(0x08, 0)
        aliteDrv.write(0x0c, 0)
        aliteDrv.write(0x10, 0)
//        aliteDrv.write(0x00, 0x1f)
        aliteDrv.write(0x00, 0x1d)

        aliteDrv.write(0x1c, 3)
        aliteDrv.write(0x20, 12)
        aliteDrv.write(0x2c, 10000)

        for(idx <- 0 until 50000){
            dut.io.ic_a.randomize()
            dut.io.ic_b.randomize()
            dut.clockDomain.waitSampling(1)
        }

        aliteDrv.write(0x18, 1)
        aliteDrv.write(0x18, 0)
        dut.clockDomain.waitSampling(50000)
    }
}