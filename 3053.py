movimentos = int(input())
posicao_moeda = input()
for i in range(0, movimentos):
    movimento = int(input())
    if movimento == 1:
        if posicao_moeda == 'A':
            posicao_moeda = 'B'
        elif posicao_moeda == 'B':
            posicao_moeda = 'A'
    elif movimento == 2:
        if posicao_moeda == 'B':
            posicao_moeda = 'C'
        elif posicao_moeda == 'C':
            posicao_moeda = 'B'
    else:
        if posicao_moeda == 'A':
            posicao_moeda = 'C'
        elif posicao_moeda == 'C':
            posicao_moeda = 'A'
print(posicao_moeda)
