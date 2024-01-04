for i in range(0, int(input())):
    n = int(input())
    if n < 2015:
        print(f"{2015-n} D.C.")
    elif n > 2015:
        print(f"{n-2014} A.C.")
    else:
        print("1 A.C.")
