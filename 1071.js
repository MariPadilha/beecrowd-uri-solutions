var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var x = Number(lines.shift());
var y = Number(lines.shift());
if (x > y){
    var maior = x
}
else{
    var maior = y
}
if(y < x){
    var menor = y
}
else{
    var menor = x
}
var menor = menor + 1
var soma = 0
while(menor < maior){
    if(menor % 2 !== 0){
        var soma = soma + menor}
    var menor = menor + 1}
console.log(soma)
