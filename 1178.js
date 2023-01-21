const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let n = parseFloat(lines.shift());
for(var i = 0; i < 100; i++){
    console.log(`N[${i}] = ${(((n).toLocaleString('en-US',{ minimumFractionDigits: 4 })).toString()).replace(/,/g, "")}`);
    n = n / 2.0;
}
