package magiRF.modules.Filters.CIC

import magiRF.modules.DSP.Decimator.Decimator
import spinal.core._
import spinal.lib._

case class CICFilter(dataInWidth: Int, dataInternalWidth: Int, dataOutWidth: Int,
                     integratorStages: Int,  nDecimation: Int, combStages: Int) extends Component {
    def dataInType: SInt = SInt(dataInWidth bits)
    def dataInternalType: SInt = SInt(dataInternalWidth bits)
    def dataOutType: SInt = SInt(dataOutWidth bits)
    val io = new Bundle{
        val raw_data = slave(Flow(dataInType))
        val filtered_data = master(Flow(dataOutType))
    }
    noIoPrefix()

    val integrator = CICIntegrator(dataInWidth, dataOutWidth, integratorStages)
    integrator.io.raw_data << io.raw_data

    val decimator = Decimator(dataInternalType, nDecimation)
    decimator.io.in << integrator.io.result_data.resized

    val combor = CICComb(dataInternalWidth, dataOutWidth, combStages)
    combor.io.raw_data << decimator.io.out

    io.filtered_data << combor.io.result_data

}

object CICFilterBench{
    def main(args: Array[String]): Unit ={
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/CICFilter").generateSystemVerilog(new CICFilter(12, 21,
            17, 3, 5, 3)).printPruned().printUnused()
    }
}


object CICFilterSimApp extends App{
    import spinal.core.sim._

    SimConfig.withWave.doSim(new CICFilter(16, 21, 17, 3,
        5, 3)){ dut =>
        dut.clockDomain.forkStimulus(5)

        dut.io.raw_data.valid #= false
        dut.io.raw_data.payload #= 0
        dut.clockDomain.waitSampling(1)
        dut.clockDomain.reset
        //        dut.io.raw_data.payload(1) #= 0
        dut.clockDomain.waitSampling(10)
        var valid_bool = false
        for(idx <- 1 until 1024){
            valid_bool = !valid_bool
            dut.io.raw_data.valid #= true
            dut.io.raw_data.payload #= (20 * Math.sin(idx*2*Math.PI*3 / 1024) + 30 * Math.sin(idx*2*Math.PI*150 / 1024)).toInt
            //            dut.io.raw_data.payload(1) #= idx
            dut.clockDomain.waitSampling(1)
        }
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(10)
    }
}

