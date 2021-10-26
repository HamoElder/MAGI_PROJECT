package magiSOC.perips.InterruptCtrl

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory

case class InterruptCtrl(width: Int) extends Component{
    val io = new Bundle{
        val inputs = in Bits(width bits)
        val clears = in Bits(width bits)
        val masks = in Bits(width bits)
        val pendings = out Bits(width bits)
    }
    noIoPrefix()

    val pendings = Reg(io.inputs) init(0)

    pendings := (pendings & ~io.clears) | io.inputs

    io.pendings := pendings & io.masks

    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: Int): Area = new Area{
        io.clears := 0
        busCtrl.read(io.pendings, baseAddress + 0x00)
        busCtrl.write(io.clears, baseAddress + 0x04)
        busCtrl.driveAndRead(io.masks, baseAddress + 0x08) init(0)
    }

}
