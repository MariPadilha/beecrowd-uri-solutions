const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let [n, fim] = lines.shift().split(' ');
let str = '';
n = parseInt(n); fim = parseInt(fim);
for(var i = 1; i < fim+1; i++){
    str += i.toString();
    if(i % n === 0){
        console.log(str);
        str = '';
    }
    else{
        str += ' ';
    }
}
