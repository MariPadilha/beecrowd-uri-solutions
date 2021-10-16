var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n1 = Number(lines.shift());
var ano = Math.floor(n1 / 365);
var n1 = n1 - ano*365;
var mes = Math.floor(n1 / 30);
if (mes >= 12){
    var n1 = (n1 - mes * 30);
}
else{
    var n1 = (n1 - mes * 30);
}
console.log(`${ano} ano(s)
${mes} mes(es)
${n1} dia(s)`);
