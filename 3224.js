var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var A = lines.shift();
var ME = lines.shift();
var m = ME.length
var a = A.length
if(m <= a){
    console.log('go')}
else if (m > a){
    console.log('no')}
