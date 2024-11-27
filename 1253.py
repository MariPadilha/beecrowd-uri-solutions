alfabeto = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
for i in range(0, int(input())):
    final = ''
    frase = input()
    n = int(input())
    for j in range(0, len(frase)):
        if alfabeto.index(frase[j]) - n < 0:
            final += alfabeto[alfabeto.index(frase[j]) - n + 26]
        else:
            final += alfabeto[alfabeto.index(frase[j]) - n]
    print(final)
