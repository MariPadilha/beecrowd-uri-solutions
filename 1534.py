def mostrar_matriz(matriz, n):
    for indice, matriz in enumerate(matriz, start=1):
        if indice % n == 0:
            print(matriz)
        else:
            print(f"{matriz}", end='')
while True:
    try:
        n = int(input())
        matriz = []
        coluna = []
        for i in range(0, n):
            for j in range(0, n):
                if j + i == n-1:
                    coluna += [2]
                elif j == i:
                    coluna += [1]
                else:
                    coluna += [3]
            matriz+=coluna[:]
            coluna.clear()
        mostrar_matriz(matriz, n)
    except EOFError:
        break
