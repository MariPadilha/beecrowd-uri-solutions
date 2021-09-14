lista = []
for i in range(0, 100):
  n = int(input())
  lista += [n]
m = max(lista)
print(m)
no = lista.index(m)
print(no+1)
