n = int(input())
for i in range(0, n):
    a = input()
    if a[0] == a[2]:
        print(int(a[0]) * int(a[2]))
    elif a[1].islower():
        print(int(a[0]) + int(a[2]))
    else:
        print(int(a[2]) - int(a[0]))

