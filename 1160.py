for i in range(0, int(input())):
    A, B, perA, perB = input().split(' ')
    A = int(A) 
    B = int(B)
    perA = float(perA)
    perB = float(perB)
    anos = 0
    while True:
        A += int(A*perA/100)
        B += int(B*perB/100)
        anos += 1
        if anos > 100:
            print(f'Mais de 1 seculo.')
            break
        if A > B:
            print(f'{anos} anos.')
            break
