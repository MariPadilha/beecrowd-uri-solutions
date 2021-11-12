var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

while(true){
    n = Number(lines.shift());
    if(n !== 2002){
        console.log('Senha Invalida')}
    if (n === 2002){
        break;}}
console.log('Acesso Permitido')
