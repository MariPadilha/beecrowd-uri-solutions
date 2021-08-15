n = input()
k = n.count('1')
if k % 2 == 0:
    print(f'{n}0')
if k % 2 != 0:
    print(f'{n}1')
