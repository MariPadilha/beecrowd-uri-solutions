while True:
    try:
        lista = []
        for i in range(0, 10):
            lista+=[input()]
        print(lista[2])
        print(lista[6])
        print(lista[8])
    except EOFError:
        break
