n = input()
primeira = ''
segunda = ''
i = 0
while True:
    if n[i] != ',':
        primeira+=n[i]
    else:
        break
    i += 1
for l in range(n.index(',')+1, len(n)):
    segunda+=n[l]
print(primeira)
print(segunda)
