const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let n = parseInt(lines.shift());
let [a, b, c] = lines.shift().split(" ");
if(parseInt(a) < n || parseInt(b) < n || parseInt(c) < n){
    console.log('N');
}
else{
    console.log('S');
}
