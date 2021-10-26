package magiRF.modules.DSP.Decimator

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

case class DecimatorIQ[T <: Data](dataType: T, nDecimation: Int) extends Component {
	val io = new Bundle{
		val in = Flow(IQBundle(dataType))
		val out = Flow(IQBundle(dataType))
	}
	noIoPrefix()
	val cnt = Counter(nDecimation)

	io.out.payload := io.in.payload
	when(io.in.valid){
		cnt.increment()
		when(cnt === 0){
			io.out.valid := True
		}.otherwise{
			io.out.valid := False
		}
	}.otherwise{
		io.out.valid := False
	}
}
