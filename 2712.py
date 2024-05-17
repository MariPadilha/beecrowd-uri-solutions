for i in range(0, int(input())):
    placa = input()
    if "-" in placa:
        letra, numero = placa.split("-")
        if len(letra) == 3 and len(numero) == 4 and str(letra).isupper() and str(numero).isnumeric():
            if int(numero[-1]) == 1 or int(numero[-1]) == 2:
                print('MONDAY')
            elif int(numero[-1]) == 3 or int(numero[-1]) == 4:
                print('TUESDAY')
            elif int(numero[-1]) == 5 or int(numero[-1]) == 6:
                print('WEDNESDAY')
            elif int(numero[-1]) == 7 or int(numero[-1]) == 8:
                print('THURSDAY')
            else:
                print('FRIDAY')

        else:
            print("FAILURE")

    else:
        print('FAILURE')
