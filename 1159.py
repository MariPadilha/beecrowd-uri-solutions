while True:
    n = int(input())
    soma = 0
    if n == 0:
        break
    for i in range(n, n+10):
        if i % 2 ==0:
            soma+=i
    print(soma)
