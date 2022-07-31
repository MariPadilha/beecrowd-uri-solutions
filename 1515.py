while True:
    nm = []
    ma = []
    n = int(input())
    if n == 0:
        break
    for i in range(0, n):
        nome, ano, re = input().split(' ')
        nm+=[nome]
        ma+=[int(ano)-int(re)]
    print(nm[ma.index(min(ma))])
