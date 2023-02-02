final = 0
for i in range(0, int(input())):
    preco, gramas = input().split(' ')
    if i == 0:
        final = float(preco) * 1000 / float(gramas)
    elif float(preco) * 1000 / float(gramas) < final:
        final = float(preco) * 1000 / float(gramas)
print(f'{(final):.2f}')
