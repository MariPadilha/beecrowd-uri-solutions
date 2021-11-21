var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var f = lines.shift().split(" ")
var a = Number(f[0]);var b = Number(f[1]); var c = Number(f[2]); var d = Number(f[3]);
if(a === 1){
    console.log('1')}
else if(b === 1){
    console.log('2')}
else if(c === 1){
    console.log('3')}
else if(d === 1){
    console.log('4')}
