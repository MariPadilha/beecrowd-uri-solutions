const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let lista = [];
for(var i = 0; i < 10; i++){
    let n = Number(lines.shift());
    n === 0 || n < 0 ? lista.push(1) : lista.push(n);
}
for(var l = 0; l < 10; l++){
    console.log(`X[${l}] = ${lista[l]}`);
}
