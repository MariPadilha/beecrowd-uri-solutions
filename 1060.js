var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var s = 0
for(var n1 = 1; n1 < 7; n1 = n1 + 1){
    var numero = Number(lines.shift());
    if(numero > 0){
        var s = s+1}}
console.log(`${s} valores positivos`);
