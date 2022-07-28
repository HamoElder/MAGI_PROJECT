package utils.common.ClockDiv

import spinal.core._
import spinal.lib._

import scala.annotation.tailrec

case class ClockDivider(divisor: Double) extends Component {
    require(divisor >= 0, "Divisor must larger than or equal to zero.")
    val io = new Bundle{
        val enable = in(Bool())
        val clk_out = out(Bool())
    }
    noIoPrefix()
    if(divisor.isValidInt){
        val int_divisor = divisor.toInt
        if(int_divisor == 0){
            io.clk_out := this.clockDomain.clock
        }else if((int_divisor & 1) == 0){
            val cnt = Reg(UInt(log2Up(int_divisor >> 1) + 1 bits)) init(0)
            val clk_out_buf = RegInit(False)
            when(io.enable){
                cnt := (cnt === ((int_divisor >> 1) - 1)) ? U(0) | (cnt + 1)
                when(cnt === ((int_divisor >> 1) - 1)){
                    clk_out_buf := ~clk_out_buf
                }
            }
            io.clk_out := clk_out_buf
        }else if((int_divisor & 1) == 1){
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
                val neg_cnt = Reg(UInt(log2Up(int_divisor - 1) + 1 bits)) init(0)
                when(io.enable){
                    neg_cnt := (neg_cnt === (int_divisor - 1)) ? U(0) | (neg_cnt + 1)
                    when(neg_cnt === (int_divisor - 1) || neg_cnt === ((int_divisor - 1)  >> 1)){
                        clk_neg_buf := ~clk_neg_buf
                    }
                }
            }
            val clk_pos_buf = RegInit(False)
            val pos_cnt = Reg(UInt(log2Up(int_divisor - 1) + 1 bits)) init(0)
            when(io.enable){
                pos_cnt := (pos_cnt === (int_divisor - 1)) ? U(0) | (pos_cnt + 1)
                when(pos_cnt === (int_divisor - 1) || pos_cnt === ((int_divisor - 1)  >> 1)){
                    clk_pos_buf := ~clk_pos_buf
                }
            }
            io.clk_out := clk_pos_buf | negEdgeClockArea.clk_neg_buf
        }
    }
    else {
        def decimal2integer(divisor: Double): (Int, Int, Int, Int) = {
            @tailrec
            def gcd(a:Int, b:Int):Int ={
                if(b==0) a else gcd (b,a%b)
            }
            val divisor_str = divisor.toString
            val integerPlaces = divisor_str.indexOf('.')
            val decimalPlaces = divisor_str.length() - integerPlaces - 1

            val raw_denominator = Math.pow(10, decimalPlaces).toInt
            val raw_numerator = (divisor * raw_denominator).toInt

            val gcd_val = gcd(raw_denominator, raw_numerator)

            val denominator = raw_denominator / gcd_val
            val numerator = raw_numerator / gcd_val

            val clk_div_lower_bound = divisor.toInt
            val clk_div_upper_bound = divisor.toInt + 1

            println(
                ((numerator - denominator * clk_div_upper_bound) / (clk_div_lower_bound - clk_div_upper_bound),clk_div_lower_bound,
                denominator - (numerator - denominator * clk_div_upper_bound) / (clk_div_lower_bound - clk_div_upper_bound),
                clk_div_upper_bound)
            )

            ((numerator - denominator * clk_div_upper_bound) / (clk_div_lower_bound - clk_div_upper_bound),clk_div_lower_bound,
                denominator - (numerator - denominator * clk_div_upper_bound) / (clk_div_lower_bound - clk_div_upper_bound),
                clk_div_upper_bound)
        }

        val (lower_div_limit, lower_div_val, upper_div_limit, upper_div_val) = decimal2integer(divisor)
        val clk_low2clk_up = lower_div_limit * lower_div_val
        val total_cycle = lower_div_limit * lower_div_val + upper_div_limit * upper_div_val

        val clk_cnt = Reg(UInt(log2Up(Math.max(lower_div_val, upper_div_val) + 1) bits)) init(0)
        val cyc_cnt = Reg(UInt(log2Up(total_cycle + 1) bits)) init(0)
        val clk_low_sel = Reg(Bool()) init(True)
        val clk_out_buf = Reg(Bool()) init(False)

        when(io.enable){
            when(clk_low_sel){
                clk_cnt := (clk_cnt === (lower_div_val - 1)) ? U(0) | clk_cnt + 1
            }.otherwise{
                clk_cnt := (clk_cnt === (upper_div_val - 1)) ? U(0) | clk_cnt + 1
            }

            cyc_cnt := (cyc_cnt === (total_cycle - 1)) ? U(0) | cyc_cnt + 1
            clk_low_sel := (cyc_cnt === (total_cycle - 1) || cyc_cnt === (clk_low2clk_up - 1)) ? ~clk_low_sel | clk_low_sel

            when(clk_low_sel){
                clk_out_buf := clk_cnt<=((lower_div_val>>2)+1)
            }.otherwise{
                clk_out_buf := clk_cnt<=((upper_div_val>>2)+1)
            }
        }

        io.clk_out := clk_out_buf

    }

}


object ClockDividerBench {
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/ClockDivider").generateSystemVerilog(new ClockDivider(8)).printPruned()
    }
}


object ClockDividerSimApp extends App {
    import spinal.core.sim._
    SimConfig
        .withWave
        .allOptimisation
        .doSim(new ClockDivider(8.7)) { dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.enable #= true
            dut.clockDomain.waitSampling(200)
        }
}

