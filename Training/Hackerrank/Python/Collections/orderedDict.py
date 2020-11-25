from collections import OrderedDict

N = int(input())

products = OrderedDict()

for _ in range(N):
    line = input().split()
    itemName = " ".join(line[:-1])
    netPrice = int(line[-1])

    if itemName in products:
        products[itemName] += netPrice
    else:
        products[itemName] = netPrice

print("\n".join([" ".join((k, str(v))) for k, v in products.items()]))