n = int(input())
f = 0
ratos = coelho = sapo = 0
for i in range(0, n):
    numero, classi = input().split()
    numero = int(numero)
    f += numero
    if classi == "R":
        ratos += numero
    if classi == 'C':
        coelho += numero
    if classi == 'S':
        sapo += numero
porcentR = ratos * 100.0
porcentR = porcentR / f
porcentC = coelho * 100.0
porcentC = porcentC / f
porcentS = sapo * 100.0
porcentS = porcentS / f
print(f'''Total: {f} cobaias
Total de coelhos: {coelho}
Total de ratos: {ratos}
Total de sapos: {sapo}
Percentual de coelhos: {porcentC:.2f} %
Percentual de ratos: {porcentR:.2f} %
Percentual de sapos: {porcentS:.2f} %''')
