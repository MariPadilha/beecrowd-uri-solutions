const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let[a, b, c, d] = lines.shift().split(" ");
console.log(parseInt(a)+parseInt(b)+parseInt(c)+parseInt(d)-3);
