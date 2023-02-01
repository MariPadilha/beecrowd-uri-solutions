const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let a = lines.shift().split(' ');
let b = lines.shift().split(' ');
let v = 0;
for(var i = 0; i < 5; i++){
    if(a[i] == b[i]){
        v+=1;
        break;
    }
}
v == 0 ? console.log('Y') : console.log('N');
