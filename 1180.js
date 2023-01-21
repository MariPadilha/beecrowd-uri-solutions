const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let n = Number(lines.shift());
let numeros = lines.shift().split(" ");
let min = 0; 
let posicao = 0;
for(var i = 0; i < n; i++){
    x = parseInt(numeros[i]);
    if(i===0) {
        min = x; posicao = i;
    } 
    else if(x < min){ 
        min = x; posicao = i;
    }
}
console.log(`Menor valor: ${min}
Posicao: ${posicao}`);
