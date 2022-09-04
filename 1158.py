for i in range(0, int(input())):
    soma = 0
    x, y = input().split()
    for m in range(int(x), int(x)+int(y)*2):
        if m % 2 != 0:
            soma += m
    print(soma)
