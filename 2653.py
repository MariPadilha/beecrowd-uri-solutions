lista = []
while True:
  try:
    n = input()
    if n not in lista:
      lista += [n]
  except EOFError:
    break
print(len(lista))
