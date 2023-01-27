j1, n1, n2, r, a = input().split(' ')
soma = int(n1)+int(n2)
if soma % 2 == 0:
    if j1 == '1':
        if r == '1' and a == '1':
            print('Jogador 2 ganha!')
        else:
            print('Jogador 1 ganha!')
    if j1 == '0':
        if r == '0':
            if a == '1':
                print('Jogador 1 ganha!')
            else:
                print('Jogador 2 ganha!')
        if r == '1':
            if a == '0':
                print('Jogador 1 ganha!')
            else:
                print('Jogador 2 ganha!')
if soma % 2 != 0:
    if j1 == '0':
        if r == '1' and a == '1':
            print('Jogador 2 ganha!')
        else:
            print('Jogador 1 ganha!')

    if j1 == '1':
        if r == '0':
            if a == '1':
                print('Jogador 1 ganha!')
            else:
                print('Jogador 2 ganha!')
        if r == '1':
            if a == '0':
                print('Jogador 1 ganha!')
            else:
                print('Jogador 2 ganha!')
