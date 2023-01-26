n1, n2, n3, n4 = input().split(" ")
n1 = int(n1); n2 = int(n2); n3 = int(n3); n4 = int(n4)
if n1 < n2 + n3 and n2 < n1 + n3 and n3 < n1 + n2:
    print('S')
elif n1 < n2 + n4 and n2 < n1 + n4 and n4 < n1 + n2:
    print('S')
elif n1 < n3 + n4 and n3 < n1 + n4 and n4 < n1 + n3:
    print('S')
elif n2 < n3 + n4 and n3 < n2 + n4 and n4 < n2 + n3:
    print('S')
else:
    print('N')
