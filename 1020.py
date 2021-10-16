n1 = int(input())
ano = n1 // 365
n1 = n1 - ano * 365
mes = n1 // 30
if mes >= 12:
    n1 = (n1 - mes * 30)
else:
    n1 = (n1 - mes * 30)
print(f'''{ano} ano(s)
{mes} mes(es)
{n1} dia(s)''')
