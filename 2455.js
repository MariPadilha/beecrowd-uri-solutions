const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let [a, b, c, d] = lines.shift().split(' ');
let n1 = parseInt(a) * parseInt(b);
let n2 = parseInt(c) * parseInt(d);
if(n1 == n2){
    console.log(0);
}
else if(n1 > n2){
    console.log(-1);
}
else{
    console.log(1);
}
