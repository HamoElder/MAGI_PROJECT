package magiSOC.system.SystemDebugger

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.{Axi4, Axi4Shared}

case class SystemDebuggerRsp(c : SystemDebuggerConfig) extends Bundle{
    val error = Bool()
    val data = Bits(c.memDataWidth bit)
}

case class SystemDebuggerRemoteBus(c : SystemDebuggerConfig) extends Bundle with IMasterSlave{
    val cmd = Stream Fragment(Bits(c.remoteCmdWidth bit))
    val rsp = Stream (SystemDebuggerRsp(c))

    override def asMaster(): Unit = {
        master(cmd)
        slave(rsp)
    }
}


case class SystemDebuggerMemCmd(c : SystemDebuggerConfig) extends Bundle{
    val address = UInt(c.memAddressWidth bit)
    val data = Bits(c.memDataWidth bit)
    val wr = Bool()
    val size = UInt(log2Up(log2Up(c.memDataWidth/8)+1) bit)
}


case class SystemDebuggerMemBus(c: SystemDebuggerConfig) extends Bundle with IMasterSlave{
    val cmd = Stream (SystemDebuggerMemCmd(c))
    val rsp = Flow (Bits(c.memDataWidth bit))

    override def asMaster(): Unit = {
        master(cmd)
        slave(rsp)
    }

    def toAxi4Shared(): Axi4Shared = {
        assert(c.memDataWidth == 32)
        val busConfig = c.getMemAxi4Config
        val mm = Axi4Shared(busConfig)
        val (cmdFork,dataForkTmp) = StreamFork2(cmd)
        val dataFork = dataForkTmp.throwWhen(!dataForkTmp.wr)

        mm.sharedCmd.valid := cmdFork.valid
        mm.sharedCmd.write := cmdFork.wr
        mm.sharedCmd.addr  := cmdFork.address
        mm.sharedCmd.size  := cmdFork.size.resized
        mm.writeData.valid := dataFork.valid
        mm.writeData.data  := dataFork.data //No allignment needed, done by remote
        mm.writeData.strb  := (dataFork.size.mux (
            U(0) -> B"0001",
            U(1) -> B"0011",
            default -> B"1111"
        ) << dataFork.address(1 downto 0)).resized
        mm.writeData.last  := True

        val contextIn = Stream(UInt(2 bit))
        contextIn.valid := cmdFork.fire && !cmdFork.wr
        contextIn.payload := cmdFork.address(1 downto 0)

        val contextOut = contextIn.m2sPipe()
        contextOut.ready := rsp.fire

        cmdFork.ready := mm.sharedCmd.ready
        dataFork.ready := mm.writeData.ready
        rsp.valid := mm.readRsp.valid
        rsp.payload := mm.readRsp.data >> (contextOut.payload*8)

        mm.readRsp.ready := True
        mm.writeRsp.ready := True
        mm
    }

    def toAxi4: Axi4 = {
        assert(c.memDataWidth == 32)
        val busConfig = c.getMemAxi4Config
        val mm = Axi4Shared(busConfig)
        val (cmdFork,dataForkTmp) = StreamFork2(cmd)
        val dataFork = dataForkTmp.throwWhen(!dataForkTmp.wr)

        mm.sharedCmd.valid := cmdFork.valid
        mm.sharedCmd.write := cmdFork.wr
        mm.sharedCmd.addr  := cmdFork.address
        mm.sharedCmd.size  := cmdFork.size.resized
        mm.writeData.valid := dataFork.valid
        mm.writeData.data  := dataFork.data //No allignment needed, done by remote
        mm.writeData.strb  := (dataFork.size.mux (
            U(0) -> B"0001",
            U(1) -> B"0011",
            default -> B"1111"
        ) << dataFork.address(1 downto 0)).resized
        mm.writeData.last  := True

        val contextIn = Stream(UInt(2 bit))
        contextIn.valid := cmdFork.fire && !cmdFork.wr
        contextIn.payload := cmdFork.address(1 downto 0)

        val contextOut = contextIn.m2sPipe()
        contextOut.ready := rsp.fire

        cmdFork.ready := mm.sharedCmd.ready
        dataFork.ready := mm.writeData.ready
        rsp.valid := mm.readRsp.valid
        rsp.payload := mm.readRsp.data >> (contextOut.payload*8)

        mm.readRsp.ready := True
        mm.writeRsp.ready := True
        mm.toAxi4()
    }
}

