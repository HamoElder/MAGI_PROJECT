package magiSOC.perips.Uart

import spinal.core._
import spinal.lib._
import spinal.lib.com.uart.{Uart, UartCtrl, UartCtrlGenerics, UartCtrlInitConfig, UartCtrlMemoryMappedConfig}
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}

case class AxiLite4UartConfig(
                            dataWidthMax: Int = 8,
                            clockDividerWidth: Int = 20, // baudrate = Fclk / (rxSamplePerBit*clockDividerWidth) !!
                            preSamplingSize: Int = 1,
                            samplingSize: Int = 5,
                            postSamplingSize: Int = 2,
                            ctsGen : Boolean = false,
                            rtsGen : Boolean = false,
                            initConfig : UartCtrlInitConfig = null,
                            busCanWriteClockDividerConfig : Boolean = true,
                            busCanWriteFrameConfig : Boolean = true,
                            txFifoDepth : Int = 32,
                            rxFifoDepth : Int = 32,
                            cfgDataWidth     : Int = 32
                        ) {
    def cfgAddressWidth: Int = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(cfgAddressWidth, cfgDataWidth)
    def uartCtrlConfig: UartCtrlGenerics = UartCtrlGenerics(dataWidthMax, clockDividerWidth, preSamplingSize, samplingSize,
        postSamplingSize, ctsGen, rtsGen)
    def uartMemoryConfig: UartCtrlMemoryMappedConfig = UartCtrlMemoryMappedConfig(uartCtrlConfig, initConfig, busCanWriteClockDividerConfig,
        busCanWriteFrameConfig, txFifoDepth, rxFifoDepth)
}

case class AxiLite4Uart(config : AxiLite4UartConfig) extends Component{
    val io = new Bundle{
        val axil4Ctrl =  slave(AxiLite4(config.axiLite4Config))
        val uart = master(Uart())
        val interrupt = out Bool()
    }
    noIoPrefix()
    AxiLite4SpecRenamer(io.axil4Ctrl)
    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")

    val uartCtrl = new UartCtrl(config.uartCtrlConfig)
    io.uart <> uartCtrl.io.uart

    val bridge = uartCtrl.driveFrom32(axil4busCtrl,config.uartMemoryConfig)
    io.interrupt := bridge.interruptCtrl.interrupt
    axil4busCtrl.printDataModel()
}

object AxiLite4UartBench {
    def main(args: Array[String]): Unit = {
        val axil4_uart_config = AxiLite4UartConfig()
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            defaultClockDomainFrequency=FixedFrequency(100 MHz), targetDirectory = "rtl/AxiLite4Uart").generateSystemVerilog(new AxiLite4Uart(axil4_uart_config)).printPruned()
    }
}
