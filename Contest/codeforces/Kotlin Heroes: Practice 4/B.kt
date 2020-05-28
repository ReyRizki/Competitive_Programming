fun main(args: Array<String>)
{
    var t: Int = readLine()!!.toInt()

    for (i in 1..t)
    {
        var x = readLine()!!.trim().split("\\s+".toRegex()).map (String::toInt)
        var y = readLine()!!.trim().split("\\s+".toRegex()).map (String::toInt)
        
        var found : Boolean = false
        var a: Int = 0
        var b: Int = 0

        outer@ for (j in 0..1)
        {
            inner@ for (k in 0..1)
            {
                if (x[j] == y[k])
                {
                    a = j
                    b = k
                    found = true
                    break@outer
                }
            }
        }

        var c: Int = 0
        if (a == 0)
            c = 1
        else if (a == 1)
            c = 0

        var d: Int = 0
        if (b == 0)
            d = 1
        else if (b == 1)
            d = 0

        if (found)
        {
            if (x[c] + y[d] == x[a])
                println("Yes")
            else
                println("No")
        }
        else
            println("No")
    }
}