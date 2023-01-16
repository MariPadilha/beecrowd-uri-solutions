const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let soma = 1;
let n = 2;
for(var i = 3; i < 40; i++){
    if(i % 2 !== 0){
        soma += i/n;
        n = n + n;
    }
}
console.log(`${(soma).toFixed(2)}`);
