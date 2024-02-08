n = int(input())
lista = input().split(' ')
palavra = ''
for i in range(0, n):
    palavra += chr(int(lista[i], 16))
print(palavra)
