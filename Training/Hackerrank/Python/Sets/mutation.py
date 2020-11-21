n = int(input())
A = set(map(int, input().split()))

N = int(input())

for i in range(N):
    command, m = input().split()
    m = int(m)
    B = set(map(int, input().split()))

    if command == "update":
        A.update(B)
    elif command == "intersection_update":
        A.intersection_update(B)
    elif command == "difference_update":
        A.difference_update(B)
    elif command == "symmetric_difference_update":
        A.symmetric_difference_update(B)

print(sum(A))