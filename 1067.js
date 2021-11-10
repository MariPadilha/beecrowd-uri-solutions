var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var b = Number(lines.shift());
for (var c = 1; c < b+1; c++){
    if(c % 2 !== 0){
        console.log(c)}}
