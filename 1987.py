respostas = []
re = []
vezes = 0
while True:
  try:
      n, caso = input().split(' ')
      n = int(n)
      total = 0
      for i in range(0, n):
          total += int(caso[i])
      caso = int(caso)
      if caso % 3 == 0:
          re+=['sim']
      else:
          re+=['nao']
      re+=[total]
      respostas+=[re[:]]
      re.clear()
      vezes +=1
  except EOFError:
    break
for i in range(0, vezes):
    print(f'{respostas[i][0]} {respostas[i][0]}')
print(end='')
