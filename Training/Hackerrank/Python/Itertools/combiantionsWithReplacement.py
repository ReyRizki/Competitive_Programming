from itertools import combinations_with_replacement

s, r = input().split()
r = int(r)

print("\n".join(["".join(tups) for tups in list(combinations_with_replacement(sorted(s), r))]))