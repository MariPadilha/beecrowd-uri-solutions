var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var R = parseFloat(lines.shift());
if(0 < R <= 10){
    var cir = (R*2) * 3.14
    console.log(`${cir.toFixed(2)}`)}
