for i in range(0, int(input())):
    menor, maior = map(int, input().split(" "))
    sequencia = ""
    for j in range(menor, maior+1):
        sequencia += str(j)
    sequencia+=sequencia[::-1]
    print(sequencia)
