n = int(input())
a = input().split(' ')
soma = 0
for i in range(0, n):
    soma += int(a[i])
print(soma - n)
