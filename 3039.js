var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = Number(lines.shift())
var masculino = 0;var feminino = 0
for(var i = 0; i < n; i++){
    var j = lines.shift().split(" ")
    var b = j[1]
    if(b === 'M'){
        var masculino = masculino + 1}
    else if(b === 'F'){
        var feminino = feminino + 1}}
console.log(`${masculino} carrinhos
${feminino} bonecas`)
