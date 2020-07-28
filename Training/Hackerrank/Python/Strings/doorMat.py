def getCountOfPattern(num):
    return num * 2 + 1

if __name__ == '__main__':
    M, N = map(int, input().split())

    mid = M//2

    pattern = '.|.'

    for i in range(M):
        if i < mid:
            middleContent = pattern * getCountOfPattern(i)
        elif i == mid:
            middleContent = "WELCOME"
        elif i > mid:
            middleContent = pattern * getCountOfPattern(M - i - 1)

        print(middleContent.center(N, '-'))