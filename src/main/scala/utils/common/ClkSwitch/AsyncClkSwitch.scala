package utils.common.ClkSwitch

import spinal.core._
import spinal.lib._

case class AsyncClkSwitch() extends Component {
    val io = new Bundle{
        val clk_in_0 = in(Bool())
        val clk_in_1 = in(Bool())
        val clk_rstn = in(Bool())
        val select = in(Bool())
        val clk_out = out(Bool())
    }
    noIoPrefix()

    val negClkDomain0 = ClockDomain(
        clock = io.clk_in_0,
        reset = io.clk_rstn,
        config = ClockDomainConfig(
            clockEdge = FALLING,
            resetKind = ASYNC,
            resetActiveLevel = LOW
        )
    )

    val negClkDomain1 = ClockDomain(
        clock = io.clk_in_1,
        reset = io.clk_rstn,
        config = ClockDomainConfig(
            clockEdge = FALLING,
            resetKind = ASYNC,
            resetActiveLevel = LOW
        )
    )

    val posClkDomain0 = ClockDomain(
        clock = io.clk_in_0,
        reset = io.clk_rstn,
        config = ClockDomainConfig(
            clockEdge = RISING,
            resetKind = ASYNC,
            resetActiveLevel = LOW
        )
    )

    val posClkDomain1 = ClockDomain(
        clock = io.clk_in_1,
        reset = io.clk_rstn,
        config = ClockDomainConfig(
            clockEdge = RISING,
            resetKind = ASYNC,
            resetActiveLevel = LOW
        )
    )

    val posClkArea1 = new ClockingArea(posClkDomain1) {
        val clk_sel_1 = RegInit(False) addTag (crossClockDomain)
    }
    val posClkArea0 = new ClockingArea(posClkDomain0) {
        val clk_sel_0 = RegNext((io.select === False) && (~posClkArea1.clk_sel_1)) init (False) addTag (crossClockDomain)
    }
    val _ = new ClockingArea(posClkDomain1) {
        posClkArea1.clk_sel_1 := (io.select === True) && (~posClkArea0.clk_sel_0)
    }

    val negClkArea0 = new ClockingArea(negClkDomain0){
        val clk_sel_0_buf = RegNext(posClkArea0.clk_sel_0) init(False)
    }
    val negClkArea1 = new ClockingArea(negClkDomain1) {
        val clk_sel_1_buf = RegNext(posClkArea1.clk_sel_1) init(False)
    }

    io.clk_out := (io.clk_in_0 && negClkArea0.clk_sel_0_buf) | (io.clk_in_1 && negClkArea1.clk_sel_1_buf)
}

object AsyncClkSwitchBench {
    def main(args: Array[String]): Unit = {
        SpinalConfig(targetDirectory = "rtl/AsyncClkSwitch").generateSystemVerilog(new AsyncClkSwitch()).printPruned()
    }
}


object AsyncClkSwitchSimApp extends App{
    import spinal.core.sim._
    SimConfig.withWave.allOptimisation.doSim(new AsyncClkSwitch()) { dut =>
        dut.negClkDomain0.forkStimulus(2)
        dut.negClkDomain1.forkStimulus(5)

        for (idx <- 0 until 100) {
            dut.io.select.randomize()
            dut.negClkDomain1.waitSampling(1)
        }
        dut.negClkDomain1.waitSampling(100)
    }
}