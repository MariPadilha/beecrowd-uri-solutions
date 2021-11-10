par = impar = positivo = negativo = 0
for c in range(1,6):
    ca = int(input())
    if ca%2 == 0:
        par += 1
    elif ca&2 != 0:
        impar += 1
    if ca > 0:
        positivo += 1
    elif ca < 0:
        negativo += 1
print(f'''{par} valor(es) par(es)
{impar} valor(es) impar(es)
{positivo} valor(es) positivo(s)
{negativo} valor(es) negativo(s)''')
