var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var a = parseInt(lines.shift());
var b = parseInt(lines.shift());
var bolinha = a * 2
if (bolinha >= b){
    console.log('Amelia tem todas bolinhas!')}
else if (bolinha < b){
    var c = (b - bolinha) / 2
    console.log(`Faltam ${parseInt(c)} bolinha(s)`)}
