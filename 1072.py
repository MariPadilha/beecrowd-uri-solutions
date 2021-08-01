n = int(input())
dentro = fora = 0
for i in range(0, n):
    l = int(input())
    if l >= 10 and l <= 20:
        dentro += 1
    else:
        fora += 1
print(f'{dentro} in')
print(f'{fora} out')
