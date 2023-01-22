const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let n = parseInt(lines.shift());
let lista = [];
for(var i = 0; i < n; i++){
    let j = parseInt(lines.shift());
    let s = 0;
    for(var h = 0; h < j; h++){
        if(h % 2 !== 0){
            s -= 1;
        }
        if(h % 2 === 0){
            s += 1;
        }
    }
    lista.push(s);
}
for(var l = 0; l < n; l++){
    console.log(`${lista[l]}`);
}
