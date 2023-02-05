const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split("\n");

let comida = 0;
let maior = 0;
let vezes = 0;
let n = parseInt(lines.shift());
while(true){
    let esqDire = lines.shift();
    for(var i = 0; i < esqDire.length; i++){
        if(esqDire[i] == 'o'){
            comida += 1;
            if(comida > maior){
                maior = comida;
            }
        }
        else if(esqDire[i] == 'A'){
            comida = 0;
        }
    }
    vezes += 1;
    if(vezes == n){
        break;
    }
    let direEsqu = lines.shift();
    for(var i = direEsqu.length; i > -1; i--){
        if(direEsqu[i] == 'o'){
            comida += 1;
        }
            if(comida > maior){
                maior = comida;
            }
        if(direEsqu[i] == 'A'){
            comida = 0;
        }
    }
    vezes += 1;
    if(vezes == n){
        break;
    }
}
console.log(maior);
