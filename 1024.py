#feito por diogo

for i in range(0, int(input())):
    frase = input()
    frase2 = ''
    for f in frase:
        if f.isalpha():
            frase2+=chr(ord(f)+3)
        else:
            frase2+=f
    frase2 = frase2[::-1]
    frase = ''
    for h in range(0, len(frase2)):
        if h >= len(frase2)//2:
            frase+=chr(ord(frase2[h])-1)
        else:
            frase+=frase2[h]
    print(frase)
