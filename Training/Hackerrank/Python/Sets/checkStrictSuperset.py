def isStrictSuperset(A, otherSets):
    for singleSet in otherSets:
        if not (A.issuperset(singleSet) and len(A.difference(singleSet)) > 1):
            return False

    return True

A = set(map(int, input().split()))

n = int(input())

otherSets = []
for i in range(n):
    newSet = set(map(int, input().split()))
    otherSets.append(newSet)

print(isStrictSuperset(A, otherSets))