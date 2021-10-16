var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n1 = Number(lines.shift());
var hora = Math.floor(n1 / 3600);
var n1 = n1 - hora*3600;
var minutos = Math.floor(n1 / 60);
if (minutos >= 60){
    var n1 = (n1 - minutos * 60);
}
else{
    var n1 = (n1 - minutos * 60);
}
console.log(`${hora}:${minutos}:${n1}`);
