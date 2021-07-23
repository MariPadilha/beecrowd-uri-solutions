M = int(input())
A = int(input())
B = int(input())
D = []
if 40 <= M <= 110 and 1 <= A < M and 1 <= B < M and A != B:
    C = M - (A + B)
    D += [A, B, C]
    print(max(D))
