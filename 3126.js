var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
let n = Number(lines.shift()); let a = n
let h = lines.shift().split(' ')
for(var i = 0; i<n; i++){
    if(h[i] != '1'){
        a -= 1}
        }
console.log(a)
