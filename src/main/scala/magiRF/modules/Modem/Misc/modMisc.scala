package magiRF.modules.Modem.Misc

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

trait ModCodeTable{
    var mWidth  : Int
    var mValue  : Int
    var codeTableI: Array[BigInt]
    var codeTableQ: Array[BigInt]
    var codeTableIQ: Array[BigInt]
}

case class modUnitConfig(
                            modDataWidth       : Int,
                            tableWidth         : Int,
                            mSize              : Int      = 2,
                            genFuncI           : (Int, Int) => Array[BigInt] = null,
                            genFuncQ           : (Int, Int) => Array[BigInt] = null
                        ) extends ModCodeTable {
    assert(isPow2(mSize) & mSize >= 2, "The size of the M must be a power of 2 and equal or bigger than 4")
    assert(genFuncI != null || genFuncQ != null, "Either genFunc nor codeArray must be valuable(I CHANNEL).")
//    assert(genFuncQ != null || codeArrayQ != null, "Either genFunc nor codeArray must be valuable(Q CHANNEL).")

    def unitDataType: UInt = UInt(log2Up(mSize) bits)
    def modDataType: SInt = SInt(modDataWidth bits)
    def codeTableType: SInt = SInt(tableWidth bits)
    def peakValue: Int = (1 << (modDataWidth - 1)) - 1

    override var mWidth: Int = log2Up(mSize)
    override var mValue: Int = mSize

    override var codeTableI: Array[BigInt] = if(genFuncI == null) null else genFuncI(mValue, peakValue)
    override var codeTableQ: Array[BigInt] = if(genFuncQ == null) null else genFuncQ(mValue, peakValue)
    override var codeTableIQ: Array[BigInt] = if(codeTableI == null || codeTableQ == null) null else (codeTableI, codeTableQ).zipped.map((i, j) => (i << modDataWidth) + (j & ((1 << modDataWidth) - 1)))

}

trait DemodCodeTable{
    var mWidth  : Int
    var mValue  : Int
    var codeTableI: (Array[BigInt], Array[Int])
    var codeTableQ: (Array[BigInt], Array[Int])
//    var codeTableI:
//    var codeTableQ: Array[Int]
}

case class demodUnitConfig(
            unitDataWidth      : Int,
            modDataWidth       : Int,
            mSize              : Int      = 2,
            genFuncI           : (Int, Int) => (Array[BigInt], Array[Int]) = null,
            genFuncQ           : (Int, Int) => (Array[BigInt], Array[Int]) = null
                        ) extends DemodCodeTable{
    assert(isPow2(mSize) & mSize >= 2, "The size of the M must be a power of 2 and equal or bigger than 4")
    assert(genFuncI != null || genFuncQ != null, "Either genFunc nor codeArray must be valuable(I CHANNEL).")

    def unitDataType: UInt = UInt(unitDataWidth bits)
    def modDataType: SInt = SInt(modDataWidth bits)
    def peakValue: Int = (1 << (modDataWidth - 1)) - 1

    override var mWidth: Int = log2Up(mSize)
    override var mValue: Int = mSize
    override var codeTableI: (Array[BigInt], Array[Int]) = genFuncI(mValue, peakValue)
    override var codeTableQ: (Array[BigInt], Array[Int]) = if(genFuncQ == null) null else genFuncQ(mValue, peakValue)

}

case class modUnitInterface[T <: Data, T1 <: Data](unitType: HardType[T], modType: T1) extends Bundle with IMasterSlave{
    val unit_data = Flow(unitType)
    val mod_iq = Flow(IQBundle(modType))

    override def asMaster(): Unit = {
        slave(mod_iq)
        master(unit_data)
    }

    override type RefOwnerType = this.type
}
