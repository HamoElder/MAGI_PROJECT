package magiRF.interfaces.misc.lvds

import spinal.core._
import spinal.lib._

case class DualSampling(val dataWidth: Int) extends Component {
    val io = new Bundle{
        val data_p = in(Bits(dataWidth bits))
        val data_n = in(Bits(dataWidth bits))
        val data_out = out(Bits(dataWidth bits))
    }
    noIoPrefix()

    val negEdgeClockDomain = ClockDomain(
        this.clockDomain.clock,
        reset = this.clockDomain.reset,
        config = ClockDomainConfig(
            clockEdge        = FALLING,
            resetKind        = this.clockDomain.config.resetKind,
            resetActiveLevel = this.clockDomain.config.resetActiveLevel
    ))

    val p = Reg(Bits(dataWidth bits))
    val negEdgeClockArea = new ClockingArea(negEdgeClockDomain){
        val n = Reg(Bits(dataWidth bits))
        n := io.data_n ^ p
    }
    p := io.data_p ^ negEdgeClockArea.n
    io.data_out := p ^ negEdgeClockArea.n
}

object DualSamplingBench{
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(clockEdge = RISING, resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new DualSampling(1)).printPruned()
    }
}
