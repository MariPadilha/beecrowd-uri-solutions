vezes = amigos = 0
while True:
    try:
        nome = input()
        n = int(input())
        amigos += n
        vezes += 1
    except EOFError:
        break
print(f'{amigos/vezes:.1f}')
