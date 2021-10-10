var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var distancia = Number(lines.shift());
var combustivel = Number(lines.shift());
var consumo = distancia / combustivel;
console.log(`${consumo.toFixed(3)} km/l`);
