package utils.common.ClockDiv

import spinal.core._
import spinal.lib._

case class DynamicClockDivider(divisorWidth: Int) extends Component {
    val io = new Bundle{
        val enable = in(Bool())
        val divisor = in(UInt(divisorWidth bits))
        val clk_out = out(Bool())
    }
    noIoPrefix()
    val pos_cnt = Reg(UInt(divisorWidth bits)) init(0)
    val clk_out_buf = RegInit(False)
    val clk_pos_buf = RegInit(False)
    when(io.enable){
        when(io.divisor.lsb){
            pos_cnt := (pos_cnt === (io.divisor - 1)) ? U(0) | (pos_cnt + 1)
            when(pos_cnt === (io.divisor - 1) || pos_cnt === ((io.divisor - 1)  >> 1)){
                clk_pos_buf := ~clk_pos_buf
            }
        }.otherwise{
            pos_cnt := (pos_cnt === ((io.divisor >> 1) - 1)) ? U(0) | (pos_cnt + 1)
            when(pos_cnt === ((io.divisor >> 1) - 1)){
                clk_out_buf := ~clk_out_buf
            }
        }
    }.otherwise{
        pos_cnt := 0
        clk_out_buf := False
        clk_pos_buf := False
    }

    val negEdgeClockDomain = ClockDomain(
        this.clockDomain.clock,
        reset = this.clockDomain.reset,
        config = ClockDomainConfig(
            clockEdge        = FALLING,
            resetKind        = this.clockDomain.config.resetKind,
            resetActiveLevel = this.clockDomain.config.resetActiveLevel
        ))
    val negEdgeClockArea = new ClockingArea(negEdgeClockDomain){
        val clk_neg_buf = RegInit(False)
        val neg_cnt = Reg(UInt(divisorWidth bits)) init(0)
        when(io.enable){
            neg_cnt := (neg_cnt === (io.divisor - 1)) ? U(0) | (neg_cnt + 1)
            when(neg_cnt === (io.divisor - 1) || neg_cnt === ((io.divisor - 1)  >> 1)){
                clk_neg_buf := ~clk_neg_buf
            }
        }.otherwise{
            neg_cnt := 0
            clk_neg_buf := False
        }
    }
    when(io.divisor === 0){
        io.clk_out := False
    }.elsewhen(io.divisor.lsb){
        io.clk_out := clk_pos_buf | negEdgeClockArea.clk_neg_buf
    }.otherwise{
        io.clk_out := clk_out_buf
    }

}


object DynamicClockDividerBench {
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/ClockDivider").generateSystemVerilog(new DynamicClockDivider(4)).printPruned()
    }
}


object DynamicClockDividerSimApp extends App {
    import spinal.core.sim._
    SimConfig
        .withWave
        .allOptimisation
        .doSim(new DynamicClockDivider(4)) { dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.enable #= true
            for(idx <- 0 until 16 ) {
                dut.io.enable #= true
                dut.io.divisor #= idx
                dut.clockDomain.waitSampling(50)
                dut.io.enable #= false
                dut.clockDomain.waitSampling(1)
            }
        }
}
