var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = lines.shift()
var k = n.length
if (k <= 80){
    console.log('YES')}
else if(k > 80){
    console.log('NO')}
