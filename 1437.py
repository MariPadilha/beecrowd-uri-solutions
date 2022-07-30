while True:
    direcao = 'N'
    n = int(input())
    if n == 0:
        break
    a = input()
    for i in range(0,n):
        if direcao == 'N':
            if a[i] == 'D':
                direcao = 'L'
            elif a[i] == 'E':
                direcao = 'O'
        elif direcao == 'L':
            if a[i] == 'D':
                direcao = 'S'
            elif a[i] == 'E':
                direcao = 'N'
        elif direcao == 'S':
            if a[i] == 'D':
                direcao = 'O'
            elif a[i] == 'E':
                direcao = 'L'
        elif direcao == 'O':
            if a[i] == 'D':
                direcao = 'N'
            elif a[i] == 'E':
                direcao = 'S'
    print(direcao)
