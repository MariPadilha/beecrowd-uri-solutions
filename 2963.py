lista = []
for i in range(0, int(input())):
    lista+=[int(input())]
print("S") if lista.index(max(lista)) == 0 else print("N")
