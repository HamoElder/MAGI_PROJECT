package magiRF.packages.MIMO.Transmitter

import magiRF.packages.OAM.Spinor.ChaCompose
import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.IQBundle.IQBundle
import utils.common.ClkCrossing.FFSynchronizer

case class MIMOTransmitter(iqWidth: Int, eleNum: Int, streamNum: Int) extends Component {
    require(streamNum <= eleNum, "The num of stream must equal or less than the num of Channels(Antenna elements).")
    def iqDataType: SInt = SInt(iqWidth bits)
    def modDataWidth: Int = iqWidth + iqWidth
    def modDataType: SInt = SInt(modDataWidth bits)

    def memSize: Int = eleNum * streamNum
    def addressWidth: Int = log2Up(memSize)

    val io = new Bundle{
        val base_iqs = slave(Flow(Vec(IQBundle(iqDataType), streamNum)))
        val mod_iqs = master(Flow(Vec(IQBundle(modDataType), eleNum)))

        val w_sel = in(Bool())
        val w_en = in(Bool())
        val w_addr = in(UInt(addressWidth bits))
        val w_data = in(iqDataType)
    }
    noIoPrefix()

    val shift_i_map: Mem[SInt] = Mem(iqDataType, wordCount = memSize)
    val shift_q_map: Mem[SInt] = Mem(iqDataType, wordCount = memSize)

    when(io.w_en){
        when(io.w_sel){
            shift_i_map(io.w_addr) := io.w_data
        }.otherwise{
            shift_q_map(io.w_addr) := io.w_data
        }
    }

    val mod_sub_iqs_vec: Vec[IQBundle[SInt]] = Vec(IQBundle(modDataType), memSize)
    val mod_sub_valid_vec: Vec[Bool] = Vec(Bool(), memSize)

    for(stream <- 0 until streamNum){
        val unit_core = MIMOTransmitterUnit(iqWidth, eleNum)
        unit_core.io.base_iq.valid := io.base_iqs.valid
        unit_core.io.base_iq.payload := io.base_iqs.payload(stream)

        for(ele <- 0 until eleNum){
            val idx = stream * eleNum + ele
            unit_core.io.shift_i(ele) := shift_i_map(U(idx, addressWidth bits))
            unit_core.io.shift_q(ele) := shift_q_map(U(idx, addressWidth bits))

            mod_sub_iqs_vec(idx) := unit_core.io.mod_sub_iqs.payload(ele)
            mod_sub_valid_vec(idx) := unit_core.io.mod_sub_iqs.valid
        }

    }

    val mod_iq_valid_vec: Vec[Bool] = Vec(Bool(), eleNum)

    for(ele <- 0 until eleNum){
        val antenna_compose = ChaCompose(modDataWidth, streamNum)
        for(stream <- 0 until streamNum){
            antenna_compose.io.mod_sub_iqs(stream).payload := mod_sub_iqs_vec(stream* eleNum + ele)
            antenna_compose.io.mod_sub_iqs(stream).valid := mod_sub_valid_vec(stream* eleNum + ele)
        }
        io.mod_iqs.payload(ele) := antenna_compose.io.mod_iq.payload
        mod_iq_valid_vec(ele) := antenna_compose.io.mod_iq.valid
    }
    io.mod_iqs.valid := mod_iq_valid_vec.reduce(_&_)


    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area {
        val w_sel = cloneOf(io.w_sel)
        val w_en = cloneOf(io.w_en)
        val w_addr = cloneOf(io.w_addr)
        val w_data = cloneOf(io.w_data)
        busCtrl.driveAndRead(w_en, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "MIMO Transmitter Shift IQ Map Ram Write Enable.") init(False)
        busCtrl.driveAndRead(w_sel, address = baseAddress + 0x00, bitOffset = 1,
            documentation = "MIMO Transmitter Shift I Channel or Q Channel Map Select.") init(False)
        busCtrl.drive(w_addr, address = baseAddress + 0x04, bitOffset = 0,
            documentation = "MIMO Transmitter Shift IQ Map Ram Write Address Set.")
        busCtrl.drive(w_data, address = baseAddress + 0x08, bitOffset = 0,
            documentation = "MIMO Transmitter Shift IQ Map Ram Write Data Set.")

        io.w_en := FFSynchronizer(coreClockDomain, rfClockDomain, w_en)
        io.w_sel := FFSynchronizer(coreClockDomain, rfClockDomain, w_sel)
        io.w_addr := FFSynchronizer(coreClockDomain, rfClockDomain, w_addr)
        io.w_data := FFSynchronizer(coreClockDomain, rfClockDomain, w_data)
    }
}
object MIMOTransmitterBench{
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/MIMO").generateSystemVerilog(new MIMOTransmitter(12, 2, 2)).printPruned()
    }
}