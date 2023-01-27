const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split("\n");

let [a, b, c] = lines.shift().split(' ');
a = parseInt(a); b = parseInt(b); c = parseInt(c);
a == b || b == c || c == a || a+b == c || c+a == b || c+b == a ? console.log('S') : console.log('N');
