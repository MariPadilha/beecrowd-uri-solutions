salario = float(input())
if salario < 400.01:
    percent = salario * (15/100)
    reajuste = salario + percent
    print(f'''Novo salario: {reajuste:.2f}
Reajuste ganho: {percent:.2f}
Em percentual: 15 %''')

elif salario < 800.01:
    percent = salario * (12/100)
    reajuste = salario + percent
    print(f'''Novo salario: {reajuste:.2f}
Reajuste ganho: {percent:.2f}
Em percentual: 12 %''')

elif salario < 1200.01:
    percent = salario * (10/100)
    reajuste = salario + percent
    print(f'''Novo salario: {reajuste:.2f}
Reajuste ganho: {percent:.2f}
Em percentual: 10 %''')

elif salario <= 2000:
    percent = salario * (7/100)
    reajuste = salario + percent
    print(f'''Novo salario: {reajuste:.2f}
Reajuste ganho: {percent:.2f}
Em percentual: 7 %''')

elif salario > 2000:
    percent = salario * (4/100)
    reajuste = salario + percent
    print(f'''Novo salario: {reajuste:.2f}
Reajuste ganho: {percent:.2f}
Em percentual: 4 %''')
