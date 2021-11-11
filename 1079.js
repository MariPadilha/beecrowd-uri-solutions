var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = Number(lines.shift())
let lista = []
for(var i = 0;i < n;i++){
    var ba = lines.shift().split(" ");
    var a = parseFloat(ba[0])
    var b = parseFloat(ba[1])
    var c = parseFloat(ba[2])
    var media = (2.0 * a) + (3.0 * b) + (5.0 * c)
    var media = media / 10
    lista.push(media)}
for(var h = 0; h < n; h++){
    console.log(`${lista[h].toFixed(1)}`)}
