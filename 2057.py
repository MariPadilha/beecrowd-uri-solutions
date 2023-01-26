horarios = input().split(" ")
fuso = 0
for x in horarios:
    fuso += int(x)
if fuso < 0:
    fuso = 24 - abs(fuso)
if fuso > 24:
    fuso = fuso - 24
print(fuso)
