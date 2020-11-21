from collections import Counter
from operator import itemgetter

class OrderedCounter(Counter):
    pass

[print(*c) for c in OrderedCounter(sorted(input())).most_common(3)]