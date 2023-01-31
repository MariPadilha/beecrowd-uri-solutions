from datetime import timedelta
while True:
    a, b, c, d = input().split(" ")
    if int(a) == int(b) == int(c) == int(d) == 0:
        break
    minutos = timedelta(hours=int(c), minutes=int(d)) - timedelta(hours=int(a), minutes=int(b))
    print(minutos.seconds//60)
