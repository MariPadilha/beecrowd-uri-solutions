a, b = map(int, input().split(' '))
h = 0
f = 0
if a < 0 and b < 0:
    if b < a:
        print(f'{1} {abs(b*1)+a}')
    else:
        if a/b > round(a/b):
            h = 1
        h += a//b
        f = abs(b*h)+a
        if h == 23 and f == -40:
            h = 24; f = 1
        print(f'{h} {f}')
elif b < 0:
    h = int(a/b)
    f = abs(a) % abs(b)
    if h == 23 and f == -40:
        h = 24; f = 1
    print(f'{h} {f}')
else:
    h = a//b
    f = a % b
    if h == 23 and f == -40:
        h = 24; f = 1
    print(f'{h} {f}')
