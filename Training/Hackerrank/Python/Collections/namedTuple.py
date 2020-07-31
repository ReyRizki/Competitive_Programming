from collections import namedtuple

N = int(input())
Student = namedtuple('Student', input())

print("{:.2f}".format(sum([int(Student._make(input().split()).MARKS) for i in range(N)])/N))