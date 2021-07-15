ossos = input()
animal = input()
alimento = input()
if ossos == 'vertebrado':
    if animal == 'ave':
        if alimento == 'carnivoro':
            print('aguia')
        elif alimento == 'onivoro':
            print('pomba')
    elif animal == 'mamifero':
        if alimento == 'onivoro':
            print('homem')
        elif alimento == 'herbivoro':
            print('vaca')

elif ossos == 'invertebrado':
    if animal == 'inseto':
        if alimento == 'hematofago':
            print('pulga')
        elif alimento == 'herbivoro':
            print('lagarta')
    elif animal == 'anelideo':
        if alimento == 'hematofago':
            print('sanguessuga')
        elif alimento == 'onivoro':
            print('minhoca')
