n = int(input())
soma = 0
vezes = 2
fibonacci = 1
while True:
    while True:
        if fibonacci >= n:
            break
        fibonacci = fibonacci * (vezes)
        vezes+=1
    if n == fibonacci:
        n = 0
    else:
        n = n - (fibonacci/(vezes-1))
    fibonacci = 1
    vezes = 2
    soma+=1
    if n <= 0:
        break
print(soma)
