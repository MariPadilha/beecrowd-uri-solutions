gremio = inter = empate = vezes = 0
vez = 1
j = 'oi'
while True:
    a, b = input().split()
    a = int(a)
    b = int(b)
    if a > b:
        inter += 1
    if a < b:
        gremio += 1
    if a == b:
        empate += 1
    vezes += 1
    escolha = input()
    if escolha == '1':
        vez += 1
    if escolha == '2':
        break
for i in range(0, vez):
    print('Novo grenal (1-sim 2-nao)')
if inter > gremio and inter > empate:
    j = 'Inter'
if gremio > inter and gremio > empate:
    j = 'Gremio'
if empate > gremio and empate > inter:
    j = 'Nao houve vencedor'
print(f'''{vezes} grenais
Inter:{inter}
Gremio:{gremio}
Empates:{empate}
{j} venceu mais''')
