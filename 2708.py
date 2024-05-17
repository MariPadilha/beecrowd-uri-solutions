jipes = 0
pessoas = 0
while True:
    n = input().split(" ")
    if n[0] == "ABEND":
        break
    if n[0] == "SALIDA":
        jipes+=1
        pessoas+=int(n[1])
    else:
        jipes -= 1
        pessoas -= int(n[1])
print(pessoas)
print(jipes)
