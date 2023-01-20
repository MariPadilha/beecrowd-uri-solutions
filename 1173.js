const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let a = Number(lines.shift());
for(var i = 0; i < 10; i++){
    console.log(`N[${i}] = ${a}`)
    a = a + a;
}
