import cmath

z = complex(input())

print("\n".join(map(str,cmath.polar(z))))