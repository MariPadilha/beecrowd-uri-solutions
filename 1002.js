const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let n1 = Number(lines.shift());
let area = 3.14159 * n1 ** 2;
console.log(`A=${area.toFixed(4)}`);
