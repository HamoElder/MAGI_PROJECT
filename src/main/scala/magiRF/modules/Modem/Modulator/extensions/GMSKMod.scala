package magiRF.modules.Modem.Modulator.extensions

import Misc.math.GaussianLPF
import magiRF.modules.Filters.FIR.DirectFIR
import magiRF.modules.Modem.Misc.{modUnitConfig, modUnitInterface}
import spinal.core._
import spinal.lib._

case class GMSKModConfig(
                            modDataWidth       : Int,
                            phiResolutionWidth : Int,
                            BandwidthTimeProduct: Double = 0.3,
                            InitialPhaseOffset: Double = Math.PI / 2,
                            SamplesPerSymbol: Int = 4
                        ){
    def unitDataType: Bits = Bits(1 bits)
    def modDataType: SInt = SInt(modDataWidth bits)
    def samples_period: Double = 1 / SamplesPerSymbol.toDouble
    def symbol_period: Double = SamplesPerSymbol * samples_period
    def pulse_length: Int = 1
    def filterCoff: Seq[Double] = GaussianLPF(BandwidthTimeProduct, symbol_period.toInt, pulse_length, 1)
    def phiDataType: SFix = SFix(3 exp, -phiResolutionWidth exp)
    def memorySize: Int = (1 << (phiResolutionWidth + 3))
    def cosRomTable: Seq[SInt] = for(idx <- 0 until memorySize) yield{
        val cos = Math.cos(idx.toDouble / Math.pow(2, phiResolutionWidth))
        val scalaCos = ((1<<(modDataWidth - 1)) - 2) * cos + 1
        S(scalaCos.toInt, modDataWidth bits)
    }

    def sinRomTable: Seq[SInt] = for (idx <- 0 until memorySize) yield {
        val sin = Math.sin(idx.toDouble  / Math.pow(2, phiResolutionWidth))
        val scalaSin = ((1 << (modDataWidth - 1)) - 2) * sin + 1
        S(scalaSin.toInt, modDataWidth bits)
    }

}

case class GMSKSymbolFilter(config: GMSKModConfig) extends Component{
    val io = new Bundle{
        val raw_data = slave(Flow(Fragment(config.unitDataType)))
        val result_data = master(Flow(Fragment(config.phiDataType)))
    }
    noIoPrefix()
    val raw_valid_next = RegNext(io.raw_data.valid) init (False)
    val raw_last_next = RegNextWhen(io.raw_data.last, io.raw_data.valid) init (False)

    val filter_coff = Vec(config.phiDataType, config.filterCoff.length)
    for (stage <- config.filterCoff.indices) {
        filter_coff(stage) := (if (isPow2(config.SamplesPerSymbol)) config.filterCoff(stage) * Math.PI
        else config.filterCoff(stage) * Math.PI * config.samples_period)
    }
    val data_buf = Vec(Reg(UInt(2 bits)) init(0), config.filterCoff.length)
    when(raw_last_next){
        for(stage <- config.filterCoff.indices){
            data_buf(stage) := 0
        }
    }.elsewhen(io.raw_data.valid){
        data_buf(0) := (io.raw_data.fragment === B(0)) ? U(2) | 1
        for (stage <- 1 until config.filterCoff.length) {
            data_buf(stage) := data_buf(stage - 1)
        }
    }
    val mixer_cell = Vec(config.phiDataType, config.filterCoff.length)
    for(stage <- config.filterCoff.indices){
        switch(data_buf(stage)){
            is(1){
                mixer_cell(stage) := filter_coff(stage)
            }
            is(2){
                mixer_cell(stage) := mixer_cell(stage).getZero - filter_coff(stage)
            }
            default{
                mixer_cell(stage) := 0
            }
        }
    }

    val filtered_data = Reg(config.phiDataType) init(0)

    when(raw_valid_next){
        filtered_data := mixer_cell.reduceBalancedTree(_ + _)
    }
    io.result_data.fragment := filtered_data
    io.result_data.valid := RegNext(raw_valid_next) init(False)
    io.result_data.last := RegNext(raw_last_next) init(False)
}
case class GMSKMod(config: GMSKModConfig) extends Component {
    val io = slave(modUnitInterface(config.unitDataType, config.modDataType))
    noIoPrefix()

    val phi_integral = Reg(config.phiDataType) init(config.InitialPhaseOffset)
    val symbol_filter = GMSKSymbolFilter(config)
    val CONST_2PI = config.phiDataType
    val mod_valid_next = RegNext(symbol_filter.io.result_data.valid) init (False)
    val mod_last_next = RegNextWhen(symbol_filter.io.result_data.last, symbol_filter.io.result_data.valid) init (False)
    val norm_phi = config.phiDataType
    val cosTable = Mem(config.modDataType, initialContent = config.cosRomTable).addAttribute("rom_style", "block")
    val sinTable = Mem(config.modDataType, initialContent = config.sinRomTable).addAttribute("rom_style", "block")
    symbol_filter.io.raw_data.fragment := io.unit_data.fragment
    symbol_filter.io.raw_data.last := io.unit_data.last
    symbol_filter.io.raw_data.valid := io.unit_data.valid

    CONST_2PI := 2*Math.PI
    norm_phi.raw := (if(isPow2(config.SamplesPerSymbol)) symbol_filter.io.result_data.fragment.raw |>> (log2Up(config.SamplesPerSymbol) + 1)
    else symbol_filter.io.result_data.fragment.raw |>> 1)
    val sum_value = phi_integral + norm_phi

    when(mod_last_next){
        phi_integral := config.InitialPhaseOffset
    }.elsewhen(symbol_filter.io.result_data.valid){
        when(sum_value > 2 * Math.PI) {
            phi_integral := sum_value - CONST_2PI
        }.elsewhen(sum_value < 0) {
            phi_integral := sum_value + CONST_2PI
        }.otherwise {
            phi_integral := sum_value
        }
    }

    io.mod_iq.valid := RegNext(mod_valid_next) init(False)
    io.mod_iq.cha_i := cosTable.readSync(phi_integral.raw.asUInt.resized)
    io.mod_iq.cha_q := sinTable.readSync(phi_integral.raw.asUInt.resized)
    io.mod_iq.last := RegNext(mod_last_next) init(False)
}

object GMSKModBench{
    def main(args: Array[String]): Unit = {
        val gmskMod_config = GMSKModConfig(16, 6, 0.3, Math.PI / 2, 4)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/GMSKMod").generateSystemVerilog(new GMSKMod(gmskMod_config)).printPruned()
    }
}
