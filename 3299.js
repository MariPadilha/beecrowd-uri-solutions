var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = lines.shift();
var k = n.indexOf('13')
if(k !== -1){
    console.log(`${n} es de Mala Suerte`)}
else{
    console.log(`${n} NO es de Mala Suerte`)}
