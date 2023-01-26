const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let [a, b] = lines.shift().split(" ");
console.log(`${(parseInt(a)/parseInt(b)).toFixed(2)}`);
