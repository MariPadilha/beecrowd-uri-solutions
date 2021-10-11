var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n1 = lines.shift();
var b = 60*n/30;
var b = parseInt(b);
console.log(`${b} minutos`);
