var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var A = lines.shift()
var B = lines.shift()
var C = lines.shift()
console.log(`A = ${A}, B = ${B}, C = ${C}
A = ${B}, B = ${C}, C = ${A}
A = ${C}, B = ${A}, C = ${B}`)
