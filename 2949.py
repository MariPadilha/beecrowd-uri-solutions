n = int(input())
hobbit = humano = elfo = anao = mago = 0
for i in range(0, n):
    h, b = input().split()
    if b == 'X':
        hobbit += 1
    if b == 'H':
        humano += 1
    if b == 'E':
        elfo += 1
    if b == 'A':
        anao += 1
    if b == 'M':
        mago += 1
print(f'''{hobbit} Hobbit(s)
{humano} Humano(s)
{elfo} Elfo(s)
{anao} Anao(s)
{mago} Mago(s)''')
