from itertools import combinations

s, r = input().split()
r = int(r)

print("\n".join(["".join(tups) for i in range(1, r+1) for tups in list(combinations(sorted(s), i))]))