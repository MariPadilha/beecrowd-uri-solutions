while True:
    try:
        palavra = input()
        if palavra == "esquerda":
            print("ingles")
        if palavra == "direita":
            print("frances")
        if palavra == "nenhuma":
            print("portugues")
        if palavra == "as duas":
            print("caiu")
    except EOFError:
        break
