lista = []
s = 0
while True:
  try:
    N = int(input())
    if 0 <= N <= 100:
        if N == 0:
            lista += ['vai ter copa!']
        elif N > 0:
            lista += ['vai ter duas!']
    s += 1
  except EOFError:
    break
for d in range(0, s):
    print(lista[d])
