var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = lines.shift().split(' ');
var a = n[0]; var b = Number(n[1]);
if (a === '1'){
    var a = 4.00}
if (a === '2'){
    var a = 4.50}
if (a === '3'){
    var a = 5.00}
if (a === '4'){
    var a = 2.00}
if (a === '5'){
    var a = 1.50}
console.log(`Total: R$ ${(a*b).toFixed(2)}`);
