n1 = float(input())
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
n = n - valor1*1
valor050 = n // 0.50
n = n - valor050*0.50
valor025 = n // 0.25
n = n - valor025*0.25
valor010 = n // 0.10
n = n - valor010*0.10
valor05 = n // 0.05
n = n - valor05*0.05
print(f'''NOTAS:
{int(valor100)} nota(s) de R$ 100.00
{int(valor50)} nota(s) de R$ 50.00
{int(valor20)} nota(s) de R$ 20.00
{int(valor10)} nota(s) de R$ 10.00
{int(valor5)} nota(s) de R$ 5.00
{int(valor2)} nota(s) de R$ 2.00
MOEDAS:
{int(valor1)} moeda(s) de R$ 1.00
{int(valor050)} moeda(s) de R$ 0.50
{int(valor025)} moeda(s) de R$ 0.25
{int(valor010)} moeda(s) de R$ 0.10
{int(valor05)} moeda(s) de R$ 0.05
{(n*100):.0f} moeda(s) de R$ 0.01''')
