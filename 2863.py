while True:
    try:
        n = int(input())
        menor = float(input())
        for i in range(1, n):
            palavra = float(input())
            if palavra < menor:
                menor = palavra
        print(menor)
    except EOFError:
        break
