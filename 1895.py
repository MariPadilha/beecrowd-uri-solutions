alice = bob = 0
n, t, limite = input().split(' ')
for i in range(0, int(n)-1):
    s = int(input())
    if abs(int(t)-s) <= int(limite):
        if i % 2 == 0:
            alice += abs(int(t)-s)
        else:
            bob += abs(int(t)-s)
        t = s
print(alice, bob)
