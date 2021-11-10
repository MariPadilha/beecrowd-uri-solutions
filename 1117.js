var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var vezes = 0;var inva = 0;var media = 0;
while(true){
    N = parseFloat(lines.shift());
    if(vezes === 2){
        break;}
    else if (N >= 0 && N <= 10){
        var vezes = vezes + 1
        var media = media + N}
    else{
        var inva = inva + 1}}
for(var i = 0; i < inva;i++){
    console.log('nota invalida')}
var media = media / 2
console.log(`media = ${media.toFixed(2)}`);
