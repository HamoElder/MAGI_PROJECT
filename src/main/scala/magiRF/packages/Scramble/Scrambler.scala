package magiRF.packages.Scramble

import spinal.core._
import spinal.lib._


case class Scrambler(dataWidth: Int, regWidth: Int, poly: Int) extends Component{
    def dataType: Bits = Bits(dataWidth bits)
    def stateDataType: Bits = Bits(regWidth bits)
    val io = new Bundle{
        val init_state = slave(Flow(stateDataType))
        val scram_data = master(Stream(dataType))
    }
    noIoPrefix()
    val scram_state = Reg(stateDataType)
    val r_scr: Vec[Bits] = Vec(stateDataType, dataWidth)
    val feed_back: Vec[Bool] = Vec(Bool(), dataWidth)
//    val feed_back: Bits= Bits(dataWidth bits)

    feed_back(0) := xorRGen(scram_state, poly, 0)
    r_scr(0) := (scram_state ## feed_back(0)).resized
    for(idx <- 1 until dataWidth){
        feed_back(idx) := xorRGen(r_scr(idx - 1), poly, 0)
        r_scr(idx) := (r_scr(idx - 1) ## feed_back(idx)).resized
    }
    val scram_valid = Reg(Bool()) init(False)
    val scram_data = Reg(dataType)

    when(io.init_state.valid){
        scram_state := io.init_state.payload
        scram_valid := False
    }.elsewhen(io.scram_data.ready){
        scram_state := r_scr(dataWidth - 1)
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
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/Scrambler").generateSystemVerilog(new Scrambler(8, 7, 72)).printPruned().printUnused()
    }
}
