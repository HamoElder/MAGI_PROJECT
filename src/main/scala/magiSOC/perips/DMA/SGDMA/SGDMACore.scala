package magiSOC.perips.DMA.SGDMA

import magiSOC.perips.DMA.BlockDMA.{BDMAConfig, BDMACore}
import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.{Axi4, Axi4SpecRenamer}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4SpecRenamer}


case class SGDMACoreConfig(
                              sgAddrWidth    : Int = 32,
                              sgDataWidth    : Int = 32,

                              axi4AddrWidth  : Int = 32,
                              axi4DataWidth  : Int = 32,
                              axi4MaxBurstLen: Int = 16,
                              axi4IDWidth    : Int = 4,

                              axis4StrbEn    : Boolean = true,
                              axis4KeepEn    : Boolean = true,
                              axis4IDEn      : Boolean = false,
                              axis4LastEn    : Boolean = true,

                              axil4DataWidth : Int     = 32,
                              bytesLimit     : BigInt  = 1 GiB,
                              outStandingLen : Int     = 2,
                              endianness     : Endianness = LITTLE
                          ){
    require(sgDataWidth == 32 || sgDataWidth == 64, "Data width must be 32 or 64")
    def sgAddrDataType: UInt = UInt(sgAddrWidth bits)
    def sgDataType: Bits = Bits(sgDataWidth bits)
    def sgLinkedListDepth: Int = 32
    val bdmaConfig: BDMAConfig = BDMAConfig(axi4AddrWidth, axi4DataWidth, axi4MaxBurstLen, axi4IDWidth, axis4StrbEn, axis4KeepEn,
        axis4IDEn, axis4LastEn, bytesLimit, outStandingLen, endianness)
}

object SGDMACCHStates extends SpinalEnum{
    val IDLE, CHECK_PREAMBLE, GET_MSG, SET_NEXT_PTR = newElement()
}

case class SGDMAControlChannel(config:SGDMACoreConfig) extends Bundle with IMasterSlave{
    val sg_startup_addr = UInt(config.sgAddrWidth bits)
    val sg_reset = Bool()
    val sg_error = Bool()
    /**
     * Error :Preamble Not Match
     */
    override def asMaster(): Unit = {
        out(sg_startup_addr, sg_reset)
        in(sg_error)
    }

    override type RefOwnerType = this.type
}

case class SGDMACore(config: SGDMACoreConfig) extends Component {
    val io = new Bundle{
        val axi4S2M = master(Axi4(config.bdmaConfig.axi4Config))
        val axi4M2S = master(Axi4(config.bdmaConfig.axi4Config))

        val dataS2M = slave(AxiStream4(config.bdmaConfig.axisConfig))
        val dataM2S = master(AxiStream4(config.bdmaConfig.axisConfig))

        val intr = out(Bool())

        val sgCtrl = slave(Stream(SGDMAControlChannel(config)))

    }
    noIoPrefix()
    Axi4SpecRenamer(io.axi4M2S)
    Axi4SpecRenamer(io.axi4S2M)
    AxiStream4SpecRenamer(io.dataS2M)
    AxiStream4SpecRenamer(io.dataM2S)

    val bdma_code = BDMACore(config.bdmaConfig)
    val linked_list_cursor = Reg(UInt(config.sgAddrWidth bits)) init(0)


    val sg_cch_state = Reg(SGDMACCHStates()) init(SGDMACCHStates.IDLE)
    switch(sg_cch_state){
        is(SGDMACCHStates.IDLE){
            when(io.sgCtrl.fire){
                sg_cch_state := SGDMACCHStates.CHECK_PREAMBLE
            }
        }
        is(SGDMACCHStates.CHECK_PREAMBLE){

        }
        is(SGDMACCHStates.GET_MSG){

        }
    }
    /** 32 bits
     * Symbol(16 bits) | desc_burst(2 bits)|desc_id(8 bits)|type(1 bits) | finish(1 bits)
     * start_addr(axi4AddrWidth bits)
     * desc_total_bytes(axi4DataWidth bits)
     * nextPtrAddr(sgAddrWidth bits)
     */


}
