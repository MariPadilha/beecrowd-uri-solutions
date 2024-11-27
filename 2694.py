for i in range(0, int(input())):
    soma = 0; str = '';
    n = input()
    str+=n[2]; str+=n[3]
    soma+=int(str); str = ''
    str+=n[5]; str+=n[6]; str+=n[7]
    soma+=int(str); str = ''
    str+=n[11]; str+=n[12]
    soma+=int(str)
    print(soma)
