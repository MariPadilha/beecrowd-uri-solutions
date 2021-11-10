var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var s = 0;
for(var c = 1; c < 6; c++){
    var ca = Number(lines.shift());
    if(ca%2 === 0){
        var s = s + 1}}
console.log(`${s} valores pares`);
