primeiro_termo, ultimo_termo = map(int,input().split(" "))
print((primeiro_termo+ultimo_termo)*(ultimo_termo-primeiro_termo+1)//2)
