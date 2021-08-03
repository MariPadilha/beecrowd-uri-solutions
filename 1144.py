a = int(input())
for i in range(1,a+1):
    b = pow(i, 2)
    c = b * i
    print(f'''{i} {b} {c}
{i} {b+1} {c+1}''')
