a = int(input())
b = int(input())
bolinha = a * 2
if bolinha >= b:
  print('Amelia tem todas bolinhas!')
if bolinha < b:
  c = (b - bolinha) / 2
  print(f'Faltam {int(c)} bolinha(s)')
