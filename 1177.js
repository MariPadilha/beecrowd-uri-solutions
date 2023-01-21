const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let T = parseInt(lines.shift());
let k = 0;
while(true){
    for(var x = 0; x < T; x++){
        console.log(`N[${k}] = ${x}`);
        k += 1;
        if(k === 1000){
            break;
        }
    }
    if(k === 1000){
        break;
    } 
}
