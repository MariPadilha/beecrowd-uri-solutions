const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let horarios = lines.shift().split(" ");
let fuso = 0;
for(let x of horarios){
    fuso += parseInt(x);
}
if(fuso < 0){
    fuso = 24 - Math.abs(fuso);
}
if(fuso > 24){
    fuso = fuso - 24;
}
console.log(fuso);
