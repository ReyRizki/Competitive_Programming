def printNumbers(n):
    result = ""

    for i in range(1, n + 1):
        result += str(i)

    return result

if __name__ == '__main__':
    n = int(input())

    print(printNumbers(n))