ontem, hj = input().split(' ')
ontem = int(ontem); hj = int(hj)
if hj < 3:
    print('nova')
elif 3 <= hj < 97:
    if ontem < hj:
        print('crescente')
    else:
        print('minguante')
else:
    print('cheia')
