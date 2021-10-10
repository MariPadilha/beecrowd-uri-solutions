var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var A = Number(lines.shift());
var B = Number(lines.shift());
var C = Number(lines.shift());
var D = Number(lines.shift());
console.log(`DIFERENCA = ${A*B-C*D}`);
