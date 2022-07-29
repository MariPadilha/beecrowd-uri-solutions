while True:
    try:
        m, n = input().split(' ')
        casa = 0
        for i in range(int(m), int(n)+1):
            if len(set(str(i))) == len(str(i)):
                casa+=1
        print(casa)
    except EOFError:
        break
