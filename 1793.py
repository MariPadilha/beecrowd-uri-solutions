while True:
    n = int(input())
    if n == 0:
        break
    a = list(map(int, input().split(" ")))
    soma = 10
    if n != 1:
        for i in range(0, n-1):
            if a[i+1] - a[i] > 10:
                soma += 10
            else:
                soma += a[i+1] - a[i]
    print(soma)
