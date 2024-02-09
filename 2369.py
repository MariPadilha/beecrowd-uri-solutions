n = int(input())
soma = 7
if n <= 10:
    soma = 7
else:
    if n <= 30:
        soma += n-10
    else:
        soma+=20
        if n <= 100:
            soma += (n-30)*2
        else:
            soma+=140
            if n >= 101:
                soma += (n-100)*5
print(soma)
