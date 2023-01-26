n = int(input())
v = input().split(" ")
pessoas = [int(x) for x in v]
print(pessoas.index(min(pessoas))+1)
