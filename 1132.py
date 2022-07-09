a = int(input())
b = int(input())
total = 0
for i in range(min(a,b),max(a,b)+1):
    if i %13!=0:
        total+=i
print(total)
