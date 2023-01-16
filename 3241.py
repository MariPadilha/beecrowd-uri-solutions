for i in range(0, int(input())):
    n = input()
    if n == 'P=NP':
        print('skipped')
    else:
        indice = n.index('+')
        a=n[:indice]; b=n[indice:]
        print(int(a)+int(b))
