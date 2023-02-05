b = int(input())
lista = input().split(' ')
s = []
while True:
    for i in range(0, b-1):
        if lista[i] == lista[i+1]:
            s+=[1]
        else:
            s+=[-1]
    if b == 2:
        break
    b-=1
    lista = s[:]
    s.clear()
print('branca') if s[0] == -1 else print('preta')
