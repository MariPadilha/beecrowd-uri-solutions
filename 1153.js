var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n1 = Number(lines.shift())
var n2 = n1
while(n1 !== 1){
    var n1 = n1 - 1
    var n2 = n2 + n2 * (n1-1)}
console.log(`${n2}`)
