for l in range(0, int(input())):
    n = int(input())
    primo = 0
    for i in range(1, n+1):
        if n % i == 0:
            primo+=1
    if primo == 2 and 1 != n:
        print(f'{n} eh primo')
    else:
        print(f'{n} nao eh primo')
