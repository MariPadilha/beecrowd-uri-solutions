lista = []
conteudo = False
while True:
    try:
        comando = input()
        if "<body>" in comando or "</body>" in comando:
            conteudo = not(conteudo)
        elif conteudo:
            lista+=[comando]
    except EOFError:
        break
for i in lista:
    print(i)
