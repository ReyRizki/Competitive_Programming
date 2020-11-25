from collections import OrderedDict

N = int(input())

wordCount = OrderedDict()

for _ in range(N):
    word = input()
    
    if word in wordCount:
        wordCount[word] += 1
    else:
        wordCount[word] = 1

print(len(wordCount))
print(" ".join([str(v) for _, v in wordCount.items()]))