var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var linha1 = lines.shift().split(" ")
var a = Number(linha1[0]);var b = Number(linha1[1]);var c = Number(linha1[2]);
var triangulo = (a * c)/2; var circulo = 3.14159 * c * c; var trapezio = c * (a + b) / 2; var quadrado = b * b; var retangulo = a * b;
console.log(`TRIANGULO: ${triangulo.toFixed(3)}
CIRCULO: ${circulo.toFixed(3)}
TRAPEZIO: ${trapezio.toFixed(3)}
QUADRADO: ${quadrado.toFixed(3)}
RETANGULO: ${retangulo.toFixed(3)}`);
