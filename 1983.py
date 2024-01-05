listaA = []
listaB = []
for i in range(0, int(input())):
    a, b = map(float, input().split(" "))
    listaA += [a]
    listaB += [b]
print(int(listaA[listaB.index(max(listaB))])) if max(listaB) >= 8 else print('Minimum note not reached')
