var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var linha1 = lines.shift().split(" ");
var a = Number(linha1[0]); var b = Number(linha1[1]); var c = Number(linha1[2]);
var maior = (a + b + Math.abs(a - b)) / 2;
var resultado = (maior + c + Math.abs(maior - c)) / 2;
var resultado = Number(resultado);
console.log(`${resultado} eh o maior`);
