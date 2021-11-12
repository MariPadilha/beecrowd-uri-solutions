var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var alcool = 0; var gasolina = 0; var diesel = 0;
while(true){
    var n = Number(lines.shift());
    if(n === 4){
        break;}
    else if(n === 3){
        var diesel = diesel + 1}
    else if(n === 2){
        var gasolina = gasolina + 1}
    else if(n === 1){
        var alcool = alcool + 1}}
console.log(`MUITO OBRIGADO
Alcool: ${alcool}
Gasolina: ${gasolina}
Diesel: ${diesel}`);
