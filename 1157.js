const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let n = parseInt(lines.shift());
let lista = [];
let vezes = 0;
for(var i = 0; i < n+1; i++){
    if(i !== 0){
        if(n % i === 0){
            lista.push(i);
            vezes += 1;
        }
    }
}
for(var l = 0; l < vezes; l++){
    console.log(`${lista[l]}`);
}
