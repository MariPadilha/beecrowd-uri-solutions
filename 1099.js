var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
let lista = []
var n = Number(lines.shift());

for(var i = 0; i < n; i++){
    h = lines.shift().split(" ");
    var x = parseInt(h[0]); var y = parseInt(h[1]);
    if (x > y){
        var maior = x
    }
    else{
        var maior = y
    }
    if (y < x){
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
    lista.push(soma);}
for(var k = 0; k < n; k++){
    console.log(lista[k])}
