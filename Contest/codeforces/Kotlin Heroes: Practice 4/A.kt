// Kotlin Hello World Program
fun main(args: Array<String>) {
    var t: Int = readLine()!!.toInt()

    for (i in 1..t)
    {
        var (a,b) = readLine()!!.trim().split("\\s+".toRegex()).map (String::toInt)
        
        println(a + b)
    }
}