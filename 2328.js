const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let n = parseInt(lines.shift());
let a = lines.shift().split(' ');
let soma = 0;
for(var i = 0; i < n; i++){
    soma += parseInt(a[i]);
}
console.log(soma - n);
