package magiSOC.perips.Timer

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory

case class timerConfig(
                          dividerAWidth    : Int = 4,
                          dividerBWidth    : Int = 16,
                          filterWidth      : Int = 4,
                          timerWidth       : Int = 16,
                          useInputCapture  : Boolean = false,
                          useOutputCompare : Boolean = false
                      ){
}

case class preClockDivider(width: Int) extends Component{
    val io = new Bundle{
        val enable = in Bool()
        val limit = in UInt(width bits)

        val step = in Bool()
        val full = out Bool()
    }
    noIoPrefix()
    val divider_counter = Reg(UInt(width bits))
    when(io.full || (~io.enable)) {
        divider_counter := 0
    }.otherwise {
        divider_counter := divider_counter + io.step.asUInt.resized
    }

    io.full := io.enable ? (divider_counter === io.limit) | False
}

case class inputCapture(width: Int, filterWidth: Int) extends Component{
    val io = new Bundle{
        val enable = in Bool()
        val ic_a = in Bool()
        val ic_b = in Bool()
        val timer_value = in UInt(width bits)

        val filter_a = in UInt(filterWidth bits)
        val filter_b = in UInt(filterWidth bits)

        val capture_val_a = out UInt(width bits)
        val capture_val_b = out UInt(width bits)
    }
    noIoPrefix()
    val ic_a_seq = Reg(UInt(filterWidth bits))
    val ic_b_seq = Reg(UInt(filterWidth bits))
    val cap_val_a = Reg(UInt(width bits))
    val cap_val_b = Reg(UInt(width bits))
    when(io.enable){
        for(idx <- 1 until filterWidth){
            ic_a_seq(idx) := ic_a_seq(idx - 1)
            ic_b_seq(idx) := ic_b_seq(idx - 1)
        }
        ic_a_seq(0) := io.ic_a
        ic_b_seq(0) := io.ic_b
    }

    when(ic_a_seq === io.filter_a){
        cap_val_a := io.timer_value
    }

    when(ic_b_seq === io.filter_b){
        cap_val_b := io.timer_value
    }

    io.capture_val_a := cap_val_a
    io.capture_val_b := cap_val_b
}

case class outputCompare(width: Int) extends Component{
    val io = new Bundle{
        val enable = in Bool()
        val oc = out Bool()
        val oc_n = out Bool()

        val timer_value = in UInt(width bits)
        val compare_val = in UInt(width bits)
    }
    noIoPrefix()
    when(io.enable){
        io.oc := io.timer_value < io.compare_val
    }.otherwise{
        io.oc := False
    }
    io.oc_n := ~io.oc
}

