vezes = 0
lista = []
while True:
    a, b = input().split()
    a = int(a)
    b = int(b)
    if a > b:
        lista += ['Decrescente']
        vezes += 1
    if b > a:
        lista += ['Crescente']
        vezes += 1
    if a == b:
        break
for i in range(0, vezes):
    print(f'{lista[i]}')
