var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var palavra = lines.shift();
var n = palavra.length
if (n >= 10){
    console.log('palavrao')}
else if (n < 10){
    console.log('palavrinha')}
