package magiRF.modules.Modem.Misc

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.common.ClkCrossing.FFSynchronizer

case class dataCombinationConfig(
                                    baseDataWidth      : Int
                                ) {
    def baseDataType: UInt = UInt(baseDataWidth bits)
    def unitDataType: UInt = UInt(baseDataWidth bits)
    def cntType: UInt = UInt(cntWidth bits)

    def cntWidth: Int = log2Up(baseDataWidth)
    def cntInit: Int = (1 << cntWidth) - baseDataWidth
}


case class dataCombination(config: dataCombinationConfig) extends Component{
    val io = new Bundle{
        val unit_data = slave(Flow(Fragment(config.unitDataType)))
        val base_data = master(Flow(Fragment(config.baseDataType)))

        val enable = in Bool()
        val cnt_step = in(config.cntType)
        val cnt_limit = in(config.cntType)
    }

    noIoPrefix()

    val base_cnt = Reg(config.cntType) init(0)

    val unit_data_buffer = RegNext(io.unit_data.fragment) init(0)
    val unit_data_valid = RegNext(io.unit_data.valid) init(False)
    val unit_data_last = RegNext(io.unit_data.last) init(False)

    val base_data_buffer = Reg(config.baseDataType) init(0)
    val base_data_valid = Reg(Bool) init(False)
    val base_data_last = Reg(Bool()) init(False)

    when(~io.enable){
        base_cnt := 0
        base_data_valid := False
        base_data_last := False
    }.elsewhen(unit_data_valid){
        base_data_valid := (base_cnt === io.cnt_limit)
        base_data_last := (base_cnt === io.cnt_limit) && unit_data_last
        base_cnt := (base_cnt === io.cnt_limit) ? U(0) | (base_cnt + io.cnt_step)
        base_data_buffer := ((unit_data_buffer ## base_data_buffer) >> io.cnt_step).asUInt.resized
//        base_data_buffer := ((base_data_buffer >> io.cnt_step) | (unit_data_buffer.asBits.resizeLeft())).resized
    }.elsewhen(io.base_data.fire){
        base_cnt := 0
        base_data_valid := False
    }
//    .otherwise{
//        base_data_valid := (base_cnt === io.cnt_limit)
//        base_cnt := (base_cnt === io.cnt_limit) ? U(0) | (base_cnt + io.cnt_step)
//        base_data_buffer := (base_data_buffer << io.cnt_step).resized
//    }

    io.base_data.fragment := base_data_buffer
    io.base_data.valid := base_data_valid
    io.base_data.last := base_data_last

    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area{
        val enable = cloneOf(io.enable)
        val cnt_step = cloneOf(io.cnt_step)
        val cnt_limit = cloneOf(io.cnt_limit)

        busCtrl.driveAndRead(enable, address = baseAddress+ 0x00, bitOffset = 0,
            documentation = "Data Combination Module Enable.") init(False)
        busCtrl.driveAndRead(cnt_step, address = baseAddress + 0x04, bitOffset = 0,
            documentation = "Data Combination Module Counter Step.") init(0)
        busCtrl.driveAndRead(cnt_limit, address = baseAddress + 0x08, bitOffset = 0,
            documentation = "Data Combination Module Counter Max Value") init(0)

        io.enable := FFSynchronizer(coreClockDomain, rfClockDomain, enable)
        io.cnt_step := FFSynchronizer(coreClockDomain, rfClockDomain, cnt_step)
        io.cnt_limit := FFSynchronizer(coreClockDomain, rfClockDomain, cnt_limit)
    }

}