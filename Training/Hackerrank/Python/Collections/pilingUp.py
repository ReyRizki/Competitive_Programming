from collections import deque

def solve(d):
    prev = pow(2, 31)

    while len(d) > 0:
        front, rear = d[0], d[-1]
        if front <= prev and rear <= prev:
            prev = d.popleft() if d[0] > d[-1] else d.pop()
        elif front <= prev:
            prev = d.popleft()
        elif rear <= prev:
            prev = d.pop()
        else:
            return False

    return True

T = int(input())

for _ in range(T):
    n = int(input())
    d = deque(list(map(int, input().split())))

    print("Yes" if solve(d) else "No")