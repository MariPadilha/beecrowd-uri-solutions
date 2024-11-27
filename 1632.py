for i in range(0, int(input())):
    frase = input()
    soma = 1
    for j in range(0, len(frase)):
        if frase[j] in "AEIOSaeios":
            soma*=3
        else:
            soma*=2
    print(soma)
