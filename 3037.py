n = int(input())
vezes = 0
win = []
while True:
    if vezes == n:
        break
    a1, a2 = input().split()
    a3, a4 = input().split()
    a5, a6 = input().split()
    b1, b2 = input().split()
    b3, b4 = input().split()
    b5, b6 = input().split()
    a1 = int(a1)
    a2 = int(a2)
    a3 = int(a3)
    a4 = int(a4)
    a5 = int(a5)
    a6 = int(a6)
    b1 = int(b1)
    b2 = int(b2)
    b3 = int(b3)
    b4 = int(b4)
    b5 = int(b5)
    b6 = int(b6)
    a11 = a1 * a2
    a21 = a3 * a4
    a31 = a5 * a6
    joao = a11 + a21 + a31
    b11 = b1 * b2
    b21 = b3 * b4
    b31 = b5 * b6
    maria = b11 + b21 + b31
    if joao > maria:
        win += ['JOAO']
    if joao < maria:
        win += ['MARIA']
    vezes += 1
for i in range(0, n):
    print(f'{win[i]}')
