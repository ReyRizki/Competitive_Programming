n = int(input())
A = set(map(int, input().split()))

m = int(input())
B = set(map(int, input().split()))

print("\n".join(list(map(str, sorted(A.symmetric_difference(B))))))