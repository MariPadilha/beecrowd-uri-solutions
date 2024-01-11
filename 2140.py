while True:
  a, b = map(int, input().split(" "))
  nota = 0
  if a == b == 0:
    break
  if 4 > b - a or b - a > 200:
    print('impossible')
  if b - a == 100 or b - a == 20 or b - a == 10:
    print('possible')
  else:
    h = b - a
    valor100 = h//100
    nota+= valor100
    h -= valor100*100

    valor50 = h // 50
    nota += valor50
    h -= valor50 * 50

    valor20 = h // 20
    nota += valor20
    h -= valor20 * 20

    valor10 = h // 10
    nota += valor10
    h -= valor10 * 10

    valor5 = h // 5
    nota += valor5
    h -= valor5 * 5

    valor2 = h // 2
    nota += valor2
    h -= valor2 * 2
  if nota == 2:
    print('possible')
