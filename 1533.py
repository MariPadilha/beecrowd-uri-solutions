while True:
    n = int(input())
    if n == 0:
        break
    valores = []
    v = input().split(' ')
    for i in range(0, n):
        valores += [int(v[i])]
    va = valores.copy()
    valores.pop(va.index(max(valores)))
    print(va.index(max(valores))+1)
