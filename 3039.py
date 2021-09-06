n = int(input())
masculino = feminino = 0
for i in range(0, n):
    h, b = input().split()
    if b == 'M':
        masculino += 1
    if b == 'F':
        feminino += 1
print(f'''{masculino} carrinhos
{feminino} bonecas''')
