while True:
    a, b = map(int, input().split(' '))
    if a == b == 0:
        break
    print(min(a,b)-(max(a,b)-min(a,b)))
