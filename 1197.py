lista = []
vezes = 0
while True:
  try:
    a, b = input().split()
    a = int(a)
    b = int(b)
    c = (a * b) * 2
    lista += [c]
    vezes += 1
  except EOFError:
    break
for i in range(0, vezes):
    print(f'{lista[i]}')
