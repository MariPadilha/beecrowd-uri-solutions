runas = {}
casos, derrotar_gollum = map(int, input().split(" "))
for i in range(0, casos):
    runa, valor = input().split(" ")
    novo = {runa:int(valor)}
    runas.update(novo)
n = int(input())
soma = 0
sam = input().split(' ')
for i in range(0, n):
    soma += (runas[sam[i]])
print(soma)
print("You shall pass!") if derrotar_gollum <= soma else print("My precioooous")
