from collections import defaultdict

n, m = map(int, input().split())

nWords = defaultdict(list)

for i in range(1, n+1):
    nWord = input()
    nWords[nWord].append(i)

for _ in range(m):
    mWord = input()

    if len(nWords[mWord]) == 0:
        print(-1)
    else:
        print(*nWords[mWord])