var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = Number(lines.shift());
if (n%2===0){
     var brancas = parseInt(n*n/2)
     var pretas = parseInt(n*n/2)
     console.log(`${brancas} casas brancas e ${pretas} casas pretas`)}
if (n%2!==0){
     var pretas = parseInt(n*n/2)
     var brancas = pretas+1
     console.log(`${brancas} casas brancas e ${pretas} casas pretas`)}
