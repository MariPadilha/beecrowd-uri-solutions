h0, hf = input().split(' ')
h0 = int(h0)
hf = int(hf)
horatotal = hf - h0
if horatotal < 0:
    horatotal += 24
elif h0 == hf :
    horatotal = 24
print(f'O JOGO DUROU {horatotal} HORA(S)')
