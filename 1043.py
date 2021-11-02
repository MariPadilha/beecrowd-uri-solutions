n1, n2, n3 = input().split(' ')
n1 = float(n1)
n2 = float(n2)
n3 = float(n3)
if n1 < n2 + n3 and n2 < n1 + n3 and n3 < n1 + n2:
    perimetro = n1 + n2 + n3
    print(f'Perimetro = {perimetro:.1f}')
else:
    area = (n1 + n2) * n3 / 2
    print(f'Area = {area:.1f}')
