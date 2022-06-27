package magiRF.packages.Equalizer

import Misc.math.Complex
import magiRF.top.IEEE802_11.IEEE802_11
import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

case class SCEqualizer(
                          dataTypePeak          : ExpNumber = 8 exp,
                          dataTypeResolution    : ExpNumber = -2 exp,
                          refSeqArray           : Array[Complex],
                          divisionFactor        : Int = -1,
                          iterations            : Int
                      ) extends Component{
    def dataWidth: Int = dataTypePeak.value - dataTypeResolution.value + 1
    def seqSize: Int = refSeqArray.length
    def dataType: SInt = SInt(dataWidth bits)
    def cntDataWidth: Int = log2Up(seqSize)
    def cntDataType: UInt = UInt(cntDataWidth bits)
    def divFactor: Int = if(divisionFactor < 0) log2Up(seqSize) else divisionFactor
    println(divFactor)
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(IQBundle(dataType))))
        val equalized_data = master(Flow(Fragment(IQBundle(dataType))))
    }
    noIoPrefix()

    val cha_i_scale = Reg(dataType)
    val cha_q_scale = Reg(dataType)

    val cha_i_ref = Vec(Reg(dataType), seqSize)
    val cha_q_ref = Vec(Reg(dataType), seqSize)

    for(idx <- 0 until seqSize){
        cha_i_ref(idx) := refSeqArray(idx).re.toInt
        cha_q_ref(idx) := refSeqArray(idx).im.toInt
    }


    val cnt = Reg(cntDataType) init(0)
    val train_en = Reg(Bool()) init(True)

    when(io.raw_data.last){
        cnt := 0
    }.elsewhen(io.raw_data.fire){
        cnt := (cnt === (seqSize - 1)) ? U(seqSize - 1) | (cnt + 1)
    }

    when(io.equalized_data.last){
        train_en := True
    }.elsewhen(cnt === (seqSize - 1) && io.raw_data.fire){
        train_en := False
    }


    val i_zf_eq = ZeroForcing(dataTypePeak, dataTypeResolution, iterations)
    i_zf_eq.io.raw_data.valid := io.raw_data.valid
    i_zf_eq.io.raw_data.payload := io.raw_data.cha_i
    i_zf_eq.io.scale := cha_i_scale
    i_zf_eq.io.train_en := train_en
    i_zf_eq.io.ref_data := cha_i_ref(cnt)
    val q_zf_eq = ZeroForcing(dataTypePeak, dataTypeResolution, iterations)
    q_zf_eq.io.raw_data.valid := io.raw_data.valid
    q_zf_eq.io.raw_data.payload := io.raw_data.cha_q
    q_zf_eq.io.scale := cha_q_scale
    q_zf_eq.io.train_en := train_en
    q_zf_eq.io.ref_data := cha_q_ref(cnt)

    val train_cnt = Reg(cntDataType) init(0)
    val train_finished = Reg(Bool()) init(False)
    when(io.equalized_data.last){
        train_cnt := 0
        train_finished := False
        cha_i_scale := 0
    }.elsewhen((i_zf_eq.io.result_data.valid && q_zf_eq.io.result_data.valid) && !(train_finished)){
        train_cnt := train_cnt + 1
        when(train_cnt === (seqSize - 1)){
            train_finished := True
        }
        cha_i_scale := cha_i_scale + (i_zf_eq.io.result_data.payload |>> divFactor)
        cha_q_scale := cha_q_scale +  (q_zf_eq.io.result_data.payload |>> divFactor)
    }
    val raw_data_ready = Reg(Bool()) init(True)
    when(io.raw_data.last && io.raw_data.fire){
        raw_data_ready := False
    }.elsewhen(io.equalized_data.last && io.equalized_data.fire){
        raw_data_ready := True
    }
    io.raw_data.ready := raw_data_ready

    io.equalized_data.valid := train_finished ? (i_zf_eq.io.result_data.valid && q_zf_eq.io.result_data.valid) | False
    io.equalized_data.cha_i := train_finished ? i_zf_eq.io.result_data.payload | S(0)
    io.equalized_data.cha_q := train_finished ? q_zf_eq.io.result_data.payload | S(0)
    io.equalized_data.last := Delay(io.raw_data.last, iterations)
}



object SCEqualizerSimApp extends App {
    import spinal.core.sim._
    val ref_data = IEEE802_11.ltfFreq.map(i=>{i*(1 << 7)})
    println(ref_data.mkString("Array(", ", ", ")"))
    SimConfig.withWave.allOptimisation
        .doSim(new OFDMEqualizer(3 exp, -12 exp, ref_data,
            16)) { dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.raw_data.valid #= false
            dut.io.raw_data.last #= false
            dut.clockDomain.waitSampling(10)

            /**
             * Train
             */
            for(data <- ref_data){
                dut.io.raw_data.cha_i #= (data.re*0.707).toInt
                dut.io.raw_data.cha_q #= (data.im*0.618).toInt
                dut.io.raw_data.valid #= true
                // dut.io.raw_data.valid.randomize()
                dut.clockDomain.waitSampling(1)
            }

            /**
             * Eq
             */
            for(data <- ref_data){
                dut.io.raw_data.cha_i #= (data.re*0.707).toInt
                dut.io.raw_data.cha_q #= (data.im*0.618).toInt
                dut.io.raw_data.valid #= true
                // dut.io.raw_data.valid.randomize()
                dut.clockDomain.waitSampling(1)
            }
            //            for(idx <- 1 until 128){
            //                dut.io.raw_data.cha_i #= (idx << 7)
            //                dut.io.raw_data.cha_q #= (idx << 5)
            //                dut.io.raw_data.valid #= true
            //                // dut.io.raw_data.valid.randomize()
            //                dut.clockDomain.waitSampling(1)
            //            }
            dut.io.raw_data.cha_i #= 256
            dut.io.raw_data.cha_q #= 256
            dut.io.raw_data.valid #= true
            dut.io.raw_data.last #= true
            dut.clockDomain.waitSampling(1)
            dut.io.raw_data.valid #= false
            dut.io.raw_data.last #= false
            dut.clockDomain.waitSampling(50)
        }
}
