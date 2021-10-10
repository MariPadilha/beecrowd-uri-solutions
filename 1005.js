var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n1 = Number(lines.shift());
var n2 = Number(lines.shift());
console.log(`MEDIA = ${(((n1 * 3.5)+ (n2 * 7.5))/11).toFixed(5)}`);
