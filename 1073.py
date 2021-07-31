n = int(input())
if n % 2 != 0:
    for i in range(2,n,2):
        h = pow(i, 2)
        print(f'{i}^2 = {h}')
if n % 2 == 0:
    for i in range(2,n+1,2):
        h = pow(i, 2)
        print(f'{i}^2 = {h}')
