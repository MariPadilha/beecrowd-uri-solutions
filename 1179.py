par = []; impar = []
for i in range(0, 15):
    n = int(input())
    if n % 2 != 0:
        impar += [n]
        if len(impar) == 5:
            for m in range(0, 5):
                print(f'impar[{m}] = {impar[m]}')
            impar.clear()
    else:
        par += [n]
        if len(par) == 5:
            for m in range(0, 5):
                print(f'par[{m}] = {par[m]}')
            par.clear()
if len(impar) != 0:
    for i in range(0, len(impar)):
        print(f'impar[{i}] = {impar[i]}')
if len(par) != 0:
    for i in range(0, len(par)):
        print(f'par[{i}] = {par[i]}')
