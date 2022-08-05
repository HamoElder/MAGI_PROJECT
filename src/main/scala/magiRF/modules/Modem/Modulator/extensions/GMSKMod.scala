package magiRF.modules.Modem.Modulator.extensions

import Misc.math.GaussianLPF
import magiRF.modules.Filters.FIR.DirectFIR
import magiRF.modules.Modem.Misc.{modUnitConfig, modUnitInterface}
import spinal.core._
import spinal.lib._

case class GMSKModConfig(
                            BandwidthTimeProduct: Double = 0.3,
                            PulseLength: Int = 1,
                            InitialPhaseOffset: Double = Math.PI / 2,
                            SamplesPerSymbol: Int = 4
                        ){
    def samples_period: Double = 1 / SamplesPerSymbol.toDouble
    def symbol_period: Double = SamplesPerSymbol * samples_period
    def filterCoff: Seq[Double] = GaussianLPF(BandwidthTimeProduct, symbol_period.toInt, PulseLength, 1)

    def band_width:Double = BandwidthTimeProduct / symbol_period
}


case class GMSKMod(config: modUnitConfig, gmskConfig: GMSKModConfig) extends Component {
    val io = new Bundle{
//        val data_in = slave()
    }
    noIoPrefix()

//    val firFilter = DirectFIR(3, [1, 2, 3]);

}
