const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split("\n");
let a = parseInt(lines.shift());
if(a <= 34 && a >= 1){
    let lista = ['L', 'I', 'F', 'E', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'A', ' '];
    lista.push('P', 'R', 'O', 'B', 'L', 'E', 'M', ' ', 'T', 'O', ' ', 'B', 'E');
    lista.push(' ', 'S', 'O', 'L', 'V', 'E', 'D');
    let palavra = '';
    for(var i = 0; i < a; i++){
        palavra+=lista[i];
    }
    console.log(palavra);
}
