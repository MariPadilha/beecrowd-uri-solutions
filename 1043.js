var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = lines.shift().split(' ');
var n1 = Number(n[0]);var n2 = Number(n[1]); var n3 = Number(n[2]);
if (n1 < (n2 + n3) && n2 < (n1 + n3) && n3 < (n1 + n2)){
    perimetro = n1 + n2 + n3;
    console.log(`Perimetro = ${perimetro.toFixed(1)}`)
}
else{
    area = (n1 + n2) * n3 / 2
    console.log(`Area = ${area.toFixed(1)}`)}
