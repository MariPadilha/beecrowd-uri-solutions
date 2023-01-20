const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let lista = [];
for(var i = 0; i < 100; i++){
    let o = parseFloat(lines.shift());
    lista.push(o);
}
for(var i = 0; i < 100; i++){
    if(lista[i] <= 10){
        console.log(`A[${i}] = ${(lista[i]).toFixed(1)}`);
    }
}
