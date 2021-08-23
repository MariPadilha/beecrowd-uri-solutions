lista = []
vezes = 0
while True:
    P = int(input())
    if P == 0:
        P = 1
    if P == -1:
        break
    lista += [P-1]
    vezes += 1
for i in range(0,vezes):
    print(f'{lista[i]}')
