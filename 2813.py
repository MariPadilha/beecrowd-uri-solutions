chuva_trabalho = 0
chuva_casa = 0
comprar_trabalho = 0
comprar_casa = 0
for i in range(0, int(input())):
    casa, trabalho = input().split(" ")
    if casa == "chuva":
        if chuva_casa < 1:
            comprar_casa += 1
        else:
            chuva_casa-=1
        chuva_trabalho += 1
    if trabalho == "chuva":
        if chuva_trabalho < 1:
            comprar_trabalho += 1
        else:
            chuva_trabalho -= 1
        chuva_casa += 1
print(comprar_casa, comprar_trabalho)
