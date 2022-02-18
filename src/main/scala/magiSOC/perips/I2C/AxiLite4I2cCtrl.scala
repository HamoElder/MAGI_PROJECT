package magiSOC.perips.I2C

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}

case class AxiLite4I2cCtrlConfig(
                                    samplingWindowSize        : Int = 3,
                                    samplingClockDividerWidth : Int = 10,
                                    timeoutWidth              : Int = 20,
                                    addressFilterCount        : Int = 4,
                                    timerWidth                : Int = 12,
                                    cfgDataWidth              : Int = 32
                                ){
    def generics : I2cSlaveMemoryMappedGenerics = I2cSlaveMemoryMappedGenerics(
        ctrlGenerics = I2cSlaveGenerics(
            samplingWindowSize = samplingWindowSize,
            samplingClockDividerWidth = samplingClockDividerWidth bits,
            timeoutWidth = timeoutWidth bits
        ),
        addressFilterCount = addressFilterCount,
        masterGenerics = I2cMasterMemoryMappedGenerics(
            timerWidth = timerWidth
        )
    )
    def addressWidth = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)
}

case class AxiLite4I2cCtrl(config: AxiLite4I2cCtrlConfig) extends Component{
    val io = new Bundle{
        val axil4Ctrl =  slave(AxiLite4(config.axiLite4Config))
        val i2c = master(I2c())
        val interrupt = out Bool()
    }
    AxiLite4SpecRenamer(io.axil4Ctrl)
    val i2cCtrl = new I2cSlave(config.generics.ctrlGenerics)

    val busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    val bridge = i2cCtrl.io.driveFrom(busCtrl,0)(config.generics)

    //Phy
    io.i2c.scl.write := RegNext(bridge.i2cBuffer.scl.write) init(True)
    io.i2c.sda.write := RegNext(bridge.i2cBuffer.sda.write) init(True)
    bridge.i2cBuffer.scl.read := io.i2c.scl.read
    bridge.i2cBuffer.sda.read := io.i2c.sda.read

    io.interrupt := bridge.interruptCtrl.interrupt
    busCtrl.printDataModel()
}

object AxiLite4I2cCtrlBench{
    def main(args: Array[String]): Unit = {
        val axil4_i2c_config = AxiLite4I2cCtrlConfig()
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            defaultClockDomainFrequency = FixedFrequency(100 MHz), targetDirectory = "rtl/AxiLite4I2c").
            generateSystemVerilog(new AxiLite4I2cCtrl(axil4_i2c_config)).printPruned()
    }
}