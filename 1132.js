const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let a = parseInt(lines.shift()); let b = parseInt(lines.shift());
let total = 0;
for(var i = Math.min(a,b); i < Math.max(a,b); i++){
    if(i % 13 !== 0){
        total+=i;}
}
console.log(total);
