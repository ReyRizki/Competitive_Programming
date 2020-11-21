from itertools import product

K, M = map(int, input().split())

lists = []
for _ in range(K):
    line = list(map(int, input().split()))
    lists.append(line[1:])

print(max([sum(element ** 2 for element in tup) % M for tup in list(product(*lists))]))