alcool = gasolina = diesel = 0
while True:
    n = int(input())
    if n == 4:
        break
    if n == 3:
        diesel += 1
    if n == 2:
        gasolina += 1
    if n == 1:
        alcool += 1
print(f'''MUITO OBRIGADO
Alcool: {alcool}
Gasolina: {gasolina}
Diesel: {diesel}''')
