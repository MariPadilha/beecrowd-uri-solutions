while True:
  numero_de_casos = int(input())
  if numero_de_casos == 0:
      break
  presentes = list(map(int, input().split(' ')))
  preco_max = presentes[0]+presentes[-1]
  preco_min = presentes[0]+presentes[-1]
  k = -2
  for i in range(1, numero_de_casos):
      if presentes[i]+presentes[k] > preco_max:
          preco_max = presentes[i]+presentes[k]
      elif presentes[i]+presentes[k] < preco_min:
          preco_min = presentes[i]+presentes[k]
      k-=1
  print(f'{preco_max} {preco_min}')
