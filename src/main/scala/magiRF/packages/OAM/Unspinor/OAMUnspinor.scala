package magiRF.packages.OAM.Unspinor

import spinal.lib._
import spinal.core._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.IQBundle.IQBundle
import utils.common.ClkCrossing.ClkCrossing

case class OAMUnspinor(iqWidth: Int, eleNum: Int, modalNum: Int) extends Component {
    require(modalNum <= eleNum, "The num of Modal must equal or less than the num of Channels(Antenna elements).")
    def iqDataType: SInt = SInt(iqWidth bits)
    def transDataWidth: Int = iqWidth + iqWidth
    def transDataType: SInt = SInt(transDataWidth bits)

    def memSize: Int = eleNum * modalNum
    def addressWidth: Int = log2Up(memSize)
    val io = new Bundle{
        val mod_iq = slave(Stream(IQBundle(iqDataType)))
        val base_sub_iqs = master(Flow(Vec(IQBundle(transDataType), modalNum)))

        val w_sel = in(Bool())
        val w_en = in(Bool())
        val w_addr = in(UInt(addressWidth bits))
        val w_data = in(iqDataType)
    }
    noIoPrefix()

    val shift_i_map = Vec(Reg(iqDataType), memSize)
    val shift_q_map = Vec(Reg(iqDataType), memSize)
    when(io.w_en){
        when(io.w_sel){
            shift_i_map(io.w_addr) := io.w_data
        }.otherwise{
            shift_q_map(io.w_addr) := io.w_data
        }
    }

    val base_sub_valid_vec = Vec(Bool(), modalNum)

    for(mod <- 0 until modalNum){
        val unspin_core = OAMUnspin(iqWidth, eleNum)
        unspin_core.io.mod_iq << io.mod_iq.asFlow
        io.base_sub_iqs.payload(mod) := unspin_core.io.base_sub_iq.payload
        base_sub_valid_vec(mod) := unspin_core.io.base_sub_iq.valid
        for(ele <- 0 until eleNum){
            val idx = mod*eleNum+ ele
            unspin_core.io.shift_i(ele) := shift_i_map(U(idx, addressWidth bits))
            unspin_core.io.shift_q(ele) := shift_q_map(U(idx, addressWidth bits))
        }
    }
    io.base_sub_iqs.valid := base_sub_valid_vec.reduce(_&_)
    io.mod_iq.ready := !io.w_en

    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area {
        val w_sel = cloneOf(io.w_sel)
        val w_en = cloneOf(io.w_en)
        val w_addr = cloneOf(io.w_addr)
        val w_data = cloneOf(io.w_data)
        busCtrl.driveAndRead(w_en, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "OAM Shift IQ Map Ram Write Enable.") init(False)
        busCtrl.driveAndRead(w_sel, address = baseAddress + 0x00, bitOffset = 1,
            documentation = "OAM Shift I Channel or Q Channel Map Select.") init(False)
        busCtrl.drive(w_addr, address = baseAddress + 0x04, bitOffset = 0,
            documentation = "OAM Shift IQ Map Ram Write Address Set.")
        busCtrl.drive(w_data, address = baseAddress + 0x08, bitOffset = 0,
            documentation = "OAM Shift IQ Map Ram Write Data Set.")

        io.w_en := ClkCrossing(coreClockDomain, rfClockDomain, w_en)
        io.w_sel := ClkCrossing(coreClockDomain, rfClockDomain, w_sel)
        io.w_addr := ClkCrossing(coreClockDomain, rfClockDomain, w_addr)
        io.w_data := ClkCrossing(coreClockDomain, rfClockDomain, w_data)
    }
}

object OAMUnspinorBench{
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/OAM").generateSystemVerilog(new OAMUnspinor(16, 8, 5)).printPruned()
    }
}
