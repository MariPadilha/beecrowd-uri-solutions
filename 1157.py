n = int(input())
lista = []
vezes = 0
for i in range(0, n+1):
    if i != 0:
        if n % i == 0:
            lista += [i]
            vezes += 1
for l in range(0, vezes):
    print(f'{lista[l]}')
