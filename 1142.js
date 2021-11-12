var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = Number(lines.shift());
var vezes = 0
var g = 1
while(true){
    for(var i = g;i < g+1; i++){
        console.log(`${i} ${i+1} ${i+2} PUM`)}
    var g = g + 4
    var vezes = vezes + 1
    if(vezes === n){
        break;}}
