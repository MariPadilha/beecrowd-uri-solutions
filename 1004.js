var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n1 = Number(lines.shift());
var n2 = Number(lines.shift());
console.log(`PROD = ${n1*n2}`);
