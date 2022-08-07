n = int(input())
for i in range(0, n):
    a, b = input().split(' ')
    try:
        int(a) / int(b)
        print(f'{int(a) / int(b):.1f}')
    except:
        print('divisao impossivel')
