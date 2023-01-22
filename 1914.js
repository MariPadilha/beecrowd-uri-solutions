const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let P = parseInt(lines.shift());
let lista = [];
for(var i = 0; i < P; i++){
    let [a, b, c, d] = lines.shift().split(" ");
    let [e, f] = lines.shift().split(" ");
    e = parseInt(e); f = parseInt(f);
    let soma = e + f;
    if(soma % 2 === 0 && b === 'PAR'){
        lista.push(a);
    }
    if(soma % 2 === 0 && b === 'IMPAR'){
        lista.push(c);
    }
    if(soma % 2 !== 0 && b === 'PAR'){
        lista.push(c);
    }
    if(soma % 2 !== 0 && b === 'IMPAR'){
        lista.push(a);
    }
}
for(var k = 0; k < P; k++){
    console.log(`${lista[k]}`);
}
