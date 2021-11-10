var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = Number(lines.shift());
var f = 0;
var ratos = 0;var coelho = 0;var sapo = 0;
for(var i = 0; i < n; i++){
    var no = lines.shift().split(" ");
    var numero = Number(no[0]); classi = no[1]
    var f = f + numero
    if(classi === "R"){
        var ratos = ratos + numero}
    else if(classi == 'C'){
        var coelho = coelho + numero}
    else if (classi == 'S'){
        var sapo = sapo + numero}}
var porcentR = ratos * 100.0
var porcentR = porcentR / f
var porcentC = coelho * 100.0
var porcentC = porcentC / f
var porcentS = sapo * 100.0
var porcentS = porcentS / f
console.log(`Total: ${f} cobaias
Total de coelhos: ${coelho}
Total de ratos: ${ratos}
Total de sapos: ${sapo}
Percentual de coelhos: ${porcentC.toFixed(2)} %
Percentual de ratos: ${porcentR.toFixed(2)} %
Percentual de sapos: ${porcentS.toFixed(2)} %`)
