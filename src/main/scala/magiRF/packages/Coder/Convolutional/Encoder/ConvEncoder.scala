package magiRF.packages.Coder.Convolutional.Encoder

import spinal.core._
import spinal.lib._


case class ConvEncoderConfig(
								dataWidth: Int,
								constraintLength: Int,
								genPoly: List[Int] = null
							) {
	require(genPoly != null, "Generator Polynomials must be valued.")
	def rawDataType: Bits = Bits(dataWidth bits)
	def codeRate: Int = genPoly.size
	def regWidth: Int = constraintLength
	def codedWidth: Int = codeRate * dataWidth

	def regDataType: Bits = Bits(regWidth bits)
	def codedDataType: Bits = Bits(codedWidth bits)
}

case class ConvEncoder(config: ConvEncoderConfig) extends Component{
	val io = new Bundle{
		val tail_bits = slave(Flow(config.regDataType))
		val raw_data = slave(Flow(config.rawDataType))
		val coded_data = master(Flow(config.codedDataType))
	}
	noIoPrefix()
	val raw_data_payload: Bits = RegNext(io.raw_data.payload)
	val raw_data_valid: Bool = RegNext(io.raw_data.valid)

	val coded_data: Bits = Reg(config.codedDataType)
	val coded_data_valid: Bool = Reg(Bool()) init(False)

	val r_enc_buf: Bits = Reg(config.regDataType)
	val r_enc: Vec[Bits] = Vec(config.regDataType, config.dataWidth)
	val code_vec: Vec[Bits] = Vec(config.rawDataType, config.codeRate)

	r_enc(0) := (raw_data_payload(0) ## r_enc_buf).resizeLeft(config.regWidth)
	for(idx <- 1 until config.dataWidth){
		r_enc(idx) := (raw_data_payload(idx) ## r_enc(idx - 1)).resizeLeft(config.regWidth)
	}

	when(io.tail_bits.fire){
		r_enc_buf := io.tail_bits.payload
	}.elsewhen(raw_data_valid){
		r_enc_buf := r_enc(config.dataWidth - 1)
		coded_data := code_vec.reverse.asBits
		coded_data_valid := True
	}.otherwise{
		coded_data_valid := False
	}

	for(poly <- 0 until config.codeRate){
		for(idx <- 0 until config.dataWidth){
			code_vec(poly)(idx) :=  (r_enc(idx) & config.genPoly(poly)).xorR
//			code_vec(poly)(idx) := xorRGen(r_enc(idx), config.genPoly(poly), config.constraintLength)
		}
	}

	io.coded_data.payload := coded_data
	io.coded_data.valid := coded_data_valid

	def xorRGen(data: Bits, poly: Int, n: Int): Bool = {
//			poly_shift = poly_shift >> 1
//		println(poly.toBinaryString, n, (poly & (1 << (n - 1))) != 0)
		if(n == 1){
			return if((poly & (1 << (n - 1))) != 0) data(0) else False
		}else{
			return if((poly & (1 << (n - 1))) != 0) xorRGen(data, poly, n - 1) ^ data(n - 1) else xorRGen(data, poly, n - 1)
		}

	}
}

object ConvEncoderBench {
	def main(args: Array[String]): Unit = {
		val conv_coder_config = ConvEncoderConfig(8, 7, List(91, 121))
		SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
			targetDirectory = "rtl/ConvCode").generateSystemVerilog(new ConvEncoder(conv_coder_config)).printPruned().printUnused()
	}
}

object ConvEncoderSimApp extends App{
	import spinal.core.sim._
//	val conv_coder_config = ConvEncoderConfig(4, 7, List(91, 121))
	val conv_coder_config = ConvEncoderConfig(7, 3, List(7, 5))
	SimConfig.withWave.doSim(new ConvEncoder(conv_coder_config)){ dut =>
		dut.clockDomain.forkStimulus(5)
		dut.io.raw_data.valid #= false
		dut.io.tail_bits.valid #= false
		dut.io.tail_bits.payload #= 0
		dut.clockDomain.waitSampling(10)
		dut.io.tail_bits.valid #= true
		dut.io.tail_bits.payload #= 0
		dut.clockDomain.waitSampling(5)
		dut.io.tail_bits.valid #= false
		dut.clockDomain.waitSampling(1)
		for(idx <- 0 until 200){
			dut.io.raw_data.valid #= true
//			dut.io.raw_data.payload #= 170 // 85
			dut.io.raw_data.payload #= 25 // 5
			dut.clockDomain.waitSampling(1)
		}
		dut.io.raw_data.valid #= false
		dut.clockDomain.waitSampling(1000)
	}
}