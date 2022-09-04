soma = 1
n = 2
for i in range(3, 40):
    if i % 2 != 0:
        soma += i/n
        n = n + n
print(f'{soma:.2f}')
