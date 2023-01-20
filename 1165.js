const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let a = Number(lines.shift());
for(var l = 0; l < a; l++){
    let n = Number(lines.shift());
    let primo = 0;
    for(var i = 1; i < n+1; i++){
        if(n % i === 0){
            primo += 1;
        }
    }
    primo === 2 && 1 !== n ? console.log(`${n} eh primo`): console.log(`${n} nao eh primo`);
}
