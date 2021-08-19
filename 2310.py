n = int(input())
nomes = []
a = b = c = saque = bloqueio = ataque = 0
for i in range(0, n):
    nome = input()
    nomes += [nome]
    S, B, A = input().split()
    S1, B1, A1 = input().split()
    S = int(S)
    a += S
    B = int(B)
    b += B
    A = int(A)
    c += A
    S1 = int(S1)
    saque += S1
    B1 = int(B1)
    bloqueio += B1
    A1 = int(A1)
    ataque += A1
persaque = (saque * 100.00) / a
perbloqueio = (bloqueio * 100.00) / b
perataque = (ataque * 100.00) / c
print(f'''Pontos de Saque: {persaque:.2f} %.
Pontos de Bloqueio: {perbloqueio:.2f} %.
Pontos de Ataque: {perataque:.2f} %.''')
