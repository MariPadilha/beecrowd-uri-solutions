for i in range(0, int(input())):
    hora, min, porta = input().split(' ')
    if len(hora) == 1 or len(min) == 1:
        if len(hora) == 2:
            print(f"{hora}:0{min}",end=' ')
        elif len(min) == 2:
            print(f"0{hora}:{min}",end=' ')
        else:
            print(f"0{hora}:0{min}",end=' ')
    else:
        print(f"{hora}:{min}", end=' ')
    print("- A porta abriu!") if porta == "1" else print('- A porta fechou!')
