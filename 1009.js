var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var nome = lines.shift();
var salary = Number(lines.shift());
var comisao = Number(lines.shift());
console.log(`TOTAL = R$ ${(comisao*15/100+salary).toFixed(2)}`);
