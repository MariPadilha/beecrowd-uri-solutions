n = input()
h = 0
a = 0
if "." in n:
    if '-' in n and n[1] == '0' or '-' not in n and n[0] == '0' or '+' in n and n[1] == '0':
        for i in range(0, len(n)):
            if n[i] != '.' and n[i] != '-' and n[i] != '0' and n[i] != '+':
                a = i
                break
        if len(n) - (a+1) < 4:
            for i in range(0, 5):
                n += '0'
                if len(n) - (a+1) == 4:
                    break
        if a-2 < 10:
            print(f'-{n[a]}.{n[a + 1:a + 5]}E-0{a - 2}') if '-' in n else print(f'+{n[a]}.{n[a + 1:a + 5]}E-0{a - 1}')
        else:
            print(f'-{n[a]}.{n[a+1:a+5]}E-{a-2}') if '-' in n else print(f'+{n[a]}.{n[a+1:a+5]}E-{a-1}')
    else:
        print(f'{float(n):.4f}E+00') if '-' in n else print(f'+{float(n):.4f}E+00')
else:
    if '-' in n and len(n) < 12 or '-' not in n and len(n) < 11:
        if len(n) < 6:
            if '-' in n:
                h = len(n) - 2
                for i in range(0, 5):
                    n += '0'
                    if len(n) == 6:
                        break
            else:
                h = len(n) - 1
                for i in range(0, 5):
                    n += '0'
                    if len(n) == 5:
                        break
        else:
            if '-' in n:
                h = len(n)-2
            else:
                h = len(n)-1
        print(f'-{n[1]}.{n[2:6]}E+0{h}') if '-' in n else print(f'+{n[0]}.{n[1:5]}E+0{h}')
    else:
        print(f'-{n[1]}.{n[2:6]}E+{len(n)-2}') if '-' in n else print(f'+{n[0]}.{n[1:5]}E+{len(n)-1}')
