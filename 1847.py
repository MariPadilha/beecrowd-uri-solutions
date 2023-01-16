a, b, c = input().split()
a = int(a); b = int(b); c = int(c)
if b < a and c >= b:
    print(':)')
if b > a and c <= b:
    print(':(')
if b > a and c > b and c - b < b - a:
    print(':(')
if b > a and c > b and c - b >= b - a:
    print(':)')
if b < a and c < b and b - c < a - b:
    print(':)')
if b < a and c < b and b - c >= a - b:
    print(':(')
if a == b:
    if c > b:
        print(':)')
    else:
        print(':(')
