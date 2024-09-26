while True:
  try:
    lista = []
    for i in range(0, int(input())):
      lista += [input()]
    lista = sorted(lista)
    for j in range(0, len(lista)):
      print(lista[j])
  except EOFError:
    break
