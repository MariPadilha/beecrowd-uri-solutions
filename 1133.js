var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var x = Number(lines.shift())
var y = Number(lines.shift())
let lista = []
var vezes = 0
if(x < y){
    for(var i = x+1;i < y;i++){
        if(i % 5 === 2 || i % 5 === 3)
            lista.push(i)
            var vezes = vezes + 1}
    for(var j = 0;j < vezes;j++){
        console.log(`${lista[j]}`)}}
if(x > y){
    for(var i = y+1;i < x; i++){
        if(i % 5 === 2 || i % 5 === 3){
            lista.push(i)
            var vezes = vezes + 1}}
    for(var j = 0;j < vezes; j++){
        console.log(`${lista[j]}`)}}
