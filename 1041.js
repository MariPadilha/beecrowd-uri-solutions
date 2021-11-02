var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = lines.shift().split(' ');
var n1 = Number(n[0]);var n2 = Number(n[1]);
if (n1 > 0 && n2 > 0){
    console.log('Q1');}
else if (n1 < 0 && n2 > 0){
    console.log('Q2');}
else if (n1 < 0 && n2 < 0){
    console.log('Q3');}
else if (n1 > 0 && n2 < 0){
    console.log('Q4');}
else if (n1 === 0 && n2 !== 0){
    console.log('Eixo Y');}
else if (n1 !== 0 && n2 === 0){
    console.log('Eixo X');}
else if (n1 === 0 && n2 === 0){
    console.log('Origem');}
