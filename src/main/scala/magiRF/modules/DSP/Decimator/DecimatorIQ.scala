package magiRF.modules.DSP.Decimator

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

case class DecimatorIQ[T <: Data](dataType: T, nDecimation: Int) extends Component {
	def cntDataWidth = log2Up(nDecimation)
	def cntDataType = UInt(cntDataWidth bits)
	val io = new Bundle{
		val in = slave(Flow(IQBundle(dataType)))
		val out = master(Flow(IQBundle(dataType)))
	}
	noIoPrefix()
	val cnt = Reg(cntDataType) init(0)

	val out_data = Reg(IQBundle(dataType))
	val out_valid = Reg(Bool()) init(False)
	when(io.in.valid){
		cnt := (cnt === nDecimation - 1) ? U(0) | cnt + 1
	}
	when(io.in.valid){
		when (cnt === nDecimation - 1){
			out_valid := True
			out_data := io.in.payload
		}.otherwise{
			out_valid := False
		}
	}.otherwise{
		out_valid := False
	}
	io.out.payload := out_data
	io.out.valid := out_valid
}
