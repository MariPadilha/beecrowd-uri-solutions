lista = []
vezes = 0
while True:
    n = int(input())
    lista += [n-1]
    vezes += 1
    if n == 9999:
        break
for i in range(0, vezes):
    print(f'{lista[i]}')
