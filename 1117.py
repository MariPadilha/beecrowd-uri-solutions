vezes = inva = media = 0
while True:
    N = float(input())
    if vezes == 2:
        break
    if N >= 0 and N <= 10:
        vezes += 1
        media += N
    else:
        inva += 1
for i in range(0, inva):
    print('nota invalida')
media = media / 2
print(f'media = {media:.2f}')
