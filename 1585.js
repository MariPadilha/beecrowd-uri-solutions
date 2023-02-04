const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let n = parseInt(lines.shift());
for(var i = 0; i < n; i++){
    let [a, b] = lines.shift().split(' ');
    console.log(`${parseInt(parseInt(a)*parseInt(b)/2)} cm2`);
}
