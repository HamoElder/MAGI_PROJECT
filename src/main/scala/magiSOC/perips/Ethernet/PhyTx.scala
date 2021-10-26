package magiSOC.perips.Ethernet

import spinal.core._
import spinal.lib._
import utils.common.CRC.{Crc, CrcKind}

object PhyTxStates extends SpinalEnum {
    val IDLE, READY, PROCESS, LAST, PAD, FINISH, WAIT = newElement()
}

case class PhyTx(config: PhyConfig) extends Component {
    val io = new Bundle{
        val txStreamPop = slave Stream(PhyPayload(config))
        val gmiiTx = master(GmiiTx(config.gmiiConfig))
        val core_reset = in Bool()
    }
    noIoPrefix()
    import PhyTxStates._
    val gmii_tx_states = Reg(PhyTxStates()) init(IDLE)

    val crc32_module = Crc(CrcKind.Crc32, config.gmiiDataWidth)
    val crc32_valid = Reg(Bool) init(False)
    val crc32_flush = Reg(Bool) init(False)

    val tx_en = Reg(Bool) init(False)
    val tx_d = Reg(Bits(config.gmiiDataWidth bits))
    val fifoCcPop_ready = Reg(Bool) init(False)

    // Connections
    io.gmiiTx.ER := False
    io.gmiiTx.EN := tx_en
    io.txStreamPop.ready := fifoCcPop_ready
    io.gmiiTx.TXD := tx_d
    val tx_counter = Reg(UInt(8 bits)) init(0)
    val tx_payload_counter = Reg(UInt(11 bits)) init(0)

    val tx_data = Reg(config.dataType)
    val tx_strb = Reg(config.strbType)
    crc32_module.io.input.valid := crc32_valid
    crc32_module.io.input.payload := tx_data(0 to 7)
    crc32_module.io.flush := crc32_flush

    switch(gmii_tx_states){
        is(IDLE){
            when(io.txStreamPop.valid & ~io.core_reset){
                gmii_tx_states := READY
            }
            tx_counter := 0
            tx_payload_counter := 0
            crc32_valid := False
            crc32_flush := True

            fifoCcPop_ready := False
            tx_en := False
        }
        is(READY){
            tx_en := True
            crc32_flush := False
            when(tx_counter <= 6){
                tx_d := 0x55
                tx_counter := tx_counter + 1
            }.otherwise{
                tx_d := 0xd5
                gmii_tx_states := PROCESS
                fifoCcPop_ready := True
                crc32_valid := True
                tx_data := io.txStreamPop.data
                tx_strb := io.txStreamPop.strb
                tx_counter := 0
            }
        }
        is(PROCESS){
            tx_en := True
            tx_d := tx_data(0 to 7)
            tx_payload_counter := tx_payload_counter + 1

            when(tx_counter <= 2){
                tx_data := (tx_data |>> 8).resized
                tx_strb := (tx_strb |>> 1).resized
                fifoCcPop_ready := False
                tx_counter := tx_counter + 1
            }.otherwise{
                tx_data := io.txStreamPop.data
                tx_strb := io.txStreamPop.strb
                fifoCcPop_ready := True
                when(io.txStreamPop.last){
                    gmii_tx_states := LAST
                }
                tx_counter := 0
            }
        }
        is(LAST){
            tx_d := tx_data(0 to 7)
            tx_payload_counter := tx_payload_counter + 1
            when(~tx_strb(1)){
                when(tx_payload_counter < 59){
                    gmii_tx_states := PAD
                    tx_data := 0
                }.otherwise{
                    gmii_tx_states := FINISH
                    crc32_valid := False
                    tx_data := crc32_module.io.resultNext
                    tx_counter := 0
                }
            }.otherwise{
                tx_data := (tx_data |>> 8).resized
                tx_strb := (tx_strb |>> 1).resized
                tx_counter := tx_counter + 1
            }
            fifoCcPop_ready := False
        }
        is(PAD){
            tx_en := True
            tx_d := tx_data(0 to 7)
            tx_payload_counter := tx_payload_counter + 1
            when(tx_payload_counter >= 59){
                gmii_tx_states := FINISH
                crc32_valid := False
                tx_data := crc32_module.io.resultNext
                tx_counter := 0
            }
        }
        is(FINISH){
            tx_d := tx_data(0 to 7)
            tx_counter := tx_counter + 1
            when(tx_counter <= 3){
                tx_en := True
                tx_data := (tx_data |>> 8).resized
            }.otherwise{
                tx_en := False
                gmii_tx_states := WAIT
            }
        }
        is(WAIT){
            gmii_tx_states := IDLE
        }
    }

}
