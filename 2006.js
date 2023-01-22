const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let a = lines.shift();
let v = lines.shift().split(" ");
let g = 0;
for(var i = 0; i < v.length; i++){
    if(a === v[i]){
        g+=1;
    }
}
console.log(g);
