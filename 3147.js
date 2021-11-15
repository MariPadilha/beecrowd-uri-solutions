var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var A = lines.shift().split(" ");
var a = parseInt(A[0]);var b = parseInt(A[1]);var c = parseInt(A[2]);var d = parseInt(A[3]);var e = parseInt(A[4]);var f = parseInt(A[5]);
var bem = a + b + c + f
var mal = d + e
if(bem > mal || bem === mal){
    console.log('Middle-earth is safe.')}
if(bem < mal){
    console.log('Sauron has returned.')}
