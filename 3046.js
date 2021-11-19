var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var N = parseInt(lines.shift())
var h = ((N+1)*(N+2))/2
console.log(`${h.toFixed(0)}`)
