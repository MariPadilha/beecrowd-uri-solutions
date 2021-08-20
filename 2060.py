x = int(input())
v = input().split()
mul2 = mul3 = mul4 = mul5 = 0
for i in range(0, x):
    f = v[i]
    h = int(f)
    if h % 2 == 0:
        mul2 += 1
    if h % 3 == 0:
        mul3 += 1
    if h % 4 == 0:
        mul4 += 1
    if h % 5 == 0:
        mul5 += 1
print(f'''{mul2} Multiplo(s) de 2
{mul3} Multiplo(s) de 3
{mul4} Multiplo(s) de 4
{mul5} Multiplo(s) de 5''')
