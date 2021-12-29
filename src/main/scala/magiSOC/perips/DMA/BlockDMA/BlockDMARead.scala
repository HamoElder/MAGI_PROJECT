package magiSOC.perips.DMA.BlockDMA

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.{Axi4Ar, Axi4R}

object Axi4DMAReadStates extends SpinalEnum{
    val IDLE, START  = newElement()
}


case class BlockDMARead(config: Axi4BlockDMAConfig) extends Component {
    val io = new Bundle{
        val dma_ar = Stream(Axi4Ar(config.axi4Config))
        val dma_r = Stream(Axi4R(config.axi4Config))

        val data_m2s = master(Stream(Axi4R(config.axi4Config)))
    }
    noIoPrefix()

}
