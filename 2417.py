a1, a2, a3, b1, b2, b3 = map(int, input().split(" "))
a = a1*3 + a2; b = b1*3 + b2
if a == b:
    if a3 == b3:
        print("=")
    else:
        print('C') if a3 > b3 else print('F')
else:
    print('C') if a > b else print('F')
