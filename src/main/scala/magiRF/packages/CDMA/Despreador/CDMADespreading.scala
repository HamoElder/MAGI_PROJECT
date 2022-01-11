package magiRF.packages.CDMA.Despreador

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.IQBundle.IQBundle
import utils.common.ClkCrossing.ClkCrossing


case class CDMADespreading(iqWidth: Int, codeWidth: Int, codeSize: Int, useDynamic: Boolean = true, codeTable: Seq[BigInt] = null) extends Component{

    require(useDynamic || (codeTable != null), "Either set the useDynamic or CodeTable.")
    def modDataType: SInt = SInt(iqWidth bits)
    def codeDataType: Bits = Bits(codeWidth bits)
    def addressWidth: Int = log2Up(codeSize)
    def cntDataType: UInt = UInt(log2Up(codeWidth) bits)

    val io = new Bundle{
        val w_en = if(useDynamic) in(Bool()) else null
        val w_addr = if(useDynamic) in(UInt(addressWidth bits)) else null
        val w_data = if(useDynamic) in(codeDataType) else null
        val clc = in(Bool())

        val cnt_limit = if(useDynamic) in(cntDataType) else null
        val mod_iq = slave(Stream(IQBundle(modDataType)))
        val base_sub_iqs = Vec(master(Flow(IQBundle(modDataType))), codeSize)
    }
    noIoPrefix()

    val code_map = if(codeTable != null){
        Mem(codeDataType, wordCount = codeSize) initBigInt(codeTable, allowNegative = false)
    }else {
        Mem(codeDataType, wordCount = codeSize)
    }

    for(idx <- 0 until codeSize){
        val cmp_unit = ComputeUnit(iqWidth, codeWidth, useDynamic)
        cmp_unit.io.code := code_map.readAsync(U(idx, addressWidth bits))
        cmp_unit.io.mod_iq << io.mod_iq.asFlow
        io.base_sub_iqs(idx) << cmp_unit.io.base_iq
        cmp_unit.io.clc := io.clc
        if(useDynamic){
            cmp_unit.io.cnt_limit := io.cnt_limit
        }
    }

    if(useDynamic){
        when(io.w_en){
            code_map(io.w_addr.resized) := io.w_data
        }
    }
    io.mod_iq.ready := !io.clc

    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area {
        val clc: Bool = cloneOf(io.clc)
        busCtrl.driveAndRead(clc, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "CDMA Clear Set.") init(True)
        io.clc := ClkCrossing(coreClockDomain, rfClockDomain, clc)
        if(useDynamic){
            val w_en = cloneOf(io.w_en)
            val w_addr = cloneOf(io.w_addr)
            val w_data = cloneOf(io.w_data)
            val cnt_limit = cloneOf(io.cnt_limit)
            busCtrl.drive(w_en, address = baseAddress + 0x00, bitOffset = 1,
                documentation = "CDMA Code Map Ram Write Enable.") init(False)
            busCtrl.drive(w_addr, address = baseAddress + 0x04, bitOffset = 0,
                documentation = "CDMA Code Map Ram Write Address Set.") init(0)
            busCtrl.drive(w_data, address = baseAddress + 0x08, bitOffset = 0,
                documentation = "CDMA Code Map Ram Write Data Set.") init(0)
            busCtrl.drive(cnt_limit, address = baseAddress + 0x0C, bitOffset = 0,
                documentation = "CDMA Code Map Counter Limit Upper Bound.")
            io.w_en := ClkCrossing(coreClockDomain, rfClockDomain, w_en)
            io.w_addr := ClkCrossing(coreClockDomain, rfClockDomain, w_addr)
            io.w_data := ClkCrossing(coreClockDomain, rfClockDomain, w_data)
            io.cnt_limit := ClkCrossing(coreClockDomain,  rfClockDomain, cnt_limit)
        }
    }

}

object CDMADespreadingBench{
    def main(args: Array[String]): Unit = {
        val walsh_8_order = Seq[BigInt](0xff, 0xaa, 0xcc, 0x99, 0xf0, 0xa5, 0xc3, 0x96)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/CDMA").generateSystemVerilog(new CDMADespreading(16, 8, 8,true, walsh_8_order)).printPruned()
    }
}
