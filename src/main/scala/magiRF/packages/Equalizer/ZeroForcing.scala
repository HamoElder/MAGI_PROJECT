package magiRF.packages.Equalizer

import spinal.core._
import spinal.lib._

case class ZeroForcing(dataWidth: Int) extends Component{
    def dataType = SInt(dataWidth bits)
    val io = new Bundle{
        val raw_data = slave(Stream(dataType))
        val equalized_data = master(Flow(dataType))
        val train_en = in(Bool())
    }
    noIoPrefix()
    when(io.raw_data.fire){
        when(io.train_en){

        }.otherwise{

        }
    }
}
