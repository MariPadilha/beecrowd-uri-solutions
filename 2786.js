var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var a = Number(lines.shift())
var b = Number(lines.shift())
var piso1 = (a*b)+((a-1)*(b-1))
var piso2 = ((a-1)*2) + ((b-1)*2)
console.log(`${piso1}
${piso2}`)
