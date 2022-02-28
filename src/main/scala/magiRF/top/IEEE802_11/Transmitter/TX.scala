package magiRF.top.IEEE802_11.Transmitter

import spinal.core._
import spinal.lib._
import utils.bus.AxiStream4.AxiStream4


case class TX() extends Component{
    val io = new Bundle{
//        val raw_data = slave(AxiStream4())
    }

    noIoPrefix()


}
