package magiSOC.perips.Ethernet

import spinal.core._
import spinal.lib._


case class PhyConfig(
                        dataWidth : Int,
                        useStrb : Boolean = false
                    ){
    def bytePerWord: Int = dataWidth/8
    def dataType: Bits = Bits(dataWidth bits)
    def strbType: Bits = Bits(bytePerWord bits)

    def gmiiDataWidth: Int = 8
    def gmiiConfig: GmiiParameter = GmiiParameter(gmiiDataWidth, withEr = true)
}

case class PhyPayload(config: PhyConfig) extends Bundle {
    val data = config.dataType
    val strb = if(config.useStrb) config.strbType else null
    val last = Bool()
}

case class PhyInterface(config: PhyConfig) extends Component {
    val io = new Bundle{
        val rxStagingFifoCcPush = master Stream(PhyPayload(config))
        val txStagingFifoCcPop = slave Stream(PhyPayload(config))
        val status2PhyPop = slave Stream(Bits(50 bits))
        val gmiiMaster = master(Gmii(config.gmiiConfig))
    }
    noIoPrefix()

    val core_reset = Reg(Bool) init(False)
    val core_rx_full = Reg(Bool) init(False)
    val core_mac_addr = Reg(Bits(48 bits))

    io.status2PhyPop.ready := True
    when(io.status2PhyPop.fire){
        core_reset := io.status2PhyPop.payload(49)
        core_rx_full := io.status2PhyPop.payload(48)
        core_mac_addr := io.status2PhyPop.payload.resized
    }
    val phy_tx = PhyTx(config)
    val phy_rx = PhyRx(config)

    io.gmiiMaster.TX << phy_tx.io.gmiiTx
    io.txStagingFifoCcPop.ready := phy_tx.io.raw_phy_data.ready
    phy_tx.io.raw_phy_data.valid := io.txStagingFifoCcPop.valid
    phy_tx.io.raw_phy_data.payload := io.txStagingFifoCcPop.payload
    phy_tx.io.core_reset := core_reset

    phy_rx.io.gmiiRx << io.gmiiMaster.RX
    io.rxStagingFifoCcPush.valid := phy_rx.io.rxStreamPush.valid
    phy_rx.io.rxStreamPush.ready := io.rxStagingFifoCcPush.ready
    io.rxStagingFifoCcPush.payload := phy_rx.io.rxStreamPush.payload
    phy_rx.io.core_mac_addr := core_mac_addr
    phy_rx.io.core_rx_full := core_rx_full
    phy_rx.io.core_reset := core_reset

}