case class Timer(config : timerConfig) extends Component {
    val io = new Bundle{
        val enable = in Bool()
        val period = in UInt(config.timerWidth bits)
        val reload_val = in UInt(config.timerWidth bits)

        val divider_A_limit = in UInt(config.dividerAWidth bits)
        val divider_B_limit = in UInt(config.dividerBWidth bits)

        val interrupt_en = in Bool()
        val interrupt_polarity = in Bool()

        val interrupt = out Bool()
        val interrupt_clc = in Bool()
        val value = out UInt(config.timerWidth bits)

        val ic_en = config.useInputCapture.generate(in(Bool()))
        val ic_a = config.useInputCapture.generate(in(Bool()))
        val ic_b = config.useInputCapture.generate(in(Bool()))
        val ic_filter_a = config.useInputCapture.generate(in UInt(config.filterWidth bits))
        val ic_filter_b = config.useInputCapture.generate(in UInt(config.filterWidth bits))
        val ic_capture_a = config.useInputCapture.generate(out UInt(config.timerWidth bits))
        val ic_capture_b = config.useInputCapture.generate(out UInt(config.timerWidth bits))

        val oc_en = config.useOutputCompare.generate(in(Bool()))
        val oc = config.useOutputCompare.generate(out(Bool()))
        val oc_n = config.useOutputCompare.generate(out(Bool()))
        val oc_compare_val = config.useOutputCompare.generate(in UInt(config.timerWidth bits))
    }
    noIoPrefix()
    /**
     * Prescalers modules and connections
     */
    val clock_divider_A = preClockDivider(config.dividerAWidth)
    clock_divider_A.io.enable := io.enable
    clock_divider_A.io.limit := io.divider_A_limit
    clock_divider_A.io.step := True

    val clock_divider_B = preClockDivider(config.dividerBWidth)
    clock_divider_B.io.enable := io.enable
    clock_divider_B.io.limit := io.divider_B_limit
    clock_divider_B.io.step := clock_divider_A.io.full
    /**
     * Local hardware logic
     */
    val timer_counter = Reg(UInt(config.timerWidth bits))
    val limit = io.enable ? (timer_counter === io.period) | False
    when(io.interrupt_en){
        when(io.interrupt_clc || (~io.enable)) {
            timer_counter := io.reload_val
        }.elsewhen(~limit) {
            timer_counter := timer_counter + clock_divider_B.io.full.asUInt.resized
        }
    }.otherwise{
        when(limit || (~io.enable)) {
            timer_counter := io.reload_val
        }.otherwise {
            timer_counter := timer_counter + clock_divider_B.io.full.asUInt.resized
        }
    }


    when(io.interrupt_en) {
        io.interrupt := limit ? io.interrupt_polarity | ~io.interrupt_polarity
    }.otherwise {
        io.interrupt := ~io.interrupt_polarity
    }
    io.value := timer_counter

    /**
     * Input Capture Module
     */
    if(config.useInputCapture){
        val ic_module = inputCapture(config.timerWidth, config.filterWidth)
        ic_module.io.enable := io.ic_en
        ic_module.io.ic_a := io.ic_a
        ic_module.io.ic_b := io.ic_b
        ic_module.io.timer_value := timer_counter

        ic_module.io.filter_a := io.ic_filter_a
        ic_module.io.filter_b := io.ic_filter_b

        io.ic_capture_a := ic_module.io.capture_val_a
        io.ic_capture_b := ic_module.io.capture_val_b
    }

    /**
     * Output Compare Module
     */
    if(config.useOutputCompare){
        val oc_module = outputCompare(config.timerWidth)
        oc_module.io.enable := io.oc_en
        oc_module.io.timer_value := timer_counter
        oc_module.io.compare_val := io.oc_compare_val

        io.oc := oc_module.io.oc
        io.oc_n := oc_module.io.oc_n
    }

    def driveFrom(busCtrl : BusSlaveFactory,baseAddress : BigInt) = new Area {
        busCtrl.driveAndRead(io.enable, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "Timer Enable (1 bits)") init(False)
        busCtrl.driveAndRead(io.interrupt_en, address = baseAddress + 0x00, bitOffset = 1,
            documentation = "Timer Interrupt Enable (1 bits)") init(False)
        busCtrl.driveAndRead(io.interrupt_polarity, address = baseAddress + 0X00, bitOffset = 2,
            documentation = "Timer Interrupt Polarity (1 bits)") init(True)

        busCtrl.drive(io.period, address = baseAddress + 0X04, bitOffset = 0,
            documentation = s"Timer Counter Limit Value (${config.timerWidth} bits)") init(0)
        busCtrl.drive(io.reload_val, address = baseAddress + 0X08, bitOffset = 0,
            documentation = s"Timer Auto Reload Value (${config.timerWidth} bits)") init(0)
        busCtrl.drive(io.divider_A_limit, address = baseAddress + 0X0C, bitOffset = 0,
            documentation = s"Timer PreScaler Divider A Limit Value (${config.dividerAWidth} bits)") init(0)
        busCtrl.drive(io.divider_B_limit, address = baseAddress + 0X10, bitOffset = 0,
            documentation = s"Timer PreScaler Divider B Limit Value (${config.dividerBWidth} bits)") init(0)
        busCtrl.read(io.value, address = baseAddress + 0X14, bitOffset = 0,
            documentation = s"Timer Counter Value (${config.timerWidth} bits)")
        busCtrl.drive(io.interrupt_clc, address = baseAddress + 0X18, bitOffset = 0,
            documentation = "Timer Interrupt Clear (1 bits)") init(False)

        if(config.useInputCapture){
            busCtrl.driveAndRead(io.ic_en, address = baseAddress + 0x00, bitOffset = 3,
                documentation = "Input Capture Module Enable (1 bits)") init(False)
            busCtrl.driveAndRead(io.ic_filter_a, address = baseAddress + 0X1C, bitOffset = 0,
                documentation = s"Input Capture Module Filter A Value (${config.filterWidth} bits)") init(0)
            busCtrl.driveAndRead(io.ic_filter_b, address = baseAddress + 0X20, bitOffset = 0,
                documentation = s"Input Capture Module Filter B Value (${config.filterWidth} bits)") init(0)
            busCtrl.read(io.ic_capture_a, address = baseAddress + 0X24, bitOffset = 0,
                documentation = s"Input Capture Module Channel A Value (${config.timerWidth} bits)")
            busCtrl.read(io.ic_capture_b, address = baseAddress + 0X28, bitOffset = 0,
                documentation = s"Input Capture Module Channel B Value (${config.timerWidth} bits)")
        }

        if(config.useOutputCompare){
            busCtrl.driveAndRead(io.oc_en, address = baseAddress + 0x00, bitOffset = 4,
                documentation = "Output Compare Module Enable (1 bits)") init(False)
            busCtrl.drive(io.oc_compare_val, address = baseAddress + 0X2C, bitOffset = 0,
                documentation = s"Output Compare Module Value (${config.timerWidth} bits)") init(0)
        }
    }
}
