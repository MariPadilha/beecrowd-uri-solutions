lista = []
for i in range(0, 100):
    lista+=[float(input())]
for i in range(0, 100):
    if lista[i] <= 10:
        print(f'A[{i}] = {lista[i]:.1f}')
