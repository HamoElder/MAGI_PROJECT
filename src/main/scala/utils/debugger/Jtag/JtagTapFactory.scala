package utils.debugger.Jtag

import spinal.lib._

/**
 * define JTagTapFactory object
 */
object JtagTapFactory{

    // Generic JtagTap implementation
    // usage:
    // import spinal.lib.com.jtag.{Jtag, JtagTapFactory}
    // ...
    // val io    = new Bundle(
    //    val jtag     = slave(Jtag())
    // )
    //...
    // val debugtap = ClockDomain(io.jtag.tck, reset)(new Area{
    //    val tap = JtagTapFactory(io.jtag, 8)
    //    val idcodeArea = tap.idcode(B"x10001FFF")(1)
    //    val readArea = tap.read(B(0xAE, 8 bits))(2)
    //    val writeArea = tap.write(io.nLED, cleanUpdate=true)(3)
    // })
    def apply(jtag: Jtag, instructionWidth: Int): JtagTap = {
        new JtagTap(jtag, instructionWidth)
    }

}

