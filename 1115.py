vezes = 0
lista = []
while True:
    a, b = input().split()
    a = int(a)
    b = int(b)
    if a > 0 and b > 0:
        lista += ['primeiro']
        vezes += 1
    if a < 0 and b > 0:
        lista += ['segundo']
        vezes += 1
    if a < 0 and b < 0:
        lista += ['terceiro']
        vezes += 1
    if a > 0 and b < 0:
        lista += ['quarto']
        vezes += 1
    if a == 0 or b == 0:
        break
for i in range(0, vezes):
    print(f'{lista[i]}')
