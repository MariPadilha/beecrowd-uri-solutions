const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let n = parseInt(lines.shift());
let soma = 1;
let lista = [];
lista.push(parseInt(lines.shift()));
for(var i = 1; i < n; i++){
    let numero = parseInt(lines.shift());
    if(numero !== lista[i-1]){
        soma+=1;
    }
    lista.push(numero);
}
console.log(soma);
