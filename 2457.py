letra = input()
frase = input().split(" ")
palavra = 0
for i in range(0, len(frase)):
    if letra in frase[i]:
        palavra+=1
print(f'{(palavra*100/len(frase)):.1f}')
