const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let d = [];
for(var c = 0; c < 20; c++){
    let f = lines.shift();
    d.push(f);
}
d.reverse();
for(var g = 0; g < 20; g++){
    console.log(`N[${g}] = ${d[g]}`);
}
