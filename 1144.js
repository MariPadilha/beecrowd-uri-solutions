var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var a = parseInt(lines.shift());

for (var i = 1; i < a+1;i++){
    var b = Math.pow(i, 2);
    var c = b * i
    console.log(`${i} ${b} ${c}
${i} ${b+1} ${c+1}`)}
