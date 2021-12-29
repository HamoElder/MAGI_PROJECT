package magiSOC.perips.DMA.BlockDMA

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.{Axi4, Axi4Config}
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}


object Axi4DMAWriteStates extends SpinalEnum{
    val IDLE, START, WRITE, FINISH_BURST, DROP_DATA = newElement()
}


case class Axi4BlockDMAConfig(
                             axiAddressWidth   : Int,
                             cfgDataWidth      : Int,
                             axiDataWidth      : Int,
                             maxBurstLen       : Int,
                             outStanding       : Int = 4
                             ){
    def idWidth = 4

    def cfgAddressWidth: Int = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(cfgAddressWidth, cfgDataWidth)

    def axi4Config: Axi4Config = Axi4Config(
        addressWidth = axiAddressWidth,
        dataWidth = axiDataWidth,
        idWidth = idWidth,
        useLock = false,
        useRegion = false,
        useCache = false,
        useProt = false,
        useQos = false
    )
}


case class Axi4BlockDMA(config: Axi4BlockDMAConfig) extends Component {
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
        val axi4Data = master(Axi4(config.axi4Config))
//
//        val mem_to_stream = master(Stream())
//        val stream_to_mem = slave(Stream())
        val intr_m2s = out(Bool())
        val intr_s2m = out(Bool())
    }
    noIoPrefix()
    AxiLite4SpecRenamer(io.axil4Ctrl)
    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")

    val ar_fifo = StreamFifo(
        dataType = io.axi4Data.ar.payload,
        depth = config.outStanding
    )
    ar_fifo.io.push << io.axi4Data.ar

    val aw_fifo = StreamFifo(
        dataType = io.axi4Data.aw.payload,
        depth = config.outStanding
    )

    aw_fifo.io.push << io.axi4Data.aw

    val b_fifo = StreamFifo(
        dataType = io.axi4Data.b.payload,
        depth = config.outStanding
    )

    io.axi4Data.b << b_fifo.io.pop

//    val r_fifo = StreamFifo(
//        dataType = io.axi4Data.r.payload,
//        depth = config.outStanding
//    )
//    io.axi4Data.r << r_fifo.io.pop

    /**
     * Read Channel
     */




    axil4busCtrl.printDataModel()
}
