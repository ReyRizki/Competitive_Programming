def removeDuplicates(x):
    return list(dict.fromkeys(x))

if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())

    arr = removeDuplicates(arr)
    arr.sort(reverse=True)
    print(arr[1])