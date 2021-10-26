package magiSOC.perips.RTC

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}

case class AxiLite4RTC_Config(
                          dataWidth : Int = 32,
                          cfgDataWidth : Int = 32,
                          idWidth : Int,
                          rtcClkFreq : HertzNumber = 100 MHz
                          ){
    def cfgAddressWidth: Int = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(cfgAddressWidth, cfgDataWidth)
    def rtcConfig: RTCConfig = RTCConfig(dataWidth, rtcClkFreq)
}

class AxiLite4RTC(config : AxiLite4RTC_Config) extends Component {
    val io = new Bundle{
        val axi_aclk = in Bool()
        val axi_aresetn = in Bool()
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))

        val intr = out Bool()
    }
    noIoPrefix()
    AxiLite4SpecRenamer(io.axil4Ctrl)
    val axiClock = new ClockDomain(
        clock = io.axi_aclk,
        reset = io.axi_aresetn,
        config = ClockDomainConfig(resetKind = SYNC,
            resetActiveLevel = LOW)
    )

    val axiClockArea = new ClockingArea(axiClock){
        val factory = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
        val rtc_mod = RTC(config.rtcConfig)
        val bridge = rtc_mod.driveFrom(factory, 0x00)

    }
    io.intr := axiClockArea.rtc_mod.RTC_ALARM
}

object Axil4RTCBench {
    def main(args: Array[String]) {
        val rtc_config = AxiLite4RTC_Config(32, 32, 3, 100 MHz)
        SpinalConfig(targetDirectory = "rtl/Axil4RTC").generateSystemVerilog(new AxiLite4RTC(rtc_config)).printPruned()
    }
}