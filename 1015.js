var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var linha1 = lines.shift().split(" ");
var linha2 = lines.shift().split(" ");
var x1 = Number(linha1[0]);var y1 = Number(linha1[1]);var x2 = Number(linha2[0]);var y2 = Number(linha2[1]);
console.log(`${(Math.sqrt((x2 - x1)**2 + (y2 - y1)**2)).toFixed(4)}`);
