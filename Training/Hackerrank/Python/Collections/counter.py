from collections import Counter

X = int(input())
sizes = list(map(int, input().split()))
N = int(input())

profit = 0
sizeCounter = dict(Counter(sizes))

for _ in range(N):
    size, price = map(int, input().split())

    if size in sizeCounter and sizeCounter[size] != 0:
        profit += price
        sizeCounter[size] -= 1

print(profit)