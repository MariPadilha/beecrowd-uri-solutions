var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var N = Number(lines.shift())
if(N === 0){
    console.log('E')}
else if(N >= 1 && N <=35){
    console.log('D')}
else if(N >= 36 && N <=60){
    console.log('C')}
else if(N >= 61 && N <=85){
    console.log('B')}
else if(N >= 86 && N <= 100){
    console.log('A')}
