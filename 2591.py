for i in range(0, int(input())):
    palavra = input()
    a = palavra[:palavra.index("me")]
    b = palavra[palavra.index("me"):]
    print("k"+("a"*(a.count("a")*b.count("a"))))
    palavra.index("me")
