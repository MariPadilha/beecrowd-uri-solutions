while True:
    a,b = map(int, input().split(" "))
    if a == 0 == b:
        break
    print(str(a+b).replace("0", ""))
