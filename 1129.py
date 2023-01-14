while True:
    n = int(input())
    if n == 0:
        break
    for i in range(0, n):
        branco = 0
        preto = 0
        alternativa = '*'
        a, b, c, d, e = input().split(' ')
        a = int(a); b = int(b); c = int(c); d = int(d); e = int(e)
        if a <= 127:
            preto+=1
            alternativa = 'A'
        else:
            branco+=1
        if b <= 127:
            preto+=1
            alternativa = 'B'
        else:
            branco+=1
        if c <= 127:
            preto+=1
            alternativa = 'C'
        else:
            branco+=1
        if d <= 127:
            preto+=1
            alternativa = 'D'
        else:
            branco+=1
        if e <= 127:
            preto+=1
            alternativa = 'E'
        else:
            branco+=1
        if branco == 4 and preto == 1:
            print(alternativa)
        else:
            print('*')
