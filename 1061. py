dia_i = input().split()
hora_i = input().split()
dia_f = input().split()
hora_f = input().split()
di, df = int(dia_i[1]), int(dia_f[1])
hi, mi, si = int(hora_i[0]), int(hora_i[2]), int(hora_i[4])
hf, mf, sf = int(hora_f[0]), int(hora_f[2]), int(hora_f[4])

minuto_seg = 60
hora_seg = minuto_seg * 60
dia_seg = hora_seg * 24
i = si + mi*minuto_seg + hi*hora_seg + di*dia_seg
f = sf + mf*minuto_seg + hf*hora_seg + df*dia_seg
if i < f:
    tempo = f - i
    dias = int(tempo/dia_seg)
    tempo = tempo%dia_seg
    horas = int(tempo/hora_seg)
    tempo = tempo%hora_seg
    minutos = int(tempo/minuto_seg)
    tempo = tempo%minuto_seg
    segundos = tempo
W = dias
X = horas
Y = minutos
Z = segundos

print(f'''{W} dia(s)
{X} hora(s)
{Y} minuto(s)
{Z} segundo(s)''')
