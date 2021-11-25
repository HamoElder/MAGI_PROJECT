package magiSOC.core.petite.extension

import magiSOC.core.petite.Utils._
import magiSOC.core.petite._
import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba3.ahblite.{AhbLite3Config, AhbLite3Master}
import spinal.lib.bus.avalon.{AvalonMM, AvalonMMConfig}


//trait AvalonProvider{
//    def getAvalonConfig() : AvalonMMConfig
//    def getAvalon() : AvalonMM
//}
//
//trait AhbLite3Provider{
//    def getAhbLite3Config() : AhbLite3Config
//    def getAhbLite3() : AhbLite3Master
//}
//
//class NativeInstructionBusExtension extends CoreExtension with AvalonProvider with AhbLite3Provider{
//    override def getName: String = "NativeInstructionBus"
//    var memBus : CoreInstructionBus = null
//    override def applyIt(core: RiscvCore): Area = new Area{
//        memBus = master(CoreInstructionBus()(core.c)).setName("io_i")
//        memBus.cmd << core.iCmd
//        memBus.rsp >> core.iRsp
//        if(memBus.branchCachePort != null) memBus.branchCachePort <> core.brancheCache.readSyncPort
//
//        //    core.iCacheFlush.cmd.ready := True
//        //    core.iCacheFlush.rsp := core.iCacheFlush.cmd.valid
//    }
//
//    override def getAvalon(): AvalonMM = memBus.toAvalon()
//    override def getAvalonConfig(): AvalonMMConfig = CoreInstructionBus.getAvalonConfig(memBus.p)
//
//    override def getAhbLite3(): AhbLite3Master = memBus.toAhbLite3()
//    override def getAhbLite3Config(): AhbLite3Config = CoreInstructionBus.getAhbLite3Config(memBus.p)
//}
//
//
//
//class CachedInstructionBusExtension(c : InstructionCacheConfig,cutCpuCmdReady : Boolean = false,cutCpuRspReady : Boolean = false) extends CoreExtension with AvalonProvider{
//    override def getName: String = "CachedInstructionBus"
//    var memBus : InstructionCacheMemBus = null
//    override def applyIt(core: RiscvCore): Area = new Area{
//        val coreICmd = if(cutCpuCmdReady) core.iCmd.s2mPipe() else core.iCmd
//        val coreIRsp = cloneOf(core.iRsp)
//        if(cutCpuRspReady) coreIRsp >/> core.iRsp else coreIRsp >> core.iRsp
//
//        val cache = new InstructionCache()(c)
//        cache.io.cpu.cmd.valid := coreICmd.valid
//        cache.io.cpu.cmd.address := coreICmd.pc
//        coreICmd.ready := cache.io.cpu.cmd.ready
//
//        coreIRsp.valid := cache.io.cpu.rsp.valid
//        coreIRsp.pc := cache.io.cpu.rsp.address
//        coreIRsp.instruction := cache.io.cpu.rsp.data
//        cache.io.cpu.rsp.ready := coreIRsp.ready
//
//        if(core.c.branchPrediction == dynamic){
//            coreIRsp.branchCacheLine := core.brancheCache.readSync(cache.io.cpu.cmd.address(2,core.c.dynamicBranchPredictorCacheSizeLog2 bits),cache.io.cpu.cmd.fire)
//        }
//
//        memBus = master(InstructionCacheMemBus()(c)).setName("io_i")
//        memBus <> cache.io.mem
//
//        val iCacheflushEmitter = EventEmitter(on=cache.io.flush.cmd)
//
//        when(core.execute1.inInst.valid && core.execute1.inInst.ctrl.fencei){
//            //core.prefetch.halt := True
//            when(core.execute1.inInst.ready) {
//                //core.execute0.flush := True
//                iCacheflushEmitter.emit()
//            }
//        }
//    }
//
//    override def getAvalon(): AvalonMM = memBus.toAvalon()
//    override def getAvalonConfig(): AvalonMMConfig = c.getAvalonConfig()
//}
//
