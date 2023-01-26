while True:
    try:
        n = int(input())
        x = input().split(" ")
        valores = [int(val) for val in x]
        maxi = max(valores)
        if maxi < 10:
            print(1)
        elif maxi >= 20:
            print(3)
        else:
            print(2)
    except EOFError:
        break
