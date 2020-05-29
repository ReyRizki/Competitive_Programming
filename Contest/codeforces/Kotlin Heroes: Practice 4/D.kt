fun main(args: Array<String>)
{
    var t: Int = readLine()!!.toInt()

    for (i in 1..t)
    {
        var n: Int = readLine()!!.toInt()
        var candies = readLine()!!.trim().split("\\s+".toRegex()).map (String::toInt)

        var index = arrayOf<Int> (0, n - 1)
        var total = arrayOf<Int> (0, 0)
        var turn: Int = 0
        var min: Int = candies[0]

        while (index[0] <= index[1])
        {
            for (j in 0..1)
            {
                if (index[0] <= index[1])
                {
                    turn++
                    
                    var eaten: Int = 0
                    while (index[0] <= index[1] && eaten < min)
                    {
                        eaten += candies[index[j]]

                        if (j == 0)
                            index[j]++
                        else if (j == 1)
                            index[j]--

                    }
                    
                    min = eaten + 1
                    total[j] += eaten
                }
            }
        }
        
        print(turn)
        print(" ")
        print(total[0])
        print(" ")
        println(total[1])
    }
}