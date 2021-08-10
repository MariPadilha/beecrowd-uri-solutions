a = int(input())
lista = []
vezes = 0
for i in range(0, a):
    sheldon, raj = input().split()
    if sheldon == 'tesoura' and raj == 'papel' or sheldon == 'papel' and raj == 'pedra' or sheldon == 'pedra' and raj == 'lagarto' or sheldon == 'lagarto' and raj == 'Spock' or sheldon == 'Spock' and raj == 'tesoura' or sheldon == 'tesoura' and raj == 'lagarto' or sheldon == 'lagarto' and raj == 'papel' or sheldon == 'papel' and raj == 'Spock' or sheldon == 'Spock' and raj == 'pedra' or sheldon == 'pedra' and raj == 'tesoura':
        lista += ['Bazinga!']
        vezes += 1
    if raj == 'tesoura' and sheldon == 'papel' or raj == 'papel' and sheldon == 'pedra' or raj == 'pedra' and sheldon == 'lagarto' or raj == 'lagarto' and sheldon == 'Spock' or raj == 'Spock' and sheldon == 'tesoura' or raj == 'tesoura' and sheldon == 'lagarto' or raj == 'lagarto' and sheldon == 'papel' or raj == 'papel' and sheldon == 'Spock' or raj == 'Spock' and sheldon == 'pedra' or raj == 'pedra' and sheldon == 'tesoura':
        lista += ['Raj trapaceou!']
        vezes += 1
    if sheldon == raj:
        lista += ['De novo!']
        vezes += 1

for j in range(0, vezes):
    print(f'Caso #{j+1}: {lista[j]}')
