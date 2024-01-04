while True:
  try:
    volume = float(input())
    raio = float(input())/2
    altura = volume/(3.14*raio**2)
    print(f"""ALTURA = {altura:.2f}
AREA = {3.14*(raio**2):.2f}""")
  except EOFError:
    break
