const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let n = Number(lines.shift());
let a = 0;
let lista = [];
let numeros = [];
for(var i = 0; i < n; i++){
    let num = Number(lines.shift());
    numeros.push(num);
    for(var j = 1; j < num; j++){
        if (num % j === 0){
            a += j;
        }
    }
    if(a === num){
        lista.push(true);
    }
    else{
        lista.push(false);
    }
    a = 0;
}
for(var l = 0; l < n; l++){
    lista[l] === true ? console.log(`${numeros[l]} eh perfeito`): console.log(`${numeros[l]} nao eh perfeito`);
}
