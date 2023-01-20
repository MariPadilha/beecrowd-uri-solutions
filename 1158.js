const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let n = parseInt(lines.shift());
for(var i = 0; i < n; i++){
    let soma = 0;
    let [x, y] = lines.shift().split(" ");
    let k = parseInt(x) + parseInt(y)*2;
    for(var m = parseInt(x); m < k; m++){
        if(m % 2 !== 0){
            soma += m;
        }
    }
    console.log(soma);
}
