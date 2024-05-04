verba_governo = 0
gasto_universidade = 0
for i in range(0, int(input())):
    letra, valor = input().split(' ')
    if letra == "G":
        gasto_universidade+=int(valor)
    else:
        verba_governo+=int(valor)
print("NAO VAI TER CORTE, VAI TER LUTA!") if gasto_universidade > verba_governo else print("A greve vai parar.")
