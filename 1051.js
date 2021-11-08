var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var salario = Number(lines.shift());
if (salario < 2000.01){
    console.log('Isento');}
else if (salario < 3000.01){
    var imposto = ((salario - 2000.0) * 0.08);
    console.log(`R$ ${imposto.toFixed(2)}`);}
else if (salario <= 4500){
    var imposto = (1000.0 * 0.08 + (salario - 3000.0) * 0.18);
    console.log(`R$ ${imposto.toFixed(2)}`);}
else if (salario > 4500){
    var imposto = (1000.0 * 0.08 + 1500.0 * 0.18 + (salario - 4500.0) * 0.28);
    console.log(`R$ ${imposto.toFixed(2)}`);}
