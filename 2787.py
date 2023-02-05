a1 = int(input())
a2 = int(input())
if a2 % 2 != 0:
    if a1 % 2 != 0:
        print(1)
    else:
        print(0)
if a2 % 2 == 0:
    if a1 % 2 != 0:
        print(0)
    else:
        print(1)
