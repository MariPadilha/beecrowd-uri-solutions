s = 0
m = 0
for c in range(1, 7):
    c = float(input())
    if c > 0:
        s += 1
        m += c
print(f'''{s} valores positivos
{m/s:.1f}''')
