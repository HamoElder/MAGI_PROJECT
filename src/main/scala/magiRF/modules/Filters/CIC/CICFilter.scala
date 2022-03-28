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