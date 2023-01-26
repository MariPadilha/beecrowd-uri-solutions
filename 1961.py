pulos, n = input().split(" ")
canos = input().split(" ")
l1 = int(canos[0])
vitoria = 0
for i in range(1, int(n)):
    l2 = int(canos[i])
    if l2 > l1 and l2 - l1 > int(pulos):
        vitoria = 1
        break
    if l1 > l2 and l1 - l2 > int(pulos):
        vitoria = 1
        break
    l1 = int(canos[i])
if vitoria == 0:
    print('YOU WIN')
else:
    print('GAME OVER')
