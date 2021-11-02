n1, n2, n3, n4 = input().split(' ')
n1 = float(n1)
n2 = float(n2)
n3 = float(n3)
n4 = float(n4)
media = ((n1*2.0) + (n2*3.0) + (n3*4.0) + (n4*1.0))/10.0
if media >= 7:
    print(f'''Media: {media:.1f}
Aluno aprovado.''')
if media < 5:
    print(f'''Media: {media:.1f}
Aluno reprovado.''')
if 5 <= media <= 6.9:
    exame = float(input())
    print(f'''Media: {media:.1f}
Aluno em exame.
Nota do exame: {exame:.1f}''')
    nota = (media+exame)/2
    if nota >= 5:
        print(f'''Aluno aprovado.
Media final: {nota:.1f}''')
    else:
        print(f'''Aluno reprovado.
Media final: {nota:.1f}''')
