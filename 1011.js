var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var raio = lines.shift();
console.log(`VOLUME = ${((4/3) * 3.14159 * raio ** 3).toFixed(3)}`);
