package magiRF.modules.DSP.FFT

import spinal.core._
import spinal.lib._

trait complexTrait{
  val useGauss: Boolean = false
}


case class Complex(dataType: SFix) extends Bundle with IMasterSlave with complexTrait {
  val re = cloneOf(dataType)
  val im = cloneOf(dataType)

   def := (that: Complex): Unit ={
     this.re := that.re
     this.im := that.im
  }

  def +(that: Complex): Complex = {
    val adder = Complex(dataType)
    adder.re := this.re + that.re
    adder.im := this.im + that.im
    adder
  }

  def -(that: Complex): Complex = {
    val subtract = Complex(dataType)
    subtract.re := this.re - that.re
    subtract.im := this.im - that.im
    subtract
  }

  def unary_- : Complex = {
    val subtract = Complex(dataType)
    subtract.re := dataType.getZero - re
    subtract.im := dataType.getZero - im
    subtract
  }

   def conj(): Complex ={
    val trans = Complex(dataType)
     trans.re := this.re
     trans.im := dataType.getZero - this.im
     trans
  }

  def *(that: Complex): Complex = {
      val multer: Complex = Complex(dataType)
      if(this.useGauss){
        val k1 = that.re * (this.re + this.im)
        val k2 = this.re * (that.im - that.re)
        val k3 = this.im * (that.re + that.im)
        multer.re := (k1 - k3).truncated
        multer.im := (k1 + k2).truncated
      }else {
        multer.re := (this.re * that.re - this.im * that.im).truncated
        multer.im := (this.re * that.im + this.im * that.re).truncated
      }
    multer
  }

  def <<(that: Int): Complex = {
    val ret: Complex = Complex(dataType)
    ret.re := this.re << that
    ret.im := this.im << that
    ret
  }

  def >>(that: Int):Complex = {
    val ret: Complex = Complex(dataType)
    ret.re := (this.re >> that).truncated
    ret.im := (this.im >> that).truncated
    ret
  }

  def <<|(that: Int):Complex = {
    val ret: Complex = Complex(dataType)
    ret.re := this.re <<| that
    ret.im := this.im <<| that
    ret
  }

  def >>|(that: Int):Complex = {
    val ret: Complex = Complex(dataType)
    ret.re := (this.re >>| that).truncated
    ret.im := (this.im >>| that).truncated
    ret
  }

  override def asMaster(): Unit = {
    out(re, im)
  }

  override type RefOwnerType = this.type
}

case class R2ButterflyIO(dataType: SFix) extends Bundle with IMasterSlave{
  val in1: Complex = Complex(dataType)
  val in2: Complex = Complex(dataType)
  val wn: Complex = Complex(dataType)
  val out1: Complex = Complex(dataType)
  val out2: Complex = Complex(dataType)

  override def asMaster(): Unit = {
    master(out1, out2)
    slave(in1, in2, wn)
  }

  override type RefOwnerType = this.type
}

case class R2Butterfly(dataType: SFix) extends Component {
  val io = master(R2ButterflyIO(dataType))
  noIoPrefix()

  val add_result: Complex = io.in1 + io.in2
  val sub_result: Complex = io.in1 - io.in2
  val mul_result: Complex = sub_result * io.wn

  io.out1 := add_result
  io.out2 := mul_result
}

case class R4ButterflyIO(dataType: SFix) extends Bundle with IMasterSlave{
  val in1 = Complex(dataType)
  val in2 = Complex(dataType)
  val in3 = Complex(dataType)
  val in4 = Complex(dataType)
  val wn2 = Complex(dataType)
  val wn3 = Complex(dataType)
  val wn4 = Complex(dataType)
  val out1 = Complex(dataType)
  val out2 = Complex(dataType)
  val out3 = Complex(dataType)
  val out4 = Complex(dataType)

  override def asMaster(): Unit = {
    master(out1, out2, out3, out4)
    slave(in1, in2, in3, in4, wn2, wn3, wn4)
  }

  override type RefOwnerType = this.type
}

case class ButterflyAdd(dataType: SFix) extends Component {
  val io = new Bundle{
    val in1 = in(new Complex(dataType))
    val in2 = in(new Complex(dataType))
    val in3 = in(new Complex(dataType))
    val in4 = in(new Complex(dataType))
    val out1 = out(new Complex(dataType))
    val out2 = out(new Complex(dataType))
    val out3 = out(new Complex(dataType))
    val out4 = out(new Complex(dataType))
  }
  val add1 = (io.in1 + io.in3)
  val add2 = (io.in2 + io.in4)
  val sub1 = (io.in1 - io.in3)
  val sub2 = (io.in2 - io.in4)
  val add3 = (add1 + add2)
  val sub3 = (add1 - add2)
  val tran = (sub2.conj())
  val add4 = (sub1 + tran)
  val sub4 = (sub1 - tran)
  io.out1 := add3
  io.out2 := sub3
  io.out3 := add4
  io.out4 := sub4
}
object ButterflyAdd {
  def apply(in1: Complex, in2: Complex, in3: Complex, in4: Complex): (Complex, Complex, Complex, Complex) = {
    val inst = ButterflyAdd(in1.dataType)
    inst.io.in1 := in1
    inst.io.in2 := in2
    inst.io.in3 := in3
    inst.io.in4 := in4
    (inst.io.out1, inst.io.out2, inst.io.out3, inst.io.out4)
  }
}

