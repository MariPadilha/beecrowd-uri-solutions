const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split("\n");
let [a, b] = lines.shift().split(' ');
if(a == '1'){
    if(b=='1'){
        console.log('A');}
    else{
        console.log('B');}
}
else{
    console.log('C');}
