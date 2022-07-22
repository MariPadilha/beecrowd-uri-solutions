n = int(input())
totalfru = []
total = fru = 0
for i in range(0, n):
    total += float(input())
    fruta = input().split(' ')
    totalfru += [len(fruta)]
    fru += len(fruta)
for f in range(0, n):
    print(f'day {f+1}: {totalfru[f]} kg')
print(f'''{fru/n:.2f} kg by day
R$ {total/n:.2f} by day''')
