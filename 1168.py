lista = [2, 5, 5, 4, 5, 6, 3, 7, 6, 6]
for i in range(0, int(input())):
    soma = 0
    n = str(input())
    for j in range(0, len(n)):
        soma += lista[int(n[j])-1]
    print(f'{soma} leds')
