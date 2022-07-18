n = int(input())
if n == 1:
    print('Top 1')
elif n < 4:
    print('Top 3')
elif n < 6:
    print('Top 5')
elif n < 11:
    print('Top 10')
elif n < 26:
    print('Top 25')
elif n < 51:
    print('Top 50')
else:
    print('Top 100')
