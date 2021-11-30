var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var vezes = 0
let lista = []
while(true){
    var j = lines.shift().split(" ")
    var a = parseInt(j[0])
    var b = parseInt(j[1])
    if(a > b){
        lista.push('Decrescente')
        var vezes = vezes + 1
    }
    else if(b > a){
        lista.push('Crescente')
        var vezes = vezes + 1
    }
    else if(a === b) {
        break;
    }
}
for(var i = 0;i < vezes; i++){
    console.log(`${lista[i]}`)}
