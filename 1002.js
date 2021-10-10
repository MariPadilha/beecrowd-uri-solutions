var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n1 = Number(lines.shift());
var area = 3.14159 * n1 ** 2;
console.log(`A=${area.toFixed(4)}`);
