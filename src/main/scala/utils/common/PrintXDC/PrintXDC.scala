package utils.common.PrintXDC

import java.io._

object PrintXDC{
    private var xdc : List[String] = List()
    def apply(input: String): Unit = {
        xdc = xdc :+ input
    }

    def apply(address : String, FileName : String): Unit = {
        val file = new File(address)
        if(!file.exists()) {
            file.mkdir()
        }
        val writer = new PrintWriter(new File(address + System.getProperty("file.separator") + FileName ))
        xdc.foreach(x => writer.write(x))
        writer.close()
    }
    def clear(): Unit = {xdc = List();}
    def get(): String = {
        val ret = xdc.reduce(_+_)
        ret
    }
}
