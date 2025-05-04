const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let g = parseInt(lines.shift()); let soma = 0; let str = '';
for(var i = 0; i < g; i++){
    soma = 0; str = '';
    n = lines.shift();
    str+=n[2]; str+=n[3];
    soma+=parseInt(str); str = '';
    str+=n[5]; str+=n[6]; str+=n[7];
    soma+=parseInt(str); str = '';
    str+=n[11]; str+=n[12];
    soma+=parseInt(str);
    console.log(soma);
}
