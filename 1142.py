n = int(input())
vezes = 0
g = 1
while True:
  for i in range(g, g+3):
    print(f'{i} ',end='')
  print('PUM')
  g += 4
  vezes += 1
  if vezes == n:
    break
