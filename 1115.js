var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var vezes = 0
let lista = []
while(true){
    var n = lines.shift().split(" ");
    var a = parseInt(n[0]);var b = parseInt(n[1]);
    if (a > 0 && b > 0){
        lista.push('primeiro')
        var vezes = vezes + 1}
    if (a < 0 && b > 0){
        lista.push('segundo')
        var vezes = vezes + 1}
    if (a < 0 && b < 0){
        lista.push('terceiro')
        var vezes = vezes + 1}
    if (a > 0 && b < 0){
        lista.push('quarto')
        var vezes = vezes + 1}
    if (a === 0 || b === 0){
        break;}}
for(var i = 0;i < vezes; i++)
    console.log(`${lista[i]}`);
