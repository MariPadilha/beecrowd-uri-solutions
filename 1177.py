T = int(input())
k = 0
while True:
    for x in range(0, T):
        print(f'N[{k}] = {x}')
        k += 1
        if k == 1000:
            break
    if k == 1000:
        break
