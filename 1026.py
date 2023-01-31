while True:
    try:
        a, b = input().split(' ')
        print(int(a)^int(b))
    except EOFError:
        break
