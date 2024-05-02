for i in range(0, int(input())):
    altura, diametro, galhos = map(int, input().split(" "))
    if 300 >= altura >= 200 and diametro >= 50 and galhos >= 150:
        print("Sim")
    else:
        print("Nao")
