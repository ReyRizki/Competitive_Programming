n = int(input())
s = set(map(int, input().split()))
N = int(input())

for i in range(N):
    commands = input().split()

    if commands[0] == "remove":
        s.remove(int(commands[1]))
    elif commands[0] == "discard":
        s.discard(int(commands[1]))
    elif commands[0] == "pop":
        s.pop()

print(sum(s))