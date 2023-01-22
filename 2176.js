const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let n = lines.shift();
let k = 0;
for(var i = 0; i < n.length; i++){
    if('1' === n[i]){
        k+=1;
    }
}
if(k % 2 === 0){
    console.log(`${n}0`);
}
if(k % 2 !== 0){
    console.log(`${n}1`);
}
