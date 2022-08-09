n, fim = input().split(' ')
n = int(n);fim = int(fim)
for i in range(1, fim+1, n):
    for j in range(i, i+n):
        if j == i+n-1:
            print(j,end='\n')
        else:
            print(j,end=' ')
