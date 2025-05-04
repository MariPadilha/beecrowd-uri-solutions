for i in range(0, int(input())):
    a, b = input().split(" ")
    str = ""
    menor = min(len(a), len(b))
    for i in range(0, menor):
        str+=a[i]
        str+=b[i]
    if len(a) > len(b):
        maior = a
    else:
        maior = b
    print(str + maior[menor:])
