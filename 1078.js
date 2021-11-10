var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = Number(lines.shift());
for(var a = 1; a < 11;a++)
    console.log(`${a} x ${n} = ${n*a}`);
