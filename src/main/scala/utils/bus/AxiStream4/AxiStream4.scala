package utils.bus.AxiStream4

import spinal.core._
import spinal.lib._
//import spinal.lib.eda.bench.{AlteraStdTargets, Bench, Rtl, XilinxStdTargets}
//
//class AxiStream4Factory extends MSFactory{
//    def apply[T <: Data](hardType: HardType[T]): AxiStream4[T] = {
//        val ret = new AxiStream4(hardType)
//        postApply(ret)
//        ret
//    }
//
//    def apply[T <: Data](hardType: => T) : AxiStream4[T] = apply(HardType(hardType))
//}
//
//
//object AxiStream4 extends AxiStream4Factory
//
//
//class EventFactory extends MSFactory {
//    def apply = {
//        val ret = new AxiStream4(new NoData)
//        postApply(ret)
//        ret
//    }
//}
//
//trait AxiStream4Trait {
//      var useStrb    : Boolean = true
//      var useKeep    : Boolean = true
//      var useLast    : Boolean = true
//      var IDWidth   : Int = -1
//      var DestWidth : Int = -1
//      var UserWidth : Int = -1
//}
//
//
//class AxiStream4[T <: Data](val payloadType :  HardType[T]) extends Bundle with IMasterSlave with AxiStream4Trait with DataCarrier[T]{
//    val valid           = Bool
//    val ready           = Bool
//    val payload         = payloadType()
//
//    require((payloadType.getBitsWidth%8) == 0, "The width of the data payload is an integer number of bytes.")
//
//    val payload_strb    = if(useStrb) UInt((payloadType.getBitsWidth >> 3) bits) else null
//    val payload_keep    = if(useKeep) UInt((payloadType.getBitsWidth >> 3) bits) else null
//    val payload_last    = if(useLast) Bool else null
//
//    override def clone: AxiStream4[T] =  AxiStream4(payloadType)
//
//    override def asMaster(): Unit = {
//        out(valid)
//        in(ready)
//        out(payload)
//        outWithNull(payload_strb, payload_keep, payload_last)
//    }
//    def asDataStream = this.asInstanceOf[AxiStream4[Data]]
//
//    override def freeRun(): this.type = {
//        ready := True
//        this
//    }
//
//    def toFlow: Flow[T] = {
//        freeRun()
//        val ret = Flow(payloadType)
//        ret.valid := this.valid
//        ret.payload := this.payload
//        ret
//    }
//
//    def toFlowFire: Flow[T] = {
//        val ret = Flow(payloadType)
//        ret.valid := this.fire
//        ret.payload := this.payload
//        ret
//    }
//
//    def asFlow: Flow[T] = {
//        val ret = Flow(payloadType)
//        ret.valid := this.valid
//        ret.payload := this.payload
//        ret
//    }
//
//    def toStream = {
//        val ret = Stream(payloadType)
//        ret.valid := this.valid
//        ret.payload := this.payload
//        this.ready := ret.ready
//    }
//
////    def <<(that: AxiStream4[T]): AxiStream4[T] = connectFrom(that)
//
//    def isStall : Bool = valid && !ready
//
//    def isNew : Bool = valid && !(RegNext(isStall) init(False))
//
//    def connectFrom(that: AxiStream4[T]): AxiStream4[T] = {
//        this.valid := that.valid
//        that.ready := this.ready
//        this.payload := that.payload
//        if(useStrb)    payload_strb := that.payload_strb
//        if(useKeep)    payload_keep := that.payload_keep
//        if(useLast)    payload_last := that.payload_last
//        that
//    }
//
//    override def fire: Bool = ready & valid
//
//    override type RefOwnerType = this.type
//}
object AxiStream4{
    def apply(dataWidth : Int) = new AxiStream4(AxiStream4Config(
        dataWidth = dataWidth, useStrb = false, useKeep = false, useLast = false
    ))
}

case class AxiStream4Config(
                      dataWidth  : Int = 32,
                      useStrb    : Boolean = true,
                      useKeep    : Boolean = true,
                      useLast    : Boolean = true,
                      tIDWidth   : Int = -1,
                      tDestWidth : Int = -1,
                      tUserWidth : Int = -1
                      ) {
    require((dataWidth%8) == 0, "The width of the data payload is an integer number of bytes.")
    def bytePerWord: Int = dataWidth/8
    def strbWidth: Int = dataWidth/8
    def keepWidth: Int = dataWidth/8
    def useTID: Boolean = tIDWidth >= 0
    def useTDest: Boolean = tDestWidth >= 0
    def useTUser: Boolean = tUserWidth >= 0
}

case class AxiStream4T(config: AxiStream4Config) extends Bundle with IMasterSlave {
    val data = Bits(config.dataWidth bits)
    val strb = if(config.useStrb) Bits(config.strbWidth bits) else null
    val keep_ = if(config.useKeep) Bits(config.keepWidth bits) else null
    val last = if(config.useLast) Bool() else null
    val id = if(config.useTID) UInt(config.tIDWidth bits) else null
    val dest = if(config.useTDest) UInt(config.tDestWidth bits) else null
    val user = if(config.useTUser) Bits(config.tUserWidth bits) else null

    def setStrb() : Unit = strb := (1 << widthOf(strb))-1
    def setStrb(bytesLane : Bits) : Unit = strb := bytesLane

    def setKeep() : Unit = keep_ := (1 << widthOf(keep_))-1
    def setKeep(bytesLane : Bits) : Unit = keep_ := bytesLane

    def setLast() : Unit = last := True
    def resetLast(): Unit = last := False

    override def asMaster(): Unit = {
        out(data, strb, keep_, last, id, dest, user)
    }
}

case class AxiStream4(config : AxiStream4Config) extends Bundle with IMasterSlave{
    val t = Stream(AxiStream4T(config))

    def transmitData: Stream[AxiStream4T] = t

    def >>(that : AxiStream4): Unit = {
        assert(that.config == this.config)
        this.transmitData >> that.transmitData
    }

    def <<(that : AxiStream4) : Unit = that >> this

    def >> (that : Stream[Bits]) : Unit ={
        assert(that.getBitsWidth == this.config.dataWidth)
        that.valid := this.transmitData.valid
        that.payload := this.transmitData.data
        this.transmitData.ready := that.ready
    }

    def <<(that : Stream[Bits]): Unit = {
        assert(that.getBitsWidth == this.config.dataWidth)
        this.transmitData.valid := that.valid
        this.transmitData.data := that.payload
        that.ready := this.transmitData.ready
    }

    override def asMaster(): Unit = {
        master(t)
    }
}


object  AxiStream4SpecRenamer{
    def apply(that: AxiStream4): Unit ={
        def doIt(): Unit ={
            that.flatten.foreach((bt)=>{
                bt.setName(bt.getName().replace("_t", "t"))
                bt.setName(bt.getName().replace("_valid","valid"))
                bt.setName(bt.getName().replace("_ready","ready"))
                bt.setName(bt.getName().replace("keep_", "keep"))
                if(bt.getName().startsWith("io_")) bt.setName(bt.getName().replaceFirst("io_",""))
            })
        }

        if(Component.current == that.component)
            that.component.addPrePopTask(() => {doIt()})
        else
            doIt()
    }
}