while True:
    n = int(input())
    if n == 0:
        break
    matriz = []
    coluna = []
    u = 1
    a = 0
    for i in range(0, n):
        for j in range(0, n):
            coluna += [u]
        matriz += [coluna[:]]
        coluna = []
    n-=1
    while True:
        a+=1
        u+=1
        for i in range(a, n):
            for j in range(a, n):
                matriz[i][j] = u
        n-=1
        if n <= 1:
            break
    for i in range(0, len(matriz)):
        for j in range(0, len(matriz)-1):
            print(f"{matriz[i][j]:>3}", end=' ')
        print(f"{matriz[i][len(matriz)-1]:>3}")
    print()
