var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var s = 0
var m = 0
for(var c = 1; c < 7; c++){
    ca = Number(lines.shift());
    if (ca > 0){
        var s = s + 1
        var m = m + ca}}
console.log(`${s} valores positivos
${(m/s).toFixed(1)}`)
