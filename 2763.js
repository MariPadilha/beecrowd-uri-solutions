var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var v = lines.shift()
console.log(`${v[0]}${v[1]}${v[2]}
${v[4]}${v[5]}${v[6]}
${v[8]}${v[9]}${v[10]}
${v[12]}${v[13]}`)
