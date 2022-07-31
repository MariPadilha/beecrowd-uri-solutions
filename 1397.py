while True:
    pa = pb = 0
    n = int(input())
    if n == 0:
        break
    for i in range(0, n):
        a, b = input().split(' ')
        a=int(a);b=int(b)
        if a == b:
            pa+=0
        elif a>b:
            pa+=1
        elif a<b:
            pb+=1
    print(pa,pb)
