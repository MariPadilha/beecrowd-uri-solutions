pibA, pibB = input().split(' ')
print(f'{((((1.0 + float(pibA)/100.00) * (1.0 + float(pibB)/100.00)) - 1.0) * 100.0):.6f}')
