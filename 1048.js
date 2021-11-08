var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var salario = Number(lines.shift());

if (salario < 400.01){
    var percent = salario * (15.00/100.00)
    var reajuste = salario + percent
    console.log(`Novo salario: ${reajuste.toFixed(2)}
Reajuste ganho: ${percent.toFixed(2)}
Em percentual: 15 %`)}

else if (salario < 800.01){
    var percent = salario * (12.00/100.00)
    var reajuste = salario + percent
    console.log(`Novo salario: ${reajuste.toFixed(2)}
Reajuste ganho: ${percent.toFixed(2)}
Em percentual: 12 %`)}

else if (salario < 1200.01){
    var percent = salario * (10.00/100.00)
    var reajuste = salario + percent
    console.log(`Novo salario: ${reajuste.toFixed(2)}
Reajuste ganho: ${percent.toFixed(2)}
Em percentual: 10 %`)}

else if (salario <= 2000){
    var percent = salario * (7.00/100.00)
    var reajuste = salario + percent
    console.log(`Novo salario: ${reajuste.toFixed(2)}
Reajuste ganho: ${percent.toFixed(2)}
Em percentual: 7 %`)}

else if (salario > 2000){
    percent = salario * (4/100)
    reajuste = salario + percent
    console.log(`Novo salario: ${reajuste.toFixed(2)}
Reajuste ganho: ${percent.toFixed(2)}
Em percentual: 4 %`)}
