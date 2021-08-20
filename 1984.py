x = int(input())
x = str(x)
a = int(x)
v = 0
for i in range(len(x)):
    v = a % 10
    print(v , end='')
    a = a // 10
print()
