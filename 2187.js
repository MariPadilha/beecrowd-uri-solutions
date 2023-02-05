const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split("\n");
let vezes = 1;
while(true){
    let n = parseInt(lines.shift());
    if(n === 0){
        break;
    }
    let i = parseInt(n/50);
    let n50 = n - i*50;
    let j = parseInt(n50/10);
    let n10 = n50 - j*10;
    let k = parseInt(n10/5);
    let n5 = n10 - k*5;
    let l = n5;
    console.log(`Teste ${vezes}
${i} ${j} ${k} ${l}
`);
    vezes+=1;
    }
