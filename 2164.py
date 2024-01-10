from math import pow, sqrt
n = int(input())
fibo =((pow((1+sqrt(5))/2, n))-(pow((1-sqrt(5))/2, n)))/sqrt(5)
print(f"{fibo:.1f}")
