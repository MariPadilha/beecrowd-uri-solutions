for i in range(0, int(input())):
    soma = 0
    n = []
    n += map(int, input().split(" "))
    for j in range(1, len(n)):
        soma+=n[j]-1
    print(soma+1)
