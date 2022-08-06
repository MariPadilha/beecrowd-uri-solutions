alunos = 0
n = int(input())
a = input().split(' ')
for i in range(0, n):
    alunos += int(a[i])-(int(a[i])%3)
print(alunos)
