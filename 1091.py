while True:
    n = int(input())
    if n == 0:
        break
    divisaA, divisaB = map(int, input().split(" "))
    for i in range(0, n):
        a, b = map(int, input().split(" "))
        if a == divisaA or b == divisaB:
            print("divisa")
        elif b > divisaB:
            print("NE") if a > divisaA else print("NO")
        else:
            print("SE") if a > divisaA else print("SO")
