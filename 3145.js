var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = lines.shift().split(" ");
var N = parseFloat(n[0])
var X = parseFloat(n[1])
var dis = parseFloat(X) / (parseFloat(N + 2))
console.log(`${dis.toFixed(2)}`)
