const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let final = 0;
let n = parseInt(lines.shift());
for(var i = 0; i < n; i++){
    let [preco, gramas] = lines.shift().split(' ');
    if(i === 0){
        final = parseFloat(preco) * 1000.0 / parseFloat(gramas);
    }
    else if(parseFloat(preco) * 1000.0 / parseFloat(gramas) < final){
        final = parseFloat(preco) * 1000.0 / parseFloat(gramas);
    }
}
console.log(`${(final).toFixed(2)}`);
