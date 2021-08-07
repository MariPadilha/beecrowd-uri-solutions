a = int(input())
lista = []
vezes = 0
for i in range(1, 10001):
    if i % a == 2:
        lista += [i]
        vezes += 1
for j in range(0, vezes):
    print(f'{lista[j]}')
