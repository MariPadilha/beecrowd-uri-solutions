a = input().split(' ')
b = input().split(' ')
for i in range(0, 5):
    if a[i] == b[i]:
        print('N')
        break
    elif i == 4:
        print('Y')
