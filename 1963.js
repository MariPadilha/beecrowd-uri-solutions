const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let [a, b] = lines.shift().split(" ");
console.log(`${Math.abs(((parseFloat(a)-parseFloat(b))*100.0/parseFloat(a))).toFixed(2)}%`);
