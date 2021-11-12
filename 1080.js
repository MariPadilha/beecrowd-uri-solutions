var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
let lista = []

for(var i = 0; i < 100; i++){
    var n = Number(lines.shift())
    lista.push(n)}
var m = Math.max.apply(Math, lista);
console.log(m)
var no = lista.indexOf(m)
console.log(no+1)
