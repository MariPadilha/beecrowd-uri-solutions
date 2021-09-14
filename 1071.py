x = int(input())
y = int(input())
maior = x if x > y else y
menor = y if y < x else x
menor += 1
soma = 0
while (menor < maior):
    if(menor % 2 != 0):
        soma += menor
    menor += 1
print(soma)
