const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split("\n");

let [n, ind] = lines.shift().split(' ');
ind = parseInt(ind)-1;
let lista = [];
for(var i = 0; i < parseInt(n); i++){
    let p = lines.shift();
    lista.push(p);
}
lista.sort();
console.log(lista[ind]);
