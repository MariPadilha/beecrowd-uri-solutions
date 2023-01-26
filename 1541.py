from math import sqrt
while True:
    n = input().split(' ')
    if n[0] == '0':
        break
    print(int(sqrt(int(n[0])*int(n[1])*100/int(n[2]))))
