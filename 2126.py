contador = 0
while True:
    try:
        sequencia = input()
        frase = input()
        if sequencia in frase:
            contador+=1
            print(f"""Caso #{contador}:
Qtd.Subsequencias: {frase.count(sequencia)}
Pos: {frase.rindex(sequencia)+1}""")
        else:
            contador+=1
            print(f"""Caso #{contador}:
Nao existe subsequencia""")
        print("")
    except EOFError:
        break
