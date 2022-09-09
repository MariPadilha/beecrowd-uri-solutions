x = int(input())
y = x+1
while True:
    z = int(input())
    if z >= y:
        break
numeros = 1
for i in range(x+1, z+1):
    x += i
    numeros += 1
    if x >= z:
        break
print(numeros)
