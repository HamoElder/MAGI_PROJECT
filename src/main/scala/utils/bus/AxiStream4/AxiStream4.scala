package utils.bus.AxiStream4

import spinal.core._
import spinal.lib._


case class AxiStream4Config(
                           dataWidth : Int,
                           idWidth   : Int = -1,
                           userWidth : Int = -1,
                           useID     : Boolean = true,
                           useStrb   : Boolean = true,
                           useKeep   : Boolean = true,
                           useLast   : Boolean = true
                           ){
    if(useID)
        require(idWidth >= 0, "You need to set idWidth")

    def useUser: Boolean = userWidth >= 0

    def dataType: Bits = Bits(dataWidth bits)
    def idType: UInt = UInt(idWidth bits)
    def bytePerWord: Int = dataWidth / 8
    def symbolRange: Seq[Int] = log2Up(bytePerWord) - 1 downto 0
    def strbType: Bits = Bits(bytePerWord bits)
    def keepType: Bits = Bits(bytePerWord bits)
}

case class AxiStream4X(config: AxiStream4Config) extends Bundle with IMasterSlave {
    val data = config.dataType
    val id = if(config.useID) config.idType else null
    val strb = if(config.useStrb) config.strbType else null
    val keep_ = if(config.useKeep) config.keepType else null
    val last = if(config.useLast) Bool() else null
    val user = if(config.useUser) Bits(config.userWidth bits) else null

    def setID(idLane: UInt): Unit = if(config.useID) id := idLane

    def setStrb(): Unit = if(config.useStrb) strb := (1 << widthOf(strb)) -1
    def setStrb(byteLane: Bits): Unit = if(config.useStrb) strb := byteLane

    def setKeep(): Unit = if(config.useKeep) keep_ := (1 << widthOf(keep_)) - 1
    def setKeep(keepLane: Bits): Unit = if(config.useKeep) keep_ := keepLane

    override def asMaster(): Unit = {
        out(data)
        if(config.useID) out(id)
        if(config.useStrb) out(strb)
        if(config.useKeep) out(keep_)
        if(config.useUser) out(user)
        if(config.useLast) out(last)
    }

    override type RefOwnerType = this.type
}

case class AxiStream4(config: AxiStream4Config) extends Bundle with IMasterSlave{
    val stream = Stream(AxiStream4X(config))

    override def asMaster(): Unit = {
        master(stream)
    }

    def <<(that: AxiStream4): Unit = {
        this.stream << that.stream
    }
    def >>(that: AxiStream4): Unit = {
        this.stream >> that.stream
    }

    override type RefOwnerType = this.type
}



object  AxiStream4SpecRenamer{
    def apply(that: AxiStream4): Unit ={
        def doIt(): Unit ={
            that.flatten.foreach((bt)=>{
//                bt.setName(bt.getName().replace("_stream", "stream"))
//                bt.setName(bt.getName().replace("_valid","valid"))
//                bt.setName(bt.getName().replace("_ready","ready"))
//                bt.setName(bt.getName().replace("_strb","strb"))
//                bt.setName(bt.getName().replace("_id","id"))
//                bt.setName(bt.getName().replace("_user","user"))
                bt.setName(bt.getName().replace("_keep_", "_keep"))
                if(bt.getName().startsWith("io_")) bt.setName(bt.getName().replaceFirst("io_",""))
            })
        }

        if(Component.current == that.component)
            that.component.addPrePopTask(() => {doIt()})
        else
            doIt()
    }
}