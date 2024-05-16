numero = input()
print(numero)
while len(numero) != 1:
    numero = str(int(numero[:-1]) * 3 + int(numero[-1]))
    print(numero)
