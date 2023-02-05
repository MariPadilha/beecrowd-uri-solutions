const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split("\n");
console.log(parseInt(lines.shift())-parseInt(lines.shift()))
