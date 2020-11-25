wildcard = input()
N = int(input())

tester = []
for i in range (N):
    word = input()
    tester.append(word)

pos = -1
j = 0
while ((pos == -1) and (j < len(wildcard))):
    if (wildcard[j] == '*'):
        pos = j
    else:
        j += 1

subBefore = wildcard[:pos]
subAfter = wildcard[pos+1:]

for i in range (N):
    left = tester[i][:(len(subBefore))]
    right = tester[i][(len(tester[i]) - len(subAfter)):]
    
    if ((left == subBefore) and (right == subAfter) and (len(tester[i]) >= len(subBefore) + len(subAfter))):
        print(tester[i])