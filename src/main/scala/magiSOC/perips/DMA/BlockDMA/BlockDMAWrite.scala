package magiSOC.perips.DMA.BlockDMA

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.{Axi4Ar, Axi4W}

object BDMAWriteStates extends SpinalEnum{

}

case class BlockDMAWrite(config: BDMAConfig) extends Component{
    val io = new Bundle(){
        val dma_ar = master(Stream(Axi4Ar(config.axi4Config)))
        val dma_w = slave(Stream(Axi4W(config.axi4Config)))

        val dma_cch = slave(Stream(DMAControlChannel(config)))
        val intr_s2m = out(Bool())
    }

    noIoPrefix()
}


