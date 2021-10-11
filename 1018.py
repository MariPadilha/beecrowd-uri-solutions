n1 = int(input())
n = n1
valor100 = n // 100
n = n - valor100*100
valor50 = n // 50
n = n - valor50*50
valor20 = n // 20
n = n - valor20*20
valor10 = n // 10
n = n - valor10*10
valor5 = n // 5
n = n - valor5*5
valor2 = n // 2
n = n - valor2*2
valor1 = n // 1
print(f'''{n1}
{valor100} nota(s) de R$ 100,00
{valor50} nota(s) de R$ 50,00
{valor20} nota(s) de R$ 20,00
{valor10} nota(s) de R$ 10,00
{valor5} nota(s) de R$ 5,00
{valor2} nota(s) de R$ 2,00
{valor1} nota(s) de R$ 1,00''')
print(end='')
