for i in range(0, int(input())):
    soma = 0
    a, b = input().split(' ')
    if len(a) < len(b):
        print('nao encaixa')
    else:
        for i in range(0, len(b)):
            if a[len(a) - len(b) + i] == b[i]:
                soma+=1
        print('encaixa') if soma == len(b) else print('nao encaixa')
