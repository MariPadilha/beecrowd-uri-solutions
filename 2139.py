while True:
  try:
    mes, dia = map(int,input().split(" "))
    soma = 0
    meses = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30]
    if mes == 12:
      if dia > 25:
        print('Ja passou!')
      else:
        print('E natal!') if dia == 25 else print('E vespera de natal!')
    else:
      for i in range(mes, 11):
        soma += meses[i]
      print(f'Faltam {soma+25+(meses[mes-1]-dia)} dias para o natal!')
  except EOFError:
    break
