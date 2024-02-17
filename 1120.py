while True:
    lista = []
    str = ''
    a, b = input().split(' ')
    if a == b == '0':
        break
    def estaEm(numero):
        return a not in numero
    lista += [list(filter(estaEm, b))]
    if len(lista[0]) == 0:
        print(0)
    elif len(lista[0]) == lista[0].count(lista[0][0]) and lista[0][0] == 0:
        print(lista[0][0])
    else:
        for i in lista[0]:
            str += i
        print(int(str))
