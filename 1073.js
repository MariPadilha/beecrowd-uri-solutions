var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = Number(lines.shift());
if(n % 2 !== 0){
    for(var i = 2; i < n; i += 2){
        var h = Math.pow(i, 2);
        console.log(`${i}^2 = ${h}`)}}
if(n % 2 === 0){
    for(var i = 2; i < n+1; i += 2){
        var h = Math.pow(i, 2);
        console.log(`${i}^2 = ${h}`)}}
