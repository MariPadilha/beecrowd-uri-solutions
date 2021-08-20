a, b = input().split()
a = int(a)
b = int(b)
for c in range(0, b):
    f = input()
    if f == 'fechou':
        a += 1
    if f == 'clicou':
        a -= 1
print(a)
