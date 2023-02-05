while True:
    try:
        n, id = input().split(' ')
        soma = 0
        for i in range(0, int(n)):
            ID, escolha = input().split(' ')
            if id == ID and escolha == '0':
                soma+=1
        print(soma)
    except EOFError:
        break
