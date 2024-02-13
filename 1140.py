while True:
    frase = input().split(' ')
    sim = 0
    if frase[0] == '*':
        break
    letra = frase[0][0]
    for i in range(0, len(frase)):
        if letra.lower() != frase[i][0].lower():
            sim = 1
    print('Y') if sim == 0 else print('N')
