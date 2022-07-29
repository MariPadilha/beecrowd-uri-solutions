mary = []
jonh = []
vezes = 0
while True:
    n = int(input())
    if n == 0:
        break
    a = input().split(' ')
    mary+=[a.count('0')]
    jonh+=[a.count('1')]
    vezes+=1
for i in range(0, vezes):
    print(f'''Mary won {mary[i]} times and John won {jonh[i]} times''')
