posicao = 0
n = int(input())
frase = list(map(int,input().split(" ")))
for i in range(0, n-1):
    if frase[i+1] < frase[i]:
        posicao = i+2
        break
print(posicao)
