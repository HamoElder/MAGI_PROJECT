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
		val raw_data = slave(Stream(Fragment(config.rawDataType)))
		val coded_data = master(Flow(Fragment(config.codedDataType)))
	}
	noIoPrefix()

	val coded_data: Bits = Reg(config.codedDataType)
	val coded_data_valid: Bool = Reg(Bool()) init(False)

	val r_enc_buf: Bits = Reg(config.regDataType) init(0)
	val r_enc: Vec[Bits] = Vec(config.regDataType, config.dataWidth)
	val code_vec: Vec[Bits] = Vec(config.rawDataType, config.codeRate)

	r_enc(0) := (io.raw_data.payload(0) ## r_enc_buf).resizeLeft(config.regWidth)
	for(idx <- 1 until config.dataWidth){
		r_enc(idx) := (io.raw_data.payload(idx) ## r_enc(idx - 1)).resizeLeft(config.regWidth)
	}

	when(io.tail_bits.fire){
		r_enc_buf := io.tail_bits.payload
		coded_data_valid := False
	}.elsewhen(io.raw_data.fire){
		r_enc_buf := r_enc(config.dataWidth - 1)
		coded_data := code_vec.reverse.asBits
		coded_data_valid := True
	}.otherwise{
		coded_data_valid := False
	}
	io.raw_data.ready := !io.tail_bits.fire

	for(poly <- 0 until config.codeRate){
		for(idx <- 0 until config.dataWidth){
//			code_vec(poly)(idx) :=  (r_enc(idx) & config.genPoly(poly)).xorR
			code_vec(poly)(idx) := xorRGen(r_enc(idx), config.genPoly(poly), config.constraintLength)
		}
	}

	io.coded_data.payload := coded_data
	io.coded_data.valid := coded_data_valid
	io.coded_data.last := RegNext(io.raw_data.last) init(False)
	def xorRGen(data: Bits, poly: Int, n: Int): Bool = {
		if(n == 1){
			if((poly & (1 << (n - 1))) != 0) data(0) else False
		}else{
			if((poly & (1 << (n - 1))) != 0) xorRGen(data, poly, n - 1) ^ data(n - 1) else xorRGen(data, poly, n - 1)
		}

	}
}

object ConvEncoderBench {
	def main(args: Array[String]): Unit = {
		val conv_coder_config = ConvEncoderConfig(8, 7, List(91, 121))
//		val conv_coder_config = ConvEncoderConfig(1, 7, List(91, 121))
		SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
			targetDirectory = "rtl/ConvCode/ConvCode_802_11").generateSystemVerilog(new ConvEncoder(conv_coder_config)).printPruned().printUnused()
	}
}
