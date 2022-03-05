package utils.common.CRC

import spinal.core._
import spinal.lib._

case class Crc(kind : CrcKind, dataWidth : Int) extends Component{
    val io = new Bundle {
        val flush = in Bool()
        val input = slave Flow(Bits(dataWidth bits))
        val result = out Bits(kind.polynomialWidth bits)
        val resultNext = out Bits(kind.polynomialWidth bits)
    }
    noIoPrefix()

    val state = Reg(Bits(kind.polynomialWidth bits)) init(kind.initValue)

    var acc = state
    for(i <- if(kind.inputReflected) 0 to dataWidth-1 else dataWidth-1 downto 0){
        acc \= ((acc |<< 1) ^ ((io.input.payload(i) ^ acc.msb) ? B(kind.polynomial, kind.polynomialWidth bits) | B(0, kind.polynomialWidth bits)))
    }

    when(io.flush){
        state := kind.initValue
    }.elsewhen(io.input.fire){
        state := acc
    }

    val stateXor = state ^ kind.finalXor
    val accXor = acc ^ kind.finalXor
    io.result := (if(kind.outputReflected) stateXor.asBools.reverse.asBits() else stateXor)
    io.resultNext := (if(kind.outputReflected) accXor.asBools.reverse.asBits() else accXor)
}

case class CrcKind(polynomial      : BigInt,
                   polynomialWidth : Int,
                   initValue       : BigInt,
                   inputReflected  : Boolean,
                   outputReflected : Boolean,
                   finalXor        : BigInt)

object CrcKind{
    val Crc32 =  new CrcKind(
        polynomial = BigInt("04C11DB7", 16),
        polynomialWidth = 32,
        initValue = BigInt("FFFFFFFF", 16),
        inputReflected = true,
        outputReflected = true,
        finalXor = BigInt("FFFFFFFF", 16)
    )
    val usb = new {
        val crc5 = new CrcKind(
            polynomial = BigInt("5", 16),
            polynomialWidth = 5,
            initValue = BigInt("1F", 16),
            inputReflected = true,
            outputReflected = true,
            finalXor = BigInt("1F", 16)
        )
        val crc16 = new CrcKind(
            polynomial = BigInt("8005", 16),
            polynomialWidth = 16,
            initValue = BigInt("FFFF", 16),
            inputReflected = true,
            outputReflected = true,
            finalXor = BigInt("FFFF", 16)
        )
        val crc5Check = new CrcKind(
            polynomial = BigInt("5", 16),
            polynomialWidth = 5,
            initValue = BigInt("1F", 16),
            inputReflected = true,
            outputReflected = false,
            finalXor = BigInt("00", 16)
        )
        val crc16Check = new CrcKind(
            polynomial = BigInt("8005", 16),
            polynomialWidth = 16,
            initValue = BigInt("FFFF", 16),
            inputReflected = true,
            outputReflected = false,
            finalXor = BigInt("0000", 16)
        )
    }
    val itu = new{
        val crc4 = new CrcKind(
            polynomial = BigInt("03", 16),
            polynomialWidth = 4,
            initValue = BigInt("00", 16),
            inputReflected = true,
            outputReflected = true,
            finalXor = BigInt("00", 16)
        )
        val crc5 = new CrcKind(
            polynomial = BigInt("15", 16),
            polynomialWidth = 5,
            initValue = BigInt("00", 16),
            inputReflected = true,
            outputReflected = true,
            finalXor = BigInt("00", 16)
        )
        val crc6 = new CrcKind(
            polynomial = BigInt("03", 16),
            polynomialWidth = 6,
            initValue = BigInt("00", 16),
            inputReflected = true,
            outputReflected = true,
            finalXor = BigInt("00", 16)
        )
        val crc8 = new CrcKind(
            polynomial = BigInt("07", 16),
            polynomialWidth = 8,
            initValue = BigInt("00", 16),
            inputReflected = false,
            outputReflected = false,
            finalXor = BigInt("55", 16)
        )
    }
}
