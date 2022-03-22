package magiRF.top.RFBench.Receiver

import magiRF.top.RFBench.Config.{iqWidth, stream_config}
import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.AxiLite4SpecRenamer
import utils.bus.AxiStream4.{AxiStream4, AxiStream4SpecRenamer}
import utils.bus.IQBundle.IQBundle

case class RxSim() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(IQBundle(Bits(iqWidth bits))))
        val result_data = master(AxiStream4(stream_config))
    }
    noIoPrefix()
    AxiStream4SpecRenamer(io.result_data)
//    AxiLite4SpecRenamer(io.axil4Ctrl)


}
