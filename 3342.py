n = int(input())
if n%2==0:
     brancas = int(n*n/2)
     pretas = int(n*n/2)
     print(f'{brancas} casas brancas e {pretas} casas pretas')
if n%2!=0:
     pretas = int(n*n/2)
     brancas = pretas+1
     print(f'{brancas} casas brancas e {pretas} casas pretas')
