bonecos = arquitetos = musicos = desenhistas = 0
for i in range(0, int(input())):
    nome, area, horas = input().split(' ')
    if area == 'bonecos':
        bonecos += int(horas)
    if area == 'arquitetos':
        arquitetos += int(horas)
    if area == 'musicos':
        musicos += int(horas)
    if area == 'desenhistas':
        desenhistas += int(horas)
print(bonecos//8+arquitetos//4+musicos//6+desenhistas//12)
