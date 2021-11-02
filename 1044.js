var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = lines.shift().split(' ');
var n1 = Number(n[0]);var n2 = Number(n[1]);
if (n1 % n2 === 0 || n2 % n1 === 0){
    console.log('Sao Multiplos');}
else{
    console.log('Nao sao Multiplos');}
