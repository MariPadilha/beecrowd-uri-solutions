a1, b1, c1 = map(int, input().split(" "))
a2, b2, c2 = map(int, input().split(" "))
soma = 0
if a2 > a1:
  soma += a2-a1
if b2 > b1:
  soma += b2-b1
if c2 > c1:
  soma += c2-c1
print(soma)
