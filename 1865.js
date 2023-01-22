const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let a =  parseInt(lines.shift());
let lista = [];
let vezes = 0;
for(var i = 0; i < a; i++){
    let [b, c] = lines.shift().split(" ");
    if(b === 'Thor'){
        lista.push('Y');
        vezes += 1;
    }
    if(b !== 'Thor'){
        lista.push('N');
        vezes += 1;
    }
}
for(var j = 0; j < vezes; j++){
    console.log(`${lista[j]}`);
}
