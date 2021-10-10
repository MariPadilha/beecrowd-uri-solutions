var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n1 = Number(lines.shift());
var n2 = Number(lines.shift());
var n3 = Number(lines.shift());
console.log(`MEDIA = ${(((n1 * 2)+(n2 * 3)+(n3 * 5))/10).toFixed(1)}`);
