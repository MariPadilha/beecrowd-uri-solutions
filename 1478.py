while True:
    n = int(input())
    if n == 0:
        break
    matriz = []
    coluna = []
    u = 1
    vezes = 0
    for i in range(0, n):
        for j in range(0, n):
            coluna += [u]
        matriz += [coluna[:]]
        coluna = []
    for i in range(0, n):
        if i == n-1:
            u = n
        for j in range(0, n):
            matriz[i][j] = u
            if i == n-1:
                u-=1
            elif i == 0:
                u+=1
            else:
                if u == 1:
                    vezes = 1
                if vezes == 0:
                    u-=1
                else:
                    u+=1
        u = i+2
        vezes=0
    for i in range(0, len(matriz)):
        for j in range(0, len(matriz)-1):
            print(f"{matriz[i][j]:>3}", end=' ')
        print(f"{matriz[i][len(matriz)-1]:>3}")
    print()
