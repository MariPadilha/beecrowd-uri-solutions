for i in range(0, int(input())):
    jogador1 = input()
    jogador2 = input()
    if jogador1 == "ataque" or jogador2 == "ataque":
        if jogador1 == jogador2:
            print("Aniquilacao mutua")
        else:
            print("Jogador 1 venceu") if jogador1 == "ataque" else print("Jogador 2 venceu")
    elif jogador1 == "pedra" or jogador2 == "pedra":
        if jogador1 == jogador2:
            print("Sem ganhador")
        else:
            print("Jogador 1 venceu") if jogador1 == "pedra" else print("Jogador 2 venceu")
    else:
        print("Ambos venceram")
