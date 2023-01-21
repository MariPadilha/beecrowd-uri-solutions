const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let n1 = parseInt(lines.shift());
let lista = [];
for(var i = 0; i < n1; i++){
    let [a, b] = lines.shift().split(" ");
    a = parseInt(a); b = parseInt(b); let c = a + b;
    lista.push(c);
}
for(var j = 0; j < n1; j++){
    console.log(`${lista[j]}`);
}
