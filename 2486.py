while True:
    casos = int(input())
    if casos == 0:
        break
    mg = 0
    for i in range(0, casos):
        n = input()
        numero = int(n[:n.index(" ")])
        fruta = n[n.index(" ")+1:]
        match fruta:
            case "suco de laranja":
                mg += numero*120

            case "morango fresco":
                mg += numero*85

            case "mamao":
                mg += numero*85

            case "goiaba vermelha":
                mg += numero*70

            case "manga":
                mg += numero*56

            case "laranja":
                mg += numero*50

            case "brocolis":
                mg += numero*34
    if mg > 130:
        print(f"Menos {mg-130} mg")
    elif mg >= 110:
        print(f"{mg} mg")
    else:
        print(f"Mais {110-mg} mg")
