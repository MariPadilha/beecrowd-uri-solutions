lista = []
vezes = 0
while True:
    a = 0
    n = int(input())
    if n == 0:
        break
    for i in range(1, n + 1):
        a += i * i
    lista += [a]
    vezes += 1
for k in range(0, vezes):
    print(f'{lista[k]}')
