const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let vezes = 1;
while(true){
    let n = parseInt(lines.shift());
    if(n == -1){
        break;
    }
    console.log(`Experiment ${vezes}: ${parseInt(n/2)} full cycle(s)`);
    vezes+=1;
}
