var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var M = Number(lines.shift())
var A = Number(lines.shift())
var B = Number(lines.shift())
if (40 <= M <= 110 && 1 <= A < M && 1 <= B < M && A !== B){
    var C = M - (A + B)
    console.log(Math.max(A,B,C))}
