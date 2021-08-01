n = int(input())
soma = 0
for i in range(0, n):
    a, b = input().split()
    a = int(a)
    b = int(b)
    if a == 1001:
        c = 1.50 * b
        soma += c
    if a == 1002:
        c = 2.50 * b
        soma += c
    if a == 1003:
        c = 3.50 * b
        soma += c
    if a == 1004:
        c = 4.50 * b
        soma += c
    if a == 1005:
        c = 5.50 * b
        soma += c
print(f'{soma:.2f}')
