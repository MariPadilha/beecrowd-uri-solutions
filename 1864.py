a = int(input())
if a <= 34 and a >= 1:
    lista = ['L', 'I', 'F', 'E', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'A', ' ']
    lista += ['P', 'R', 'O', 'B', 'L', 'E', 'M', ' ', 'T', 'O', ' ', 'B', 'E']
    lista += [' ', 'S', 'O', 'L', 'V', 'E', 'D']
    for i in range(0, a):
        print(f'{lista[i]}', end='')
print()
