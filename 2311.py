for i in range(0, int(input())):
    nome = input()
    multiplicador = float(input())
    notas = list(map(float, input().split(' ')))
    notas.remove(max(notas))
    notas.remove(min(notas))
    print(f'{nome} {sum(notas)*multiplicador:.2f}')
