while True:
  try:
      horario = input()
      hora = int(horario[0])
      minuto = int(horario[2:])
      soma = 0
      minuto+=60
      if minuto >= 60:
          hora+=1
          minuto = minuto-60
      if hora > 8:
          soma += 60*(hora-8)
      if hora >= 8 and minuto > 0:
          soma += minuto
      print(f"Atraso maximo: {soma}")
  except EOFError:
    break
