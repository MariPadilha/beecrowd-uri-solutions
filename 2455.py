a, b, c, d = input().split(' ')
n1 = int(a) * int(b)
n2 = int(c) * int(d)
if n1 == n2:
    print(0)
elif n1 > n2:
    print(-1)
else:
    print(1)
