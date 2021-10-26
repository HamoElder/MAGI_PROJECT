package magiRF.modules.Filters.FIR

import magiRF.modules.Filters.filterBundle
import spinal.core._
import spinal.lib._

import scala.language.postfixOps
/**
 * Base class for FIR Filter parameters
 */

case class TransFIRConfig(
                        inDataWidth: Int,
                        coefDataWidth: Int,
                        stage: Int,
                        outWidth: Int = 0,
                        cfgDataWidth : Int = 32,
                        genCoefficient : (Int) => (Array[Int]) = null
                        ){
    def coefficient_table: Array[Int] = if(genCoefficient == null) null else genCoefficient(stageCount)
    def programmable: Boolean = if(genCoefficient == null) true else false

    def stageCount: Int = stage + 1
    def halfStage: Int = stageCount >> 1
    def maDataWidth: Int = inDataWidth + coefDataWidth
    def outDataWidth: Int = if(outWidth == 0) inDataWidth + coefDataWidth + Math.ceil(log2Up(stageCount)).toInt else outWidth

}

case class TransFIRUInt(config: TransFIRConfig) extends Component{
    val io= new Bundle{
        val w_en = if(config.programmable) in(Bool()) else null
        val w_addr = if(config.programmable) in(UInt(log2Up(config.halfStage) bits)) else null
        val w_data = if(config.programmable) in(Bits(config.cfgDataWidth bits)) else null
        val fir_data = master(filterBundle(UInt(config.inDataWidth bits), UInt(config.outDataWidth bits)))
    }
    noIoPrefix()

    val fir_in_data = RegNext(io.fir_data.filter_data_in.payload)
    val fir_in_valid = RegNext(io.fir_data.filter_data_in.valid)
    val fir_out_valid = Reg(Bool()) init(False)
    val fir_sum_out = Reg(UInt(config.outDataWidth bits)) init(0)

    val coff_mem = Vec(Reg(UInt(config.coefDataWidth bits)), config.halfStage)
    val mul_buffer = Vec(Reg(UInt(config.maDataWidth bits)), config.halfStage)
    val add_buffer = Vec(Reg(UInt(config.outDataWidth bits)), config.stageCount)

    if(config.programmable){
        when(io.w_en){
            coff_mem(io.w_addr) := io.w_data.asUInt.resized
        }
    } else{
        for(idx <- 0 until config.halfStage){
            coff_mem(idx) := config.coefficient_table(idx)
        }
    }

    when(io.fir_data.filter_clc){
        mul_buffer.foreach(_ := 0)
        add_buffer.foreach(_ := 0)
        fir_out_valid := False
    }.elsewhen(fir_in_valid){
        for(idx <- 0 until config.halfStage){
            if(idx == 0) {
                add_buffer(idx) := mul_buffer(0).resized
            } else
            {
                add_buffer(idx) := add_buffer(idx - 1) + mul_buffer(idx)
            }
            add_buffer(idx + config.halfStage) := add_buffer(idx + config.halfStage - 1) + mul_buffer(config.halfStage - idx - 1)
        }

        for(idx <- 0 until config.halfStage){
            mul_buffer(idx) := fir_in_data * coff_mem(idx)
        }
        fir_sum_out := add_buffer(config.stageCount - 1)
        fir_out_valid := True
    }.otherwise{
        fir_out_valid := False
    }

    io.fir_data.filter_data_out.valid := fir_out_valid
    io.fir_data.filter_data_out.payload := fir_sum_out
}

case class TransFIRSInt(config: TransFIRConfig) extends Component{
    val io= new Bundle{
        val w_en = if(config.programmable) in(Bool()) else null
        val w_addr = if(config.programmable) in(UInt(log2Up(config.halfStage) bits)) else null
        val w_data = if(config.programmable) in(Bits(config.cfgDataWidth bits)) else null
        val fir_data = master(filterBundle(SInt(config.inDataWidth bits), SInt(config.outDataWidth bits)))
    }
    noIoPrefix()

    val fir_in_data = RegNext(io.fir_data.filter_data_in.payload)
    val fir_in_valid = RegNext(io.fir_data.filter_data_in.valid)
    val fir_out_valid = Reg(Bool()) init(False)
    val fir_sum_out = Reg(SInt(config.outDataWidth bits)) init(0)

    val coff_mem = Vec(Reg(SInt(config.coefDataWidth bits)), config.halfStage)
    val mul_buffer = Vec(Reg(SInt(config.maDataWidth bits)), config.halfStage)
    val add_buffer = Vec(Reg(SInt(config.outDataWidth bits)), config.stageCount)

    if(config.programmable){
        when(io.w_en){
            coff_mem(io.w_addr) := io.w_data.asSInt.resized
        }
    } else{
        for(idx <- 0 until config.halfStage){
            coff_mem(idx) := config.coefficient_table(idx)
        }
    }

    when(io.fir_data.filter_clc){
        mul_buffer.foreach(_ := 0)
        add_buffer.foreach(_ := 0)
        fir_out_valid := False
    }.elsewhen(fir_in_valid){
        for(idx <- 0 until config.halfStage){
            if(idx == 0) {
                add_buffer(idx) := mul_buffer(0).resized
            } else
            {
                add_buffer(idx) := add_buffer(idx - 1) + mul_buffer(idx)
            }
            add_buffer(idx + config.halfStage) := add_buffer(idx + config.halfStage - 1) + mul_buffer(config.halfStage - idx - 1)
        }

        for(idx <- 0 until config.halfStage){
            mul_buffer(idx) := fir_in_data * coff_mem(idx)
        }
        fir_sum_out := add_buffer(config.stageCount - 1)
        fir_out_valid := True
    }.otherwise{
        fir_out_valid := False
    }

    io.fir_data.filter_data_out.valid := fir_out_valid
    io.fir_data.filter_data_out.payload := fir_sum_out
}

object TransFirUIntFilterBench{
    def main(args: Array[String]): Unit ={
        val fir_trans_config = TransFIRConfig(12, 12, 7)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new TransFIRUInt(fir_trans_config)).printPruned().printUnused()
    }
}

object TransFirSIntFilterBench{
    def main(args: Array[String]): Unit ={
        val fir_trans_config = TransFIRConfig(12, 12, 7)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new TransFIRSInt(fir_trans_config)).printPruned().printUnused()
    }
}
