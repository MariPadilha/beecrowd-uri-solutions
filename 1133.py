x = int(input())
y = int(input())
lista = []
vezes = 0
if x < y:
    for i in range(x+1, y):
        if i % 5 == 2 or i % 5 == 3:
            lista += [i]
            vezes += 1
    for j in range(0, vezes):
        print(f'{lista[j]}')
if x > y:
    for i in range(y+1, x):
        if i % 5 == 2 or i % 5 == 3:
            lista += [i]
            vezes += 1
    for j in range(0, vezes):
        print(f'{lista[j]}')
