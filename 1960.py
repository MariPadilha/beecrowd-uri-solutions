n = int(input())
numero = ''
if n >= 900 and n <= 999:
    numero += 'CM'
    n -= 900
if n >= 800 and n <= 899:
    numero += 'DCCC'
    n -= 800
if n >= 700 and n <= 799:
    numero += 'DCC'
    n -= 700
if n >= 600 and n <= 699:
    numero += 'DC'
    n -= 600
if n >= 500 and n <= 599:
    numero += 'D'
    n -= 500
if n >= 400 and n <= 499:
    numero += 'CD'
    n -= 400
if n >= 300 and n <= 399:
    numero += 'CCC'
    n -= 300
if n >= 200 and n <= 299:
    numero += 'CC'
    n -= 200
if n >= 100 and n <= 199:
    numero += 'C'
    n -= 100
if n >= 90 and n <= 99:
    numero += 'XC'
    n -= 90
if n >= 80 and n <= 89:
    numero += 'LXXX'
    n -= 80
if n >= 70 and n <= 79:
    numero += 'LXX'
    n -= 70
if n >= 60 and n <= 69:
    numero += 'LX'
    n -= 60
if n >= 50 and n <= 59:
    numero += 'L'
    n -= 50
if n >= 40 and n <= 49:
    numero += 'XL'
    n -= 40
if n >= 30 and n <= 39:
    numero += 'XXX'
    n -= 30
if n >= 20 and n <= 29:
    numero += 'XX'
    n -= 20
if n >= 10 and n <= 19:
    numero += 'X'
    n -= 10
if n == 9:
    numero += 'IX'
if n == 8:
    numero += 'VIII'
if n == 7:
    numero += 'VII'
if n == 6:
    numero += 'VI'
if n == 5:
    numero += 'V'
if n == 4:
    numero += 'IV'
if n == 3:
    numero += 'III'
if n == 2:
    numero += 'II'
if n == 1:
    numero += 'I'
print(numero)
