a, b = input().split(' ')
b = int(b)
if a == '1':
    a = 4.0
if a == '2':
    a = 4.5
if a == '3':
    a = 5.0
if a == '4':
    a = 2.0
if a == '5':
    a = 1.5
print(f'Total: R$ {a*b:.2f}')
