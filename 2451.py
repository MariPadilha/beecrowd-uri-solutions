comida = 0
maior = 0
vezes = 0
n = int(input())
while True:
    esqDire = input()
    for i in range(0, len(esqDire)):
        if esqDire[i] == 'o':
            comida += 1
            if comida > maior:
                maior = comida
        elif esqDire[i] == 'A':
            comida = 0
    vezes += 1
    if vezes == n:
        break
    direEsqu = input()
    for i in range(len(direEsqu)-1, -1, -1):
        if direEsqu[i] == 'o':
            comida += 1
            if comida > maior:
                maior = comida
        if direEsqu[i] == 'A':
            comida = 0
    vezes += 1
    if vezes == n:
        break

print(maior)
