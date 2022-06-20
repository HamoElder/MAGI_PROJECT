package magiRF.top.ASKDemodulator

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}

case class AxiLite4ASKSymbolCounter(chaNum:Int = 8, rawDataWidth: Int = 32) extends Component {
    def axiLite4Config: AxiLite4Config = AxiLite4Config(8, 32)
    val io = new Bundle{
        val raw_data = Vec(slave(Flow(SInt(rawDataWidth bits))), chaNum)
        val axil4Ctrl = slave(AxiLite4(axiLite4Config))

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

    for(cha <- 0 until chaNum){
        val rfClockArea = new ClockingArea(rfClockDomain) {
            val ask_symbol_counter = ASKSymbolCounter(rawDataWidth)
            ask_symbol_counter.io.raw_data << io.raw_data(cha)
        }
        val _ = rfClockArea.ask_symbol_counter.driveFrom(axil4busCtrl, 0x10 * cha, this.clockDomain, rfClockDomain)
    }
    axil4busCtrl.printDataModel()
}


object AxiLite4ASKSymbolCounterBench {
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/AxiLite4ASKSymbolCounter").generateSystemVerilog(new AxiLite4ASKSymbolCounter(8, 32)).printPruned()
    }
}