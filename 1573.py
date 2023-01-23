while True:
    a, b, c = input().split(" ")
    if a == b == c:
        break
    print(int((int(a)*int(b)*int(c)) ** (1/3)))
