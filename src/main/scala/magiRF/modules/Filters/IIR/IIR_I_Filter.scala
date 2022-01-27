package magiRF.modules.Filters.IIR

import magiRF.modules.Filters.FIR.DirectFIR
import spinal.core._
import spinal.lib._


case class IIR_I_Filter(rawDataWidth: Int, filteredDataWidth: Int, Hx: List[Int], Hy: List[Int], chaNum: Int) extends Component{
    require(Hx.length == Hy.length, "The size of Coefficient must be matched.")
    require(isPow2(Hy.head), "Hy[0] must be the power of 2.")
    val scale: Int = log2Up(Hy.head)
    def rawDataType: SInt = SInt(rawDataWidth bits)
    def filteredDataType: SInt = SInt(filteredDataWidth bits)

    val io = new Bundle{
        val raw_data: Flow[Vec[SInt]] = slave(Flow(Vec(rawDataType, chaNum)))
        val filtered_data: Flow[Vec[SInt]] = master(Flow(Vec(filteredDataType, chaNum)))
    }
    noIoPrefix()

    val filtered_data_vec = Vec(Reg(filteredDataType) init(0), chaNum)
    val filtered_valid_buf = Reg(Bool()) init(False)

    val fir_zero = DirectFIR(rawDataWidth, filteredDataWidth, Hx, chaNum, reloadableCoff = false)
    val fir_pole = DirectFIR(filteredDataWidth, filteredDataWidth, Hy.drop(1), chaNum, reloadableCoff = false)

    fir_zero.io.raw_data.valid := io.raw_data.valid
    fir_zero.io.raw_data.payload := io.raw_data.payload
    for(cha <- 0 until chaNum) {

        when(fir_zero.io.filtered_data.valid){
            filtered_valid_buf := True
            filtered_data_vec(cha) := ((fir_zero.io.filtered_data.payload(cha) - fir_pole.io.filtered_data.payload(cha)) >> scale).resized
        }.otherwise{
            filtered_valid_buf := False
        }
    }
    fir_pole.io.raw_data.valid := filtered_valid_buf
    fir_pole.io.raw_data.payload := filtered_data_vec

    io.filtered_data.payload := filtered_data_vec
    io.filtered_data.valid := filtered_valid_buf
}

object IIR_I_FilterBench{
    def main(args: Array[String]): Unit ={
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/IIR_I_Filter").generateSystemVerilog(new IIR_I_Filter(12, 29, List(7, 21, 42, 56, 56, 42, 21, 7), List(512, -922, 1163, -811, 472, -122, 24, -2), chaNum = 2)).printUnused()
    }
}

object IIR_I_FilterSimApp extends App{
    import spinal.core.sim._

    SimConfig.withWave.doSim(new IIR_I_Filter(12, 29, List(7, 21, 42, 56, 56, 42, 21, 7), List(512, -922, 1163, -811, 472, -122, 24, -2), chaNum = 1)){ dut =>
        dut.clockDomain.forkStimulus(5)

        dut.io.raw_data.valid #= false
        dut.io.raw_data.payload(0) #= 0
        dut.clockDomain.waitSampling(1)
        dut.clockDomain.reset
        //        dut.io.raw_data.payload(1) #= 0
        dut.clockDomain.waitSampling(10)
        var valid_bool = false
        for(idx <- 0 until 1024){
            valid_bool = !valid_bool
            dut.io.raw_data.valid #= true
            dut.io.raw_data.payload(0) #= (10 * Math.sin(idx*2*Math.PI * 3/ 1024) + 100 * Math.sin(idx*2*Math.PI*50/ 1024)).toInt
            //            dut.io.raw_data.payload(1) #= idx
            dut.clockDomain.waitSampling(1)
        }
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(1000)
    }
}