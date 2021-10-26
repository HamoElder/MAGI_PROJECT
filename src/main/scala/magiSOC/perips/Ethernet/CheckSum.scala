package magiSOC.perips.Ethernet

import spinal.core._
import spinal.lib._

object CheckSumStates extends SpinalEnum{
    val IDLE, MAC, IP, TCP, UDP, HOLD, FINISH = newElement()
}

case class CheckSum(config: AxiStream4MacEthConfig) extends Component {
    val io = new Bundle{
        val streamIn = slave Stream(PhyPayload(config.phyConfig))
        val streamOut = master Stream(PhyPayload(config.phyConfig))
    }
    noIoPrefix()

    val dataFifo = StreamFifo(
        dataType = PhyPayload(config.phyConfig),
        depth = config.checkSumFifoDepth
    )

    val ipCheckSumFifo = StreamFifo(
        dataType = UInt(16 bits),
        depth = (config.perPkgNum / 64).toInt
    )

    val tcpCheckSumFifo = StreamFifo(
        dataType = UInt(16 bits),
        depth = (config.perPkgNum / 64).toInt
    )

    import CheckSumStates._

    val check_sum_states = Reg(CheckSumStates()) init(IDLE)

    val pkg_cursor =  Reg(UInt(log2Up(config.perPkgNum) bits)) init(0)
    val udp_length = Reg(UInt(log2Up(config.perPkgNum) bits)) init(0)

    // check sum value
    val ip_checksum = Reg(UInt(16 bits))

    switch(check_sum_states){
        is(IDLE){
            pkg_cursor := 0
            ip_checksum := 0
            when(io.streamIn.fire & ~io.streamIn.last){
                check_sum_states := MAC
            }
        }
        is(MAC){
            when(io.streamIn.fire){
                when(pkg_cursor === 2 && io.streamIn.data === 0x08004500){
                    pkg_cursor := 0
                    check_sum_states := IP
                    ip_checksum := io.streamIn.data.resizeLeft(16).asUInt + io.streamIn.data.resize(16).asUInt
                }.otherwise{
                    pkg_cursor := pkg_cursor + 1
                }
            }
        }
        is(IP){
            when(io.streamIn.fire){
                ip_checksum := io.streamIn.data.resizeLeft(16).asUInt + io.streamIn.data.resize(16).asUInt
                when(pkg_cursor === 1 && io.streamIn.data.resize(8) === 0x06){ // TCP
                    
                }.elsewhen(pkg_cursor === 1 && io.streamIn.data.resize(8) === 0x11){ // UDP

                }.otherwise{
                    pkg_cursor := pkg_cursor + 1
                }
            }
        }
        is(TCP){

        }
        is(UDP){

        }
        is(HOLD){
            when(io.streamIn.last){
                check_sum_states := IDLE
            }
        }
        is(FINISH){

        }
    }

}
