package magiSOC.perips.Gpios

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import spinal.lib.io.TriStateArray

case class GpiosConfig(
                          width: Int,
                          var input : Seq[Int] = null,   //List of pin id which can be inputs (null mean all)
                          var output : Seq[Int]  = null, //List of pin id which can be outputs (null mean all)
                          interrupt : Seq[Int]  = Nil   //List of pin id which can be used as interrupt source
                      ){
    if(input == null) input = (0 until width)
    if(output == null) output = (0 until width)
}

case class Gpios(config: GpiosConfig) extends Component {
    val io = new Bundle{
        val gpios = master(TriStateArray(config.width bits))

        val gpios_write = in(Bits(config.width bits))
        val gpios_read = out(Bits(config.width bits))
        val gpios_writeEnable = in(Bits(config.width bits))


        val interrupt = out(Bits(config.width bits))
        val ir_high = in(Bits(config.width bits))
        val ir_low = in(Bits(config.width bits))
        val ir_rise = in(Bits(config.width bits))
        val ir_fall = in(Bits(config.width bits))
    }

    noIoPrefix()
    val syncronized = BufferCC(io.gpios.read)
    val last = RegNext(syncronized)

    for(idx <- 0 until config.width){
        if(config.input.contains(idx)) io.gpios_read(idx) := syncronized(idx)
        if(config.output.contains(idx)) io.gpios.write(idx) := io.gpios_write(idx) else io.gpios.write(idx) := False
        if(config.input.contains(idx) && config.output.contains(idx)) io.gpios.writeEnable(idx) := io.gpios_writeEnable(idx) else io.gpios.writeEnable(idx) := Bool(config.output.contains(idx))
    }

    val interrupt = new Area{

        val valid = ((io.ir_high & syncronized)
            | (io.ir_low & ~syncronized)
            | (io.ir_rise & (syncronized & ~last))
            | (io.ir_fall & (~syncronized & last)))

        for(idx <- 0 until config.width){
            if(config.interrupt.contains(idx)){
                io.interrupt(idx) := valid(idx)
            } else {
                io.interrupt(idx) := False
            }
        }
    }

    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt): Area = new Area {
        busCtrl.driveAndRead(io.gpios_writeEnable, address = baseAddress + 0x00, bitOffset = 0,
            documentation = s"Gpio Direction Select Register. (${config.width} bits)") init(0)
        busCtrl.driveAndRead(io.gpios_write, address = baseAddress + 0x04, bitOffset = 0,
            documentation = s"Gpio Output Value Register. (${config.width} bits)") init(0)
        busCtrl.read(io.gpios_read, address = baseAddress + 0x08, bitOffset = 0,
            documentation = s"Gpio Input Value Register. (${config.width} bits)")


        busCtrl.read(io.interrupt, address = baseAddress + 0x0C, bitOffset = 0,
            documentation = s"Gpio Interrupt Indicate Register. (${config.width} bits)")
        busCtrl.driveAndRead(io.ir_high, address = baseAddress + 0x10, bitOffset = 0,
            documentation = s"Gpio Interrupt High Level Detector Enable Register. (${config.width} bits)") init(0)
        busCtrl.driveAndRead(io.ir_low, address = baseAddress + 0x14, bitOffset = 0,
            documentation = s"Gpio Interrupt Low Level Detector Enable Register. (${config.width} bits)") init(0)
        busCtrl.driveAndRead(io.ir_rise, address = baseAddress + 0x18, bitOffset = 0,
            documentation = s"Gpio Interrupt Rise Edge Detector Enable Register. (${config.width} bits)") init(0)
        busCtrl.driveAndRead(io.ir_fall, address = baseAddress + 0x1C, bitOffset = 0,
            documentation = s"Gpio Interrupt Fall Edge Detector Enable Register. (${config.width} bits)") init(0)
    }
}

