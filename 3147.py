a, b, c, d, e, f = input().split()
a = int(a)
b = int(b)
c = int(c)
d = int(d)
e = int(e)
f = int(f)
bem = a + b + c + f
mal = d + e
if bem > mal or bem == mal:
    print('Middle-earth is safe.')
if bem < mal:
    print('Sauron has returned.')
