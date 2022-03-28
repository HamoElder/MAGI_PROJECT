package magiRF.interfaces.misc.jesd204b

import spinal.core._
import spinal.lib._

object K28_5 extends SpinalEnum {
    val S, K, R, A, Q, ILAS_CFG, USER_DATA = newElement()
}

case class JESD204bPayload() extends Bundle{
    val data = Bits(32 bits)
    val characters = Bits(4 bits)
}

case class JESD204bTrans() extends Component{
    val io = new Bundle{
        val tx_ports = master Flow(JESD204bPayload())

        val fifo_data_in = slave Stream(Bits(32 bits))

        val core_ila_cfg = in Bits(32 bits)
        val core_lan_ctrl = in(K28_5())

        val softReset = in Bool()
    }

    noIoPrefix()

    // Registers
    val lan_txdata = Reg(Bits(32 bits)) init(B"32'b0")
    val lan_txchar = Reg(Bits(4 bits)) init(B"4'b1111")
    val lan_valid = Reg(Bool) init(False)
    val fifo_ready = Reg(Bool) init(False)
    // Connections
    io.tx_ports.valid := lan_valid
    io.tx_ports.data := lan_txdata
    io.tx_ports.characters := lan_txchar
    io.fifo_data_in.ready := fifo_ready
    // States machine
    val lan_ctrl_state = Reg(K28_5()) init(K28_5.S)

    when(io.softReset){
        lan_ctrl_state := K28_5.S
        fifo_ready:= False
    }.otherwise{
        lan_ctrl_state := io.core_lan_ctrl
        fifo_ready := True
    }

    switch(lan_ctrl_state){
        is(K28_5.S){
            lan_txdata := B"32'h0"
            lan_txchar := B"4'b1111"
            lan_valid := True
        }
        is(K28_5.K){
            lan_txdata := B"32'hBCBCBCBC"
            lan_txchar := B"4'b1111"
            lan_valid := True
        }
        is(K28_5.R){
            lan_txdata := B"32'h0000001C"
            lan_txchar := B"4'b0001"
            lan_valid := True
        }
        is(K28_5.A){
            lan_txdata := B"32'h7C000000"
            lan_txchar := B"4'b1000"
            lan_valid := True
        }
        is(K28_5.Q){
            lan_txdata := (io.core_ila_cfg ## B"16'h9C1C").resized
            lan_txchar := B"4'b0011"
            lan_valid := True
        }
        is(K28_5.ILAS_CFG){
            lan_txdata := io.core_ila_cfg
            lan_txchar := B"4'b0000"
            lan_valid := True
        }
        is(K28_5.USER_DATA){
            lan_txdata := io.fifo_data_in.payload
            lan_txchar := B"4'b0000"
            lan_valid := True
        }
    }
}

object JESD204B_Word_Bench {
    def main(args: Array[String]) {
        SpinalConfig(targetDirectory = "rtl").generateSystemVerilog(new JESD204bTrans()).printPruned()
    }
}
