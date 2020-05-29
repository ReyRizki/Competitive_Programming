fun main(args: Array<String>)
{
    var t: Int = readLine()!!.toInt()

    for (i in 1..t)
    {
        var n: String = readLine()!!.toString()
        var k: Int = 0

        for (j in n.indices)
            if (n[j] != '0')
                k++
        println(k)

        for (j in n.indices)
        {
            if (n[n.length - 1 - j] != '0')
            {
                print(n[n.length - 1 - j] + "0".repeat(j))

                if (j < n.length - 1)
                    print(" ")
            }
        }

        println()
    }
}