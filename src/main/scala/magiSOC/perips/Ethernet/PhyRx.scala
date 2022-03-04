package magiSOC.perips.Ethernet

import spinal.core._
import spinal.lib._

object PhyRxStates extends SpinalEnum {
    val IDLE, ADDRESS, READY, PROCESS, FINISH = newElement()
}

case class PhyRx(config: PhyConfig) extends Component {
    val io = new Bundle{
        val rxStreamPush = master(Stream(PhyPayload(config)))
        val gmiiRx = master(GmiiRx(config.gmiiConfig))
        val core_mac_addr = in(Bits(48 bits))
        val core_rx_full = in(Bool())
        val core_reset = in(Bool())
    }
    noIoPrefix()
    val rx_en = ~(io.core_reset | io.core_rx_full)
    val core_mac_addr_slice = io.core_mac_addr.subdivideIn(8 bits)

    import PhyRxStates._
    val gmii_rx_states = Reg(PhyRxStates()) init(IDLE)

    val rx_data = Reg(config.dataType)
    val rx_counter = Reg(UInt(8 bits)) init(0)

    val rx_strb = Reg(config.strbType)
    val fifoCcPush_valid = Reg(Bool) init(False)
    val fifoCcPush_data = Reg(config.dataType)
    val fifoCcPush_strb = Reg(config.strbType)

    io.rxStreamPush.valid := fifoCcPush_valid
    io.rxStreamPush.data := fifoCcPush_data
    io.rxStreamPush.strb := fifoCcPush_strb
    io.rxStreamPush.last := ~io.gmiiRx.DV
    switch(gmii_rx_states){
        is(IDLE){
            when(io.gmiiRx.DV&&io.gmiiRx.RXD === B"8'x55" && rx_en){
                rx_counter := rx_counter + 1
            }.otherwise{
                rx_counter := 0
            }
            when(rx_counter === 7 && io.gmiiRx.RXD === B"8'xd5" && io.gmiiRx.DV && rx_en){
                gmii_rx_states := ADDRESS
            }
            fifoCcPush_valid := False
        }
        is(ADDRESS){
            rx_data := (io.gmiiRx.RXD ## rx_data).resizeLeft(rx_data.getWidth)
            rx_strb := (B"1'b1" ## rx_strb).resizeLeft(rx_strb.getWidth)

            when(io.gmiiRx.DV === True && (io.gmiiRx.RXD === core_mac_addr_slice(rx_counter.resized) || io.gmiiRx.RXD === B"8'xFF")){
                rx_counter := rx_counter + 1
                when(rx_counter === 2){
                    gmii_rx_states := READY
                }
            }.otherwise{
                gmii_rx_states := IDLE
            }

        }
        is(READY){
            when(io.gmiiRx.DV === True){
                when(rx_counter <= 2){
                    rx_counter := rx_counter + 1
                    rx_data := (io.gmiiRx.RXD ## rx_data).resizeLeft(rx_data.getWidth)
                    rx_strb := (B"1'b1" ## rx_strb).resizeLeft(rx_strb.getWidth)
                    fifoCcPush_valid := False
                }.otherwise{
                    fifoCcPush_valid := True
                    fifoCcPush_data := (io.gmiiRx.RXD ## rx_data).resizeLeft(rx_data.getWidth)
                    fifoCcPush_strb := (B"1'b1" ## rx_strb).resizeLeft(rx_strb.getWidth)
                    rx_counter := 0
                }
            }.otherwise{
                fifoCcPush_valid := False
                when(rx_counter === 0){
                    gmii_rx_states := FINISH
                }.otherwise{
                    gmii_rx_states := PROCESS
                }
            }
        }
        is(PROCESS){
            when(rx_counter <= 2){
                rx_data := (B"8'x0" ## rx_data).resizeLeft(rx_data.getWidth)
                rx_strb := (B"1'b0" ## rx_strb).resizeLeft(rx_strb.getWidth)
                rx_counter := rx_counter + 1
                fifoCcPush_valid := False
            }.otherwise{
                fifoCcPush_valid := True
                fifoCcPush_data := (B"8'x0" ## rx_data).resizeLeft(rx_data.getWidth)
                fifoCcPush_strb := (B"1'b0" ## rx_strb).resizeLeft(rx_strb.getWidth)
                gmii_rx_states := FINISH
            }
        }
        is(FINISH){
            rx_counter := 0
            fifoCcPush_valid := False
            gmii_rx_states := IDLE
        }
    }
}
