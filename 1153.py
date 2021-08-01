n1 = int(input())
n2 = n1
while n1 != 1:
    n1 -= 1
    n2 += n2 * (n1-1)
print(f'{n2}')
