from itertools import combinations

N = int(input())
letters = input().split()
K = int(input())

combinationResult = list(combinations(letters, K))

print(sum(1 for tups in combinationResult if 'a' in tups) / len(combinationResult))