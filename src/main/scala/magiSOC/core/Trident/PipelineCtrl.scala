package magiSOC.core.Trident

import spinal.core._
import spinal.lib._

case class PipelineCtrl() extends Component {
    val io = new Bundle{
        val fetch_flush = in(Bool())
        val execute0_flush = in(Bool())
        val execute1_flush = in(Bool())

        val fetch_throwIt = out(Bool())
        val decode_throwIt = out(Bool())
        val execute0_throwIt = out(Bool())
        val execute1_throwIt = out(Bool())

    }
    noIoPrefix()
    io.fetch_throwIt := False
    io.decode_throwIt := False
    io.execute0_throwIt := False
    io.execute1_throwIt := False
    when(io.fetch_flush){
        io.fetch_throwIt := True
    }
    when(io.execute0_flush){
        io.fetch_throwIt := True
        io.decode_throwIt := True
        io.execute0_throwIt := True
    }
    when(io.execute1_flush){
        io.fetch_throwIt := True
        io.decode_throwIt := True
        io.execute0_throwIt := True
        io.execute1_throwIt := True
    }
}
