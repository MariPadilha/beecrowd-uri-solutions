var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var l1 = lines.shift().split(' ');
var l2 = lines.shift().split(' ');
var a = Number(l1[1]);var b = Number(l1[2]);var c = Number(l2[1]);var d = Number(l2[2]);
console.log(`VALOR A PAGAR: R$ ${((a*b)+(c*d)).toFixed(2)}`);
