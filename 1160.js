const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let n = parseInt(lines.shift());
for(var i = 0; i < n; i++){
    let [A, B, perA, perB] = lines.shift().split(" ");
    A = parseInt(A); B = parseInt(B); perA = parseFloat(perA); perB = parseFloat(perB);
    let anos = 0;
    while(true){
        A += parseInt(A*perA/100.0);
        B += parseInt(B*perB/100.0);
        anos += 1;
        if(anos > 100){
            console.log('Mais de 1 seculo.');
            break;
        }
        if(A > B){
            console.log(`${anos} anos.`);
            break;
        }
    }
}
