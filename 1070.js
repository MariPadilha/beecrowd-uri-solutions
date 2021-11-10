var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var b = Number(lines.shift());
var vezes = 0;
while(vezes !== 6){
    if(b % 2 !== 0){
        console.log(b)
        var vezes = vezes + 1}
    var b = b + 1}
