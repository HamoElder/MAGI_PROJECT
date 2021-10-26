package magiRF.interface.frontend.AT86RF215

import magiRF.interface.misc.BaseInterface.IQ_IF
import magiRF.interface.misc.LVDS.LVDS
import spinal.core._
import spinal.lib._

//object AT86TXState extends SpinalEnum {
//    val IDLE, I_SYNC, I_DATA, Q_SYNC, Q_DATA, ZERO = newElement()
//}
//
//
//case class AT86TX(width: Int) extends Component{
//    require(width == 13 || width == 14, "Width must be either 13 or 14")
//    val io = new Bundle{
//        val tx_clk = master(LVDS())
//        val tx_d = master(LVDS())
//
//        val iq_data = slave(IQ_IF(width bits))
//        val iq_sr = in(UInt(4 bits))
//    }
//    noIoPrefix()
//
//    import AT86TXState._
//    val at86_state = Reg(AT86TXState()) init(IDLE)
//
//    val shared_cnt = Reg(UInt(8 bits)) init(0)
//    val i_data_buf = Reg(UInt(14 bits))
//    val q_data_buf = Reg(UInt(14 bits))
//    val i_ready = Reg(Bool()) init(False)
//    val q_ready = Reg(Bool()) init(False)
//
//    val lvds_data = Reg(Bits(2 bits)) init(0)
//    val zero_cnt = Reg(UInt(4 bits)) init(0)
//
//    switch(at86_state){
//        is(IDLE){
//            when(io.iq_data.i.valid){
//                shared_cnt := shared_cnt + 1
//            }.otherwise{
//                shared_cnt := 0
//            }
//            when(shared_cnt === 32){
//                at86_state := I_SYNC
//            }
//            lvds_data := 0
//            zero_cnt := 0
//            i_ready := False
//            q_ready := False
//        }
//        is(I_SYNC){
//            shared_cnt := 0
//            zero_cnt := 0
//            i_ready := True
//            when(io.iq_data.i.valid){
//                i_data_buf := io.iq_data.i.payload
//            }.otherwise{
//                i_data_buf := 0
//            }
//            lvds_data := B"2b10"
//            at86_state := I_DATA
//        }
//        is(I_DATA){
//            i_ready := False
//            lvds_data := i_data_buf(13 downto 12)
//            i_data_buf := i_data_buf << 2
//            shared_cnt := shared_cnt + 2
//            when(shared_cnt === 12){
//                at86_state := Q_SYNC
//            }
//        }
//        is(Q_SYNC){
//            shared_cnt := 0
//            q_ready := True
//            when(io.iq_data.q.valid){
//                q_data_buf := io.iq_data.q.payload
//            }.otherwise{
//                q_data_buf := 0
//            }
//            lvds_data := B"2b01"
//            at86_state := Q_DATA
//        }
//        is(Q_DATA){
//            q_ready := False
//            lvds_data := q_data_buf(13 downto 12)
//            q_data_buf := q_data_buf << 2
//            when(shared_cnt === 12){
//                at86_state := ZERO
//            }.otherwise{
//                shared_cnt := shared_cnt + 2
//            }
//        }
//        is(ZERO){
//            when(zero_cnt === io.iq_sr){
//                at86_state := I_SYNC
//            }
//            zero_cnt := zero_cnt + 1
//        }
//    }
//
//
//}
