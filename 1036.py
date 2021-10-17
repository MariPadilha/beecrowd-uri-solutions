from math import sqrt
A, B, C = input().split()
A = float(A)
B = float(B)
C = float(C)
if A == 0:
    print('Impossivel calcular')
if A > 0:
    delta = B**2-4*A*C
    if delta < 0:
        print('Impossivel calcular')
    elif delta > 0:
        quadra = sqrt(delta)
        x1 = (-B + quadra)/(2*A)
        if x1 == 0:
            print('Impossivel calcular')
        else:
           print(f'R1 = {x1:.5f}')
        x2 = (-B - quadra) / (2 * A)
        if x2 == 0:
            print('Impossivel calcular')
        else:
           print(f'R2 = {x2:.5f}')
