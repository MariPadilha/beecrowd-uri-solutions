var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var par = 0;var impar = 0;var positivo = 0;var negativo = 0;
for(var c = 1; c < 6; c++){
    var ca = Number(lines.shift());
    if(ca%2 === 0){
        var par = par + 1}
    else if(ca&2 !== 0){
        var impar = impar + 1
    }
    if(ca > 0){
        var positivo = positivo + 1
    }
    else if(ca < 0){
        var negativo = negativo + 1
    }}
console.log(`${par} valor(es) par(es)
${impar} valor(es) impar(es)
${positivo} valor(es) positivo(s)
${negativo} valor(es) negativo(s)`);
