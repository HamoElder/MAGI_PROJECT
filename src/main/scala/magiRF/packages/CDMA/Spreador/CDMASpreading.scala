package magiRF.packages.CDMA.Spreador

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.IQBundle.IQBundle
import utils.common.ClkCrossing.ClkCrossing


case class CDMASpreading(iqWidth: Int, codeLength: Int, useDynamic:Boolean = true, codeTable: Seq[Bits] = null) extends Component {
    require(useDynamic || (codeTable != null), "Either set the useDynamic or CodeTable must be Valued.")

    def modDataType: SInt = SInt(iqWidth bits)
    def codeWidth: Int = codeLength
    def codeDataType: Bits = Bits(codeLength bits)
    def addressWidth: Int = log2Up(codeLength)
    def cntDataType: UInt = UInt(log2Up(codeLength) bits)

    val io = new Bundle{
        val w_en = if(useDynamic) in(Bool()) else null
        val w_addr = if(useDynamic) in(UInt(addressWidth bits)) else null
        val w_data = if(useDynamic) in(codeDataType) else null
        val clc = in(Bool())

        val cnt_limit = if(useDynamic)  in(cntDataType) else null
        val base_iq = slave(Flow(IQBundle(modDataType)))
        val mod_iq = Vec(master(Flow(IQBundle(modDataType))), codeLength)
    }
    noIoPrefix()

    val code_map = if(useDynamic) Mem(codeDataType, wordCount = codeLength) else Mem(codeDataType, initialContent = codeTable)
    val cnt = Reg(cntDataType) init(0)
    for(idx <- 0 until codeWidth){
        val cmp_unit = ComputeUnit(iqWidth)
        cmp_unit.io.code := code_map.readAsync(cnt)(idx)
        cmp_unit.io.base_iq << io.base_iq
        io.mod_iq(idx) << cmp_unit.io.mod_iq
    }
    if(useDynamic){
        when(io.clc){
            cnt := 0
        }.elsewhen(io.base_iq.fire){
            cnt := (cnt === io.cnt_limit) ? U(0) | (cnt + 1)
        }

        when(io.w_en){
            code_map(io.w_addr.resized) := io.w_data
        }
    }
    else{
        when(io.base_iq.fire){
            cnt := cnt + 1
        }
    }


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
                documentation = "CDMA Code Map Ram Write Enable.") init(false)
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

object CDMASpreadingBench{
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/CDMA").generateSystemVerilog(new CDMASpreading(16, 8, true)).printPruned()
    }
}

