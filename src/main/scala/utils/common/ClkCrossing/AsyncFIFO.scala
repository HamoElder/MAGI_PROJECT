package utils.common.ClkCrossing

import spinal.core._
import spinal.lib._

object AsyncFIFO{
    def apply[T <: Data](dataType: HardType[T], depth: Int, pushClock: ClockDomain, popClock: ClockDomain) = new StreamFifoCC(dataType, depth, pushClock, popClock)
}

class AsyncFIFO[T <: Data](val dataType: HardType[T],
                              val depth: Int,
                              val pushClock: ClockDomain,
                              val popClock: ClockDomain,
                              val withPopBufferedReset : Boolean = true) extends Component {

    assert(isPow2(depth) & depth >= 2, "The depth of the StreamFifoCC must be a power of 2 and equal or bigger than 2")

    val io = new Bundle with StreamFifoInterface[T]{
        val push          = slave  Stream(dataType)
        val pop           = master Stream(dataType)
        val pushOccupancy = out UInt(log2Up(depth + 1) bits)
        val popOccupancy  = out UInt(log2Up(depth + 1) bits)
    }

    val ptrWidth: Int = log2Up(depth) + 1
    def isFull(a: Bits, b: Bits): Bool = a(ptrWidth - 1 downto ptrWidth - 2) === ~b(ptrWidth - 1 downto ptrWidth - 2) && a(ptrWidth - 3 downto 0) === b(ptrWidth - 3 downto 0)
    def isEmpty(a: Bits, b: Bits): Bool = a === b

    val ram = Mem(dataType, depth)

    val popToPushGray = Bits(ptrWidth bits)
    val pushToPopGray = Bits(ptrWidth bits)

    val pushCC = new ClockingArea(pushClock) {
        val pushPtr     = Reg(UInt(log2Up(2*depth) bits)) init(0)
        val pushPtrPlus = pushPtr + 1
        val pushPtrGray = RegNextWhen(toGray(pushPtrPlus), io.push.fire) init(0)
        val popPtrGray  = BufferCC(popToPushGray, B(0, ptrWidth bits))
        val full        = isFull(pushPtrGray, popPtrGray)

        io.push.ready := !full

        when(io.push.fire) {
            ram(pushPtr.resized) := io.push.payload
            pushPtr := pushPtrPlus
        }

        io.pushOccupancy := (pushPtr - fromGray(popPtrGray)).resized
    }

    val finalPopCd = popClock.withOptionalBufferedResetFrom(withPopBufferedReset)(pushClock)
    val popCC = new ClockingArea(finalPopCd) {
        val popPtr      = Reg(UInt(log2Up(2*depth) bits)) init(0)
        val popPtrPlus  = popPtr + 1
        val popPtrGray  = RegNextWhen(toGray(popPtrPlus), io.pop.fire) init(0)
        val pushPtrGray = BufferCC(pushToPopGray, B(0, ptrWidth bit))
        val empty       = isEmpty(popPtrGray, pushPtrGray)

        io.pop.valid   := !empty
        io.pop.payload := ram.readSync((io.pop.fire ? popPtrPlus | popPtr).resized, clockCrossing = true)

        when(io.pop.fire) {
            popPtr := popPtrPlus
        }

        io.popOccupancy := (fromGray(pushPtrGray) - popPtr).resized
    }

    pushToPopGray := pushCC.pushPtrGray
    popToPushGray := popCC.popPtrGray
}