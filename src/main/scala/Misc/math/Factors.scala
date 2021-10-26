package Misc.math

object Factors {
    def factorize(x: Int): List[Int] = {
        def foo(x: Int, a: Int): List[Int] = {
            if (a > Math.pow(x, 0.5))
                return List(x)
            x % a match {
                case 0 => a :: foo(x / a, a)
                case _ => foo(x, a + 1)
            }
        }
        foo(x, 2)
    }

    def clock_solver(x: Int): (Int, Int) = {
        var factors = factorize(x)
        var a = 1
        var b = 1
        var i = 0
        while(factors.length > 1) {
            if(i % 2 == 0){
                b *= (factors.head * factors.last)
                factors = factors.drop(1)
                factors = factors.dropRight(1)
            }
            else{
                a *= (factors.head * factors.last)
                factors = factors.drop(1)
                factors = factors.dropRight(1)
            }
            i = i + 1
        }
        if(factors.nonEmpty){
            if(a > b){
                b *= factors.head
            }
            else{
                a *= factors.head
            }
        }
        (a, b)
    }
}
