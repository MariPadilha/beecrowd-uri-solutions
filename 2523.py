while True:
    palavras = ''
    try:
        frase = input()
        numero_lampadas = int(input())
        lampadas_piscaram = list(map(int, input().split(" ")))
        for i in range(0, numero_lampadas):
            palavras+=frase[lampadas_piscaram[i]-1]
        print(palavras)
    except EOFError:
        break
