const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split("\n");

let vitoria = 0;
let n = parseInt(lines.shift());
let l1 = 0; let l2 = 0;
for(var i = 0; i < n; i++){
    let a = lines.shift();
    l1 = a[0];
    for(let j = 1; j < a.length; j++){
        l2 = a[j];
        if(l1 == 'C' && l2 == 'D'){
            vitoria -= 1;
        }
        l1 = a[j];
    }
    vitoria+=1;
}
console.log(vitoria);
