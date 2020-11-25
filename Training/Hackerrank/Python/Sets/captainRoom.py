k = int(input())
roomNumber = list(map(int, input().split()))

single = set()
multiple = set()

for num in roomNumber:
    if num in single:
        multiple.add(num)
    else:
        single.add(num)

single.difference_update(multiple)
print(single.pop())