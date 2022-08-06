n, a = input().split(' ')
jog=0
for i in range(0, int(n)):
    letra = input().split(' ')
    if letra.count('0')==0:
        jog+=1
print(jog)
