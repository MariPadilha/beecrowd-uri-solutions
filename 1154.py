vezes = 0
lista = 0
while True:
    a = int(input())
    if a < 0:
        break
    lista += a
    vezes += 1
c = lista / vezes
print(f'{c:.2f}')
