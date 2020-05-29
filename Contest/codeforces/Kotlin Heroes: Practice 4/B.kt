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
                    if (j == 0)
                        a = 1
                    else if (j == 1)
                        a = 0
                    
                    if (k == 0)
                        b = 1
                    else if (k == 1)
                        b = 0

                    if (x[a] + y[b] == x[j])
                    {
                        found = true
                        break@outer
                    }
                }
            }
        }

        if (found)
            println("Yes")
        else
            println("No")
    }
}