n = int(input())
A = set(map(int, input().split()))

m = int(input())
B = set(map(int, input().split()))

print(len(A.union(B)))