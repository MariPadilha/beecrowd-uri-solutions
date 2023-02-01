n = int(input())
soma = 0
for i in range(0, n):
    a, b = input().split(" ")
    if int(a) > int(b):
        soma += int(b)
print(soma)
