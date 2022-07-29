vezes = 0; pares = [];masc=femi=0; lista = []; a = []; casos = []; c = []
while True:
  try:
      n = int(input())
      vezes += 1
      sapatos = input().split(' ')
      for i in range(0, len(sapatos)):
          if i % 2 == 0:
              a+=[sapatos[i]]
          elif i % 2 != 0:
              a+=[sapatos[i]]
              lista+=[a[:]]
              a.clear()
      for k in range(0, len(lista)):
          if lista[k][0] == str(n):
              pares+=[lista[k][1]]
      c+=[len(pares)]
      for p in pares:
          if p == 'M':
              masc+=1
          elif p == 'F':
              femi+=1
      c+=[femi]
      c+=[masc]
      casos+=[c[:]]
      pares.clear();c.clear();lista.clear();masc=0;femi=0
  except EOFError:
      break
for j in range(0, vezes):
    if j == vezes-1:
        print(f'''Caso {j+1}:
Pares Iguais: {casos[j][0]}
F: {casos[j][1]}
M: {casos[j][2]}''')
    else:
        print(f'''Caso {j + 1}:
Pares Iguais: {casos[j][0]}
F: {casos[j][1]}
M: {casos[j][2]}
''')
