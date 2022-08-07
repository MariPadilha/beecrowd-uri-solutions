x = input().split(' ')
lista = [float(x[0])];lista+=[float(x[1])];lista+=[float(x[2])]
lista.sort(); a=lista[2];b = lista[1]; c=lista[0]
sinal = 0
if a >= b+c:
    print('NAO FORMA TRIANGULO')
    sinal = 1
if a**2 == b**2 + c**2 and sinal==0:
    print('TRIANGULO RETANGULO')
if a**2 > b**2 + c**2 and sinal==0:
    print('TRIANGULO OBTUSANGULO')
if a**2 < b**2 + c**2 and sinal==0:
    print('TRIANGULO ACUTANGULO')
if a==b==c and sinal==0:
    print('TRIANGULO EQUILATERO')
if a==b!=c or a==c!=b or b==c!=a and sinal==0:
    print('TRIANGULO ISOSCELES')
