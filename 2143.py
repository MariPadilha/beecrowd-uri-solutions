while True:
    n = int(input())
    if n == 0:
        break
    for i in range(0, n):
        a = int(input())
        if a % 2 == 0:
            print(a * 2 - 2)
        else:
            print(a*2-1)
