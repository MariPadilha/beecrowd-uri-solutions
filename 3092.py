n = int(input())
for i in range(0, n):
    lista = []
    a = input()
    for j in range(0, len(a)):
        if len(lista) == 0 and a[j] == 'Q':
            lista += ['Q']
        elif len(lista) == 1 and a[j] == 'J':
            lista += ['J']
        elif len(lista) == 2 and a[j] == 'K':
            lista += ['K']
        elif len(lista) == 3 and a[j] == 'A':
            lista += ['A']
            break
    if len(lista) != 4:
        print('Agora apertou sem abracar')
    else:
        print('Agora vai')
