album = int(input())
pacotes = int(input())
figs = []
for i in range(0, pacotes):
    figs+=[int(input())]
figs = len(set(figs))
print(album-figs)
