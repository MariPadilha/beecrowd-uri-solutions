a = int(input())
lista = []
for i in range(0, a):
    g = int(input())
    if g > 8000:
        lista += ['Mais de 8000!']
    else:
        lista += ['Inseto!']
for h in range(0, a):
    print(f'{lista[h]}')
