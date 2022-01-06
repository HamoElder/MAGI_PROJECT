package magiSOC.perips.Gpios

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}

case class AxiLite4GpiosConfig(
                              cfgDataWidth    : Int,
                              gpioWidth       : Int,
                              channelNum      : Int,
                              interrupt       : Seq[Seq[Int]]   = null   //List of pin id which can be used as interrupt source
                              ){
    require(interrupt.size == channelNum, "Interrupt Num must equal to the Channel Num.")
    require(channelNum >= 1, "ChannelNum must be larger than one.")
    def addressWidth = 8
    def gpios_configs: Seq[GpiosConfig] = (0 until channelNum).map(i=>GpiosConfig(gpioWidth, null, null, interrupt(i)))
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)
}

case class AxiLite4Gpios(config: AxiLite4GpiosConfig) extends Component {
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
        val gpio = Vec(inout(Analog(Bits(config.gpioWidth bits))), config.channelNum)
        val interrupt = Vec(out(Bool), config.channelNum)
    }

    noIoPrefix()
    AxiLite4SpecRenamer(io.axil4Ctrl)
    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")

    for(cha <- 0 until config.channelNum){
        val gpio_inst = Gpios(config.gpios_configs(cha))
        gpio_inst.driveFrom(axil4busCtrl, 0x20 * cha)

        for(idx <- 0 until config.gpioWidth){
            gpio_inst.io.gpios.read(idx) := io.gpio(cha)(idx)
            when(gpio_inst.io.gpios.writeEnable(idx)){
                io.gpio(cha)(idx) := gpio_inst.io.gpios.write(idx)
            }
        }
        io.interrupt(cha) := (gpio_inst.io.interrupt =/= 0)
    }
    axil4busCtrl.printDataModel()
}

object AxiLite4GpiosBench {
    def main(args: Array[String]): Unit = {
        val axil4_gpio_config = AxiLite4GpiosConfig(32, 32, 2, interrupt = Seq((0 until 16), Nil))
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            defaultClockDomainFrequency = FixedFrequency(100 MHz), targetDirectory = "rtl/AxiLite4Gpios").
            generateSystemVerilog(new AxiLite4Gpios(axil4_gpio_config)).printPruned()
    }
}


//Sim

object AxiLite4GpiosSimApp extends App{
    import spinal.core.sim._
    import utils.bus.AxiLite.sim.AxiLite4Driver
    import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
    import scala.util.Random
    val spinalConfig = SpinalConfig(defaultClockDomainFrequency = FixedFrequency(100 MHz))

    val axil4_gpio_config = AxiLite4GpiosConfig(32, 16, 2, interrupt = Seq((0 until 16), Nil))
    SimConfig.withWave.allOptimisation.doSim(new AxiLite4Gpios(axil4_gpio_config)){ dut =>
        dut.clockDomain.forkStimulus(5)

        val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
        aliteDrv.reset()
        dut.clockDomain.waitSampling(10)
        //        aliteDrv.write(0x14, 0x4)
        //        dut.io.dataOut.ready #= true
        //        StreamReadyRandomizer(dut.io.dataOut, dut.clockDomain)
        aliteDrv.write(0x00, 0xf)
        aliteDrv.write(0x04, 0xfa)
        dut.clockDomain.waitSampling(10)
        println(aliteDrv.read(0x08))
        dut.clockDomain.waitSampling(10)

        aliteDrv.write(0x04, 0x1)
        dut.clockDomain.waitSampling(5)
        println(aliteDrv.read(0x08))
        dut.clockDomain.waitSampling(10)

    }
}