for i in range(0, int(input())):
    conversao = input()
    r, g, b = map(int, input().split(' '))
    match conversao:
        case "min":
            print(f"Caso #{i+1}: {min(r,g,b)}")
        case "max":
            print(f"Caso #{i+1}: {max(r, g, b)}")
        case "mean":
            print(f"Caso #{i+1}: {(r+b+g)//3}")
        case "eye":
            print(f"Caso #{i+1}: {int(0.30*r + 0.59*g + 0.11*b)}")
