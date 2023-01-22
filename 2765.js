const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let n = lines.shift();
let a = n.indexOf(',');
let primeira = ''; let segunda = '';
for(var i = 0; i < n.length; i++){
    if(i < a){
        primeira+=n[i];
    }else if(i > a){
        segunda+=n[i];
    }
}
console.log(primeira);
console.log(segunda);
