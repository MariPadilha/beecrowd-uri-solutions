const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let x = parseInt(lines.shift());
let y = x+1;
let z = 0;
while(true){
    z = parseInt(lines.shift());
    if(z >= y){
        break;}
}
let numeros = 1;
for(var i = x+1; i < z+1; i++){
    x += i;
    numeros += 1;
    if(x >= z){
        break;}
}
console.log(numeros);
