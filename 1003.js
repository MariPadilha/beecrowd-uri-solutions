const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let n1 = Number(lines.shift());
let n2 = Number(lines.shift());
console.log(`SOMA = ${n1+n2}`);
