const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let n = parseInt(lines.shift());
let soma = 0;
for(var i = 0; i < n; i++){
    let [a, b] = lines.shift().split(" ");
    a = parseInt(a); b = parseInt(b);
    if(a === 1001){
        c = 1.50 * b;
        soma += c;
    }
    if(a === 1002){
        c = 2.50 * b;
        soma += c;
    }
    if(a === 1003){
        c = 3.50 * b;
        soma += c;
    }
    if(a === 1004){
        c = 4.50 * b;
        soma += c;
    }
    if(a === 1005){
        c = 5.50 * b;
        soma += c;
    }
}
console.log(`${soma.toFixed(2)}`);
