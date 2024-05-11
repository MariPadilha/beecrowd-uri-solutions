renas = list(map(int, input().split(' ')))
resto = sum(renas)%9
match resto:
    case 0:
        print('Rudolph')
    case 1:
        print('Dasher')
    case 2:
        print('Dancer')
    case 3:
        print('Prancer')
    case 4:
        print('Vixen')
    case 5:
        print('Comet')
    case 6:
        print('Cupid')
    case 7:
        print('Donner')
    case 8:
        print('Blitzen')
