var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = parseInt(lines.shift());
let e = []
for(var c = 0; c < n; c++){
    var ca = lines.shift();
    e.push(ca);}
for(var d = 0; d < n;d++){
    if(d === 0){
        console.log(`resposta ${d+1}: ${e[d]}`)}
    else{
        console.log(`resposta ${d+1}: ${e[d]}`)}}
