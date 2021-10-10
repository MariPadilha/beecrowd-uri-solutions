var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var number = Number(lines.shift());
var hours = Number(lines.shift());
var value = Number(lines.shift());
console.log(`NUMBER = ${number}
SALARY = U$ ${(hours*value).toFixed(2)}`);
