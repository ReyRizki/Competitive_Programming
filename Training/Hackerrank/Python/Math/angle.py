import math

AB = int(input())
BC = int(input())

print(str(round(math.degrees(math.atan2(AB, BC)))) + "°")
