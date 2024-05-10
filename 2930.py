dia_entregue, data_limite = map(int, input().split(' '))
if dia_entregue > data_limite:
    print('Eu odeio a professora!')
elif data_limite - dia_entregue >= 3:
    print('Muito bem! Apresenta antes do Natal!')
else:
    print('Parece o trabalho do meu filho!')
    if data_limite + 2 <= 24:
        print('TCC Apresentado!')
    else:
        print('Fail! Entao eh nataaaaal!')
