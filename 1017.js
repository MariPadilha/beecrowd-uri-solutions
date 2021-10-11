var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n1 = lines.shift();
var n2 = lines.shift();
console.log(`${(n1 * n2 / 12).toFixed(3)}`)
