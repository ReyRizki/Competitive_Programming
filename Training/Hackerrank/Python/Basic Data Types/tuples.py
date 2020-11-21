if __name__ == '__main__':
    n = int(input())
    integerTuple = tuple(map(int, input().split()))

    print(hash(integerTuple))