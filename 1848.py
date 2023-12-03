lista = []
vezes = 0
soma = 0
while True:
    n = input()
    if n == 'caw caw':
        vezes += 1
        lista+=[soma]
        soma = 0
    else:
        if n[0] == '*' and n[1] == '-' and n[2] == '-':
            soma += 4
        elif n[0] == '-' and n[1] == '-' and n[2] == '*':
            soma += 1
        elif n[0] == '*' and n[1] == '*' and n[2] == '*':
            soma += 7
        elif n[0] == '*' and n[1] == '-' and n[2] == '*':
            soma += 5
        elif n[0] == '*' and n[1] == '*' and n[2] == '-':
            soma += 6
        elif n[0] == '-' and n[1] == '*' and n[2] == '*':
            soma += 3
    if vezes == 3:
        break
print(f'''{lista[0]}
{lista[1]}
{lista[2]}''')
