vitoria = 0
for i in range(0, int(input())):
    a = input()
    vitoria += 1
    if 'CD' in a:
        vitoria-=1
print(vitoria)
