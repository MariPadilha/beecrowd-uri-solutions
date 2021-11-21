var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var a = Number(lines.shift())
let lista = []
for(var i = 0;i < a; i++){
    var g = Number(lines.shift())
    if(g > 8000){
        lista.push('Mais de 8000!')}
    else{
        lista.push('Inseto!')}}
for(var h = 0;h < a; h++){
    console.log(`${lista[h]}`)}
