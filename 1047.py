h0, m0, hf, mf = input().split(' ')
h0 = int(h0)
m0 = int(m0)
hf = int(hf)
mf = int(mf)
horatotal= hf - h0
minutototal = mf - m0
if minutototal < 0:
    minutototal+= 60
    horatotal -= 1
if horatotal < 0:
    horatotal += 24
elif h0 == hf == mf == m0:
    horatotal = 24
    minutototal = 0
print(f'O JOGO DUROU {horatotal} HORA(S) E {minutototal} MINUTO(S)')
