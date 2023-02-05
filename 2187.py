vezes = 1
while True:
    n = int(input())
    if n == 0:
        break
    i = n//50
    n50 = n - i*50
    j = n50//10
    n10 = n50 - j*10
    k = n10//5
    n5 = n10 - k*5
    l = n5
    print(f'''Teste {vezes}
{i} {j} {k} {l}
''')
    vezes+=1
