while True:
    try:
        n = int(input())
        if n == 360 or 90 > n > -1:
            print('Bom Dia!!')
        elif 180 > n >= 90:
            print('Boa Tarde!!')
        elif 270 > n >= 180:
            print('Boa Noite!!')
        else:
            print('De Madrugada!!')
    except EOFError:
        break
