n1 = int(input())
hora = n1 // 3600
n1 = n1 - hora*3600
minutos = n1 // 60
if minutos >= 60:
    n1 = (n1 - minutos*60)
else:
    n1 = (n1 - minutos * 60)
print(f"{hora}:{minutos}:{n1}")
