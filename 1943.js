var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
let n = Number(lines.shift());
if(n === 1){
    console.log('Top 1')}
else if(n < 4){
    console.log('Top 3')}
else if(n < 6){
    console.log('Top 5')}
else if(n < 11){
    console.log('Top 10')}
else if(n < 26){
    console.log('Top 25')}
else if(n < 51){
    console.log('Top 50');}
else{
    console.log('Top 100');}
