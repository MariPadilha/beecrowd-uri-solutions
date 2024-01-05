vezes = 1
while True:
  try:
      lista = [0]
      n = int(input())
      for i in range(1, n+1):
          if i == 1:
              lista += [1]
          else:
              for j in range(0, i):
                lista += [i]
      print(f"Caso {vezes}: {len(lista)} numero") if len(lista) == 1 else print(f"Caso {vezes}: {len(lista)} numeros")
      for m in range(0, len(lista)):
          if m == len(lista) - 1:
              print(lista[m])
          else:
            print(lista[m], end=' ')
      vezes += 1
      print()
  except EOFError:
    break
