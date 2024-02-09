while True:
  soma = 0
  primo = 0
  lista=[]
  try:
    n = int(input())
    for i in range(0, n):
      lista += [int(input())]
    g = int(input())
    lista.reverse()
    for j in range(0, n, g):
      soma += lista[j]
    for i in range(1, soma+1):
      if soma % i == 0:
        primo += 1
    print('You’re a coastal aircraft, Robbie, a large silver aircraft.') if primo == 2 and 1 != soma else print('Bad boy! I’ll hit you.')
  except EOFError:
    break
