const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let g = parseInt(lines.shift()); let soma = 0; let n = ''; let h = '';
for(var i = 0; i < g; i++){
    soma = 0;
    n = lines.shift();
    h = n.toLowerCase();
    for(var j = 0; j < h.length; j++){
        if(soma >= 3){
            break;
        }
        if(h[j] !== 'a' && h[j] !== 'e' && h[j] !== 'i' && h[j] !== 'o' && h[j] !== 'u'){
            soma += 1;
        }
        else{
            soma = 0;
        }
    }
    if(soma >= 3){
        console.log(`${n} nao eh facil`);
    }
    else{
        console.log(`${n} eh facil`);
    }
}
