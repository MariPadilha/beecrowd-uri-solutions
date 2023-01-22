const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let [a, b] = lines.shift().split(" ");
a = parseInt(a); b = parseInt(b);
for(var c = 0; c < b; c++){
    let f = lines.shift();
    if(f === 'fechou'){
        a += 1;
    }
    if(f === 'clicou'){
        a -= 1;
    }
}
console.log(a);
