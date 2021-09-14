lista = []
n = int(input())
for i in range(0, n):
  x, y = input().split()
  x = int(x)
  y = int(y)
  maior = x if x > y else y
  menor = y if y < x else x
  menor += 1
  soma = 0
  while (menor < maior):
    if (menor % 2 != 0):
      soma += menor
    menor += 1
  lista += [soma]
for k in range(0, n):
  print(lista[k])
