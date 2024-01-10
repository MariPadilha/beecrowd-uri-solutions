a, b = map(int, input().split())
lista = []
frutas = []
frase = ''
for i in range(0, a):
    n = input().lower()
    lista += [n]
for j in range(0, b):
    frase += input().lower()
for i in range(0, a):
    if lista[i] in frase:
        frutas += [lista[i]]
    frase = frase[::-1]
    if lista[i] in frase:
        frutas += [lista[i]]
for i in range(0, a):
    print(f'Sheldon come a fruta {lista[i]}') if lista[i] in frutas else print(f'Sheldon detesta a fruta {lista[i]}')