case class R4Butterfly(dataType: SFix) extends Component {
  val io = master(R4ButterflyIO(dataType))
  noIoPrefix()

  val add1 = (io.in1 + io.in3)
  val add2 = (io.in2 + io.in4)
  val sub1 = (io.in1 - io.in3)
  val sub2 = (io.in2 - io.in4)
  val add3 = (add1 + add2)
  val sub3 = (add1 - add2)
  val tran = sub2.conj()
  val add4 = (sub1 + tran)
  val sub4 = (sub1 - tran)
  val mul2 = (sub3 * io.wn2)
  val mul3 = (add4 * io.wn3)
  val mul4 = (sub4 * io.wn4)
  io.out1 := add3
  io.out2 := mul2
  io.out3 := mul3
  io.out4 := mul4

  io.out1 := add3
  io.out2 := sub3
  io.out3 := add4
  io.out4 := sub4
}

object Butterfly{
  def apply(in1: Complex, in2: Complex, wn: Complex): (Complex, Complex) = {
    val bf_op = R2Butterfly(in1.dataType)
    bf_op.io.in1 := in1
    bf_op.io.in2 := in2
    bf_op.io.wn := wn
    (bf_op.io.out1, bf_op.io.out2)
  }

  def apply(in1: Complex, in2: Complex, in3: Complex, in4: Complex, wn2: Complex, wn3: Complex, wn4: Complex):
  (Complex, Complex, Complex, Complex) = {
    val bf_op = R4Butterfly(in1.dataType)
    bf_op.io.in1 := in1
    bf_op.io.in2 := in2
    bf_op.io.in3 := in3
    bf_op.io.in4 := in4
    bf_op.io.wn2 := wn2
    bf_op.io.wn3 := wn3
    bf_op.io.wn4 := wn4
    (bf_op.io.out1, bf_op.io.out2, bf_op.io.out3, bf_op.io.out4)
  }
}

case class R2Switch(dataType: SFix) extends Component{
  val io = new Bundle{
    val in1 = slave(Complex(dataType))
    val in2 = slave(Complex(dataType))
    val sel = in Bool()
    val out1 = master(Complex(dataType))
    val out2 = master(Complex(dataType))
  }
  noIoPrefix()

  io.out1 := Mux(io.sel, io.in2, io.in1)
  io.out2 := Mux(io.sel, io.in1, io.in2)
}

case class R4Switch(dataType: SFix) extends Component{
  val io = new Bundle{
    val in1 = slave(Complex(dataType))
    val in2 = slave(Complex(dataType))
    val in3 = slave(Complex(dataType))
    val in4 = slave(Complex(dataType))
    val sel0 = in Bool()
    val sel1 = in Bool()
    val out1 = master(Complex(dataType))
    val out2 = master(Complex(dataType))
    val out3 = master(Complex(dataType))
    val out4 = master(Complex(dataType))
  }
  noIoPrefix()
  io.out1 := io.in1
  io.out2 := io.in1
  io.out3 := io.in1
  io.out4 := io.in1
  when(!io.sel1 && !io.sel0) {
    io.out1 := io.in1
    io.out2 := io.in4
    io.out3 := io.in3
    io.out4 := io.in2
  }.elsewhen(!io.sel1 && io.sel0){
    io.out1 := io.in2
    io.out2 := io.in1
    io.out3 := io.in4
    io.out4 := io.in3
  }.elsewhen(io.sel1 && !io.sel0){
    io.out1 := io.in3
    io.out2 := io.in2
    io.out3 := io.in1
    io.out4 := io.in4
  }.elsewhen(io.sel1 && io.sel0){
    io.out1 := io.in4
    io.out2 := io.in3
    io.out3 := io.in2
    io.out4 := io.in1
  }
}

object Switch{
  def apply(in1: Complex, in2: Complex, sel: Bool): (Complex, Complex) ={
    val switcher = R2Switch(in1.dataType)
    switcher.io.in1 := in1
    switcher.io.in2 := in2
    switcher.io.sel := sel
    (switcher.io.out1, switcher.io.out2)
  }

  def apply(in1: Complex, in2: Complex, in3:Complex, in4:Complex, sel0: Bool, sel1: Bool): (Complex, Complex, Complex, Complex) ={
    val switcher = R4Switch(in1.dataType)
    switcher.io.in1 := in1
    switcher.io.in2 := in2
    switcher.io.in3 := in3
    switcher.io.in4 := in4
    switcher.io.sel0 := sel0
    switcher.io.sel1 := sel1
    (switcher.io.out1, switcher.io.out2, switcher.io.out3, switcher.io.out4)
  }
}

object ButterflyBench{
  def main(args: Array[String]): Unit ={
    SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
      targetDirectory = "rtl").generateSystemVerilog(new R2Butterfly(SFix(8 exp , -2 exp))).printPruned().printUnused()
  }
}