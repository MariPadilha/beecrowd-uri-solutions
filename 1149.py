y = input().split(" ")
a = int(y[0]); n = int(y[-1])
i = 0
if a > n:
    for l in range(a, n+a):
        i+=l
else:
    for p in range(n, n+a):
        i+=p
print(i)
