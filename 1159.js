const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
while(true){
    let n = Number(lines.shift());
    let soma = 0;
    if(n === 0){
        break;}
    for(var i = n; i < n+10; i++){
        if(i % 2 === 0){
            soma+=i;}
    }
    console.log(soma);
}
