var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var vezes = 0
var lista = 0
while(true){
    a = Number(lines.shift())
    if(a < 0){
        break;}
    var lista = lista + a
    var vezes = vezes + 1}
var c = lista / vezes
console.log(`${c.toFixed(2)}`)
