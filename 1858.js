const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let n = parseInt(lines.shift());
let v = lines.shift().split(" ");
let posicao = 0; let menor = parseInt(v[0]);
for(let i = 1; i < n; i++){
    if(v[i] < menor){
        menor = v[i];
        posicao = i;
    }
}
console.log(posicao+1);
