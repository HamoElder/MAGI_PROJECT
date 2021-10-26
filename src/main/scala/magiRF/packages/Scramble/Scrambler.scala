package magiRF.packages.Scramble

import spinal.core._
import spinal.lib._

case class ScramblerConfig(
                          dataWidth: Int,
                          regWidth: Int,
                          poly: Int
                          ){
    def dataType: Bits = Bits(dataWidth bits)
    def stateDataType: Bits = Bits(regWidth bits)
}

case class Scrambler(config: ScramblerConfig) extends Component{
    val io = new Bundle{
        val init_state = slave(Flow(config.stateDataType))
        val scram_data = master(Stream(config.dataType))
    }
    noIoPrefix()
    val scram_state = Reg(config.stateDataType)
    val r_scr: Vec[Bits] = Vec(config.stateDataType, config.dataWidth)
    val feed_back: Vec[Bool] = Vec(Bool(), config.dataWidth)
//    val feed_back: Bits= Bits(config.dataWidth bits)

    feed_back(0) := xorRGen(scram_state, config.poly, 0)
    r_scr(0) := (scram_state ## feed_back(0)).resized
    for(idx <- 1 until config.dataWidth){
        feed_back(idx) := xorRGen(r_scr(idx - 1), config.poly, 0)
        r_scr(idx) := (r_scr(idx - 1) ## feed_back(idx)).resized
    }
    val scram_valid = Reg(Bool()) init(False)
    val scram_data = Reg(config.dataType)

    when(io.init_state.valid){
        scram_state := io.init_state.payload
        scram_valid := False
    }.elsewhen(io.scram_data.ready){
        scram_state := r_scr(config.dataWidth - 1)
        scram_data := feed_back.asBits
        scram_valid := True
    }

    io.scram_data.payload := scram_data
    io.scram_data.valid := scram_valid

    def xorRGen(data: Bits, poly: Int, n: Int): Bool = {
        val next_poly = poly >> 1
        if((poly & 1) != 0){
            if(next_poly == 0) data(n) else xorRGen(data, poly >> 1, n + 1) ^ data(n)
        }
        else{
            xorRGen(data, poly >> 1, n + 1)
        }
    }
}

object ScramblerBench {
    def main(args: Array[String]): Unit = {
        val scram_config = ScramblerConfig(2, 7, 72)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/Scrambler").generateSystemVerilog(new Scrambler(scram_config)).printPruned().printUnused()
    }
}

object ScramblerSimApp extends App{
    import spinal.core.sim._

    val scram_config = ScramblerConfig(8, 7, 72)
    SimConfig.withWave.doSim(new Scrambler(scram_config)) { dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.scram_data.ready #= false
        dut.io.init_state.payload #= 127
        dut.io.init_state.valid #= false
        dut.clockDomain.waitSampling(1)
        dut.io.init_state.valid #= true
        dut.clockDomain.waitSampling(1)
        dut.io.init_state.valid #= false
        dut.clockDomain.waitSampling(1)

        dut.io.scram_data.ready #= true
        for(idx <- 0 until 1024){
            dut.io.scram_data.ready.randomize()
            dut.clockDomain.waitSampling(1)
        }

        dut.clockDomain.waitSampling(1024)
    }
}
