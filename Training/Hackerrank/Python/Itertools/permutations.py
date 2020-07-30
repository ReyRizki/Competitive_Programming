from itertools import permutations

s, r = input().split()
r = int(r)

print("\n".join(["".join(tups) for tups in list(permutations(sorted(s), r))]))