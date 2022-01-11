package magiRF.packages.CDMA.Spreador

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.IQBundle.IQBundle
import utils.common.ClkCrossing.ClkCrossing


case class CDMASpreading(iqWidth: Int, codeWidth: Int, codeSize: Int, useDynamic:Boolean = true, codeTable: Seq[BigInt] = null) extends Component {
    require(useDynamic || (codeTable != null), "Either set the useDynamic or CodeTable must be Valued.")

    def modDataType: SInt = SInt(iqWidth bits)
    def codeDataType: Bits = Bits(codeWidth bits)
    def addressWidth: Int = log2Up(codeSize)
    def cntDataType: UInt = UInt(log2Up(codeWidth) bits)

    val io = new Bundle{
        val w_en = if(useDynamic) in(Bool()) else null
        val w_addr = if(useDynamic) in(UInt(addressWidth bits)) else null
        val w_data = if(useDynamic) in(codeDataType) else null
        val clc = in(Bool())

        val cnt_limit = if(useDynamic)  in(cntDataType) else null
        val base_iq = slave(Stream(Vec(IQBundle(modDataType), codeSize)))
        val mod_sub_iqs = Vec(master(Flow(IQBundle(modDataType))), codeSize)
    }
    noIoPrefix()

    val code_map = if(codeTable != null){
            Mem(codeDataType, wordCount = codeSize) initBigInt (codeTable, allowNegative = false)
        }else{
            Mem(codeDataType, wordCount = codeSize)
        }

    val cnt = Reg(cntDataType) init(0)
    val flow_iq_data_vec = Vec(Reg(IQBundle(modDataType)), codeSize)
    val flow_iq_valid = Reg(Bool()) init(False)

    for(idx <- 0 until codeSize){
        val cmp_unit = ComputeUnit(iqWidth)
        cmp_unit.io.code := RegNext(code_map.readAsync(cnt)(codeWidth - idx - 1))
        cmp_unit.io.base_iq.payload := flow_iq_data_vec(idx)
        cmp_unit.io.base_iq.valid := flow_iq_valid
        io.mod_sub_iqs(idx) << cmp_unit.io.mod_iq
    }

    if(useDynamic){
        when(io.clc){
            cnt := 0
        }.elsewhen(io.base_iq.fire || cnt =/= 0){
            cnt := (cnt === io.cnt_limit) ? U(0) | (cnt + 1)
        }

        when(io.w_en){
            code_map(io.w_addr.resized) := io.w_data
        }
    }
    else{
        when(io.base_iq.fire || cnt =/= 0){
            cnt := cnt + 1
        }
    }

    when(cnt === 0){
        (flow_iq_data_vec, io.base_iq.payload).zipped.foreach(_ := _)
        flow_iq_valid := io.base_iq.valid
    }

    io.base_iq.ready := (cnt === 0) && !io.clc

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

object CDMASpreadingBench{
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/CDMA").generateSystemVerilog(new CDMASpreading(16, 8, 8,true)).printPruned()
    }
}
