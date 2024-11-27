for i in range(0, int(input())):
    soma = 0
    n = input().lower()
    for j in range(0, len(n)):
        if soma >= 3:
            break
        if n[j] != 'a' and n[j] != 'e' and n[j] != 'i' and n[j] != 'o' and n[j] != 'u':
            soma += 1
        else:
            soma = 0
    print(f'{n.capitalize()} nao eh facil') if soma >= 3 else print(f'{n.capitalize()} eh facil')
