vezes = 1
while True:
    n = int(input())
    if n == -1:
        break
    print(f'Experiment {vezes}: {n//2} full cycle(s)')
    vezes+=1
