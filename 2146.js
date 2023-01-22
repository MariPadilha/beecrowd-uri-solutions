const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let lista = [];
let vezes = 0;
while(true){
    let n = parseInt(lines.shift());
    lista.push(n-1);
    vezes += 1;
    if(n === 9999){
        break;
    }
}
for(var i = 0; i < vezes; i++){
    console.log(`${lista[i]}`);
}
