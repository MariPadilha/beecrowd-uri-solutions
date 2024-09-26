for i in range(0, int(input())):
    palavra = input()
    metadeA = palavra[:len(palavra)//2]
    metadeB = palavra[len(palavra)//2:]
    print(metadeA[::-1]+metadeB[::-1])
