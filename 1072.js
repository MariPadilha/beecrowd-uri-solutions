var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = Number(lines.shift());
var dentro = 0;var fora = 0;
for(var i = 0; i < n; i++){
    var l = Number(lines.shift());
    if (l >= 10 && l <= 20){
        dentro = dentro + 1}
    else{
        fora += 1}}
console.log(`${dentro} in`)
console.log(`${fora} out`)
