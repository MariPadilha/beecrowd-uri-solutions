var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var a= Number(lines.shift())
let lista = []
var vezes = 0
for(var i = 1;i < 10001; i++){
    if(i % a === 2){
        lista.push(i)
        var vezes = vezes + 1}}
for(var j = 0; j < vezes; j++){
    console.log(`${lista[j]}`)}
