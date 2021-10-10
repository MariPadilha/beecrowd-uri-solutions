a, b, c = input().split(" ")
triangulo = (float(a) * float(c))/2
circulo = 3.14159 * (float(c)* float(c))
trapezio = float(c) *(float(a) + float(b)) / 2
quadrado = float(b) * float(b)
retangulo = float(a) * float(b)
print(f'''TRIANGULO: {triangulo:.3f}
CIRCULO: {circulo:.3f}
TRAPEZIO: {trapezio:.3f}
QUADRADO: {quadrado:.3f}
RETANGULO: {retangulo:.3f}''')
