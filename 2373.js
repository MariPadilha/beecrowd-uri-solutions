const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let n = parseInt(lines.shift());
let soma = 0;
for(var i = 0; i < n; i++){
    let [a, b] = lines.shift().split(" ");
    if(parseInt(a) > parseInt(b)){
        soma += parseInt(b);
    }
}
console.log(soma);
