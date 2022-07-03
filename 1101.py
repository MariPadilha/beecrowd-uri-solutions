m = []
a = soma = 0
total = []
sum = []
while True:
    pri, seg = input().split(' ')
    pri = int(pri); seg = int(seg)
    if pri <= 0 or seg <= 0:
        break
    m+=[pri, seg]
    total+=[m[:]]
    m.clear()
    a+=1
for i in range(0, a):
    if total[i][0]<total[i][1]:
        for k in range(total[i][0],total[i][1]+1):
            print(k,end=' ')
            soma+=k
    if total[i][1]<total[i][0]:
        for p in range(total[i][1],total[i][0]+1):
            print(p, end=' ')
            soma+=p
    sum+=[soma]
    print(f'Sum={sum[0]}')
    soma = 0; sum = []
