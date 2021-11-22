var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = Number(lines.shift())
let lista = []
for(var i = 0;i < n;i++){
    var j = lines.shift()
    if(j === 'Batmain'){
        lista.push('N')}
    else{
        lista.push('Y')}}
for(var l = 0;l < n;l++){
    console.log(`${lista[l]}`)}
